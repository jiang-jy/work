/*
 * This file was automatically generated by tecsgen.
 * Move and rename like below before editing,
 *   gen/tEchonet_templ.c => src/tEchonet.c
 * to avoid to be overwritten by tecsgen.
 */
/* #[<PREAMBLE>]#
 * Don't edit the comments between #[<...>]# and #[</...>]#
 * These comment are used by tecsmerege when merging.
 *
 * call port function #_TCPF_#
 * call port: cEchonet signature: sLight context:task
 *   ER             cEchonet_onOffPropertySet( const uint8_t* src, int size, bool_t* anno );
 *
 * #[</PREAMBLE>]# */
/*
 * 
 *
 *
 *　　　　　　　　　　　　　   　call Light　　　　    entry    call           entry
 *  +-------------+           +-------------+         +------------        +-------------+                     |------
 *  |             |           |             |         | tEchonet  |        |             |                     |
 *  |   tTask     | sTaskBody |   tTaskMain |sEchonet | Echonet   |slight  |  tLightEchonet  |                 |tLight
 *  |   Task      |-----------|>  TaskMain  |-------- |           |--------|>  Light     |              -------| Light
 *  |             |cTask      |             |         |           |        |             |(関数の定義)          |------
 *  |             |Body       |             |         |           |        |             |
 *  +-------------+           +-------------+         +------------       +-------------+                   other interface 
 *                        eTaskMain      cTaskMain            cEchonet     eLight
 *												                           light-echonet  interface 
 *						                              echonet interface                                       一般的照明用component interface						   	

 */ 
/* Put prototype declaration and/or variale definition here #_PAC_# */
#include "tEchonet_tecsgen.h"
#include "tLight_tecsgen.h"
#include "echonet_cfg.h"
#include "gpio_api.h"
#include "kernel_cfg.h"


#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif


gpio_t pow_led;
/* リレー出力 */
gpio_t relay_sw;
/* カラーLED */
gpio_t led_blue, led_green, led_red;
/* ユーザースイッチ CN16-4 */
gpio_t sw1, sw2;



enum main_state_t {
	main_state_start,
	main_state_idle,
	main_state_search,
};

static int main_timer = TMO_FEVR;
static int main_btn_timer = TMO_FEVR;
static enum main_state_t main_state = main_state_start;
bool_t main_btn1_state;
static int main_btn1_count = 0;
bool_t main_btn2_state;
static int main_btn2_count = 0;


/* entry port function #_TEPF_# */
/* #[<ENTRY_PORT>]# eEchonet
 * entry port: eEchonet
 * signature:  sEchonet
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEchonet_initialize
 * name:         eEchonet_initialize
 * global_name:  tEchonet_eEchonet_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEchonet_initialize(CELLIDX idx)
{
	CELLCB1	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	uint8_t btn1, btn2;

	/* LEDの初期化 */
	gpio_init_out(&pow_led, LED_USER);
	gpio_init_out(&relay_sw, P4_4);
	gpio_init_out(&led_blue, LED_BLUE);
	gpio_init_out(&led_green, LED_GREEN);
	gpio_init_out(&led_red, LED_RED);

	/* スイッチの初期化 */
	gpio_init_in(&sw1, USER_BUTTON0);
	gpio_init_in(&sw2, P1_12);

	/* カラーLEDを消灯 */
	gpio_write(&led_blue, 0);
	gpio_write(&led_green, 0);
	gpio_write(&led_red, 0);

	/* ECHONETミドルウェアを起動するのを待つ */
	main_state = main_state_start;
	main_timer = 1000 * 1000;

	/* 10ms後にボタン状態を確認 */
	main_btn_timer = 10 * 1000;

	/* ボタン状態読み込み */
	btn1 = gpio_read(&sw1);
	btn2 = gpio_read(&sw2);
	main_btn1_state = btn1 != 0;
	main_btn2_state = btn2 != 0;

	/* メインタスクを起動 */
	ER ret = act_tsk(MAIN_TASK);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "act_tsk");
	}
}

/* #[<ENTRY_FUNC>]# eEchonet_getTimer
 * name:         eEchonet_getTimer
 * global_name:  tEchonet_eEchonet_getTimer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int
eEchonet_getTimer(CELLIDX idx)
{
	CELLCB1	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	int result = main_timer;

	if ((result == TMO_FEVR)
		|| ((main_btn_timer != TMO_FEVR) && (main_btn_timer < result))) {
		result = main_btn_timer;
	}

	return result;
}

/* #[<ENTRY_FUNC>]# eEchonet_progress
 * name:         eEchonet_progress
 * global_name:  tEchonet_eEchonet_progress
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEchonet_progress(CELLIDX idx, int interval)
{
	CELLCB1	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	/* Put statements here #_TEFB_# */
		if (main_timer != TMO_FEVR) {
		main_timer -= interval;
		if (main_timer < 0) {
			main_timer = 0;
		}
	}

	if (main_btn_timer != TMO_FEVR) {
		main_btn_timer -= interval;
		if (main_btn_timer < 0) {
			main_btn_timer = 0;
		}
	}
}

/* #[<ENTRY_FUNC>]# eEchonet_ReciveService
 * name:         eEchonet_ReciveService
 * global_name:  tEchonet_eEchonet_ReciveService
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEchonet_ReciveService(CELLIDX idx, const T_EDATA* esv)
{
	CELLCB1	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	/* Put statements here #_TEFB_# */
	ER ret;
	ID eobjid;
	uint8_t epc;
	uint8_t pdc;
	uint8_t p_edt[256];
	T_ENUM_EPC enm;

	eobjid = ecn_get_eobj(esv);
	if (eobjid == EOBJ_NULL) {
		syslog(LOG_ERROR, "ecn_get_eobj");
	}

	ret = ecn_itr_ini(&enm, esv);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_itr_ini");
		return;
	}

	for (;;) {
		while ((ret = ecn_itr_nxt(&enm, &epc, &pdc, p_edt)) == E_OK) {
			switch (epc) {
			case 0xD6:
				switch (main_state) {
				case main_state_search:
					if (eobjid == HUMAN_DETECTION_SENSER_ENOD) {
						/* 人体検知センサ検索完了 */
						main_state = main_state_idle;
						main_timer = TMO_FEVR;
					}
					break;
				}
				break;
			}
		}
		if (ret != E_BOVR) {
			syslog(LOG_ERROR, "ecn_itr_nxt");
			break;
		}
		if (enm.is_eof)
			break;
	}
}

/* #[<ENTRY_FUNC>]# eEchonet_breakWait
 * name:         eEchonet_breakWait
 * global_name:  tEchonet_eEchonet_breakWait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEchonet_breakWait(CELLIDX idx, const uint8_t* brkdat, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB1	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	//return(ercd);
	ER ret;

	switch (main_state) {
	case main_state_idle:
		if (len < 2)
			break;

		switch (brkdat[0]) {
		case 0x01:
			break;
		case 0xB1:
			//human_detectino_changed(brkdat[1]);  //用不到 注释掉了
			break;
		}
		break;
	}
}

/* #[<ENTRY_FUNC>]# eEchonet_timeOut
 * name:         eEchonet_timeOut
 * global_name:  tEchonet_eEchonet_timeOut
 * oneway:       false
 * #[</ENTRY_FUNC>]# */

static void main_btn1_change(bool_t push);
static void main_btn2_change(bool_t push);
enum lighting_mode_t {
	lighting_mode_auto,		/* 自動の場合 */
	lighting_mode_normal,	/* 通常灯の場合 */
	lighting_mode_night,	/* 常夜灯の場合 */
	lighting_mode_coler		/* カラー灯の場合 */
};
static enum lighting_mode_t main_mode = lighting_mode_auto;

/*
 * ボタン１状態変化処理
 */
static void main_btn1_change(bool_t push)
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[1];
	bool_t main_on = false;//jia de 
	/* 押されて戻った時に処理する */
	if (push)
		return;

	/* ON/OFF状態の切り替え */
	main_on = !main_on;
	p_edt[0] = main_on ? 0x30 : 0x31;

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, GENERAL_LIGHTING_CLASS_EOBJ, 0x80, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
}

/*
 * ボタン２状態変化処理
 */
static void main_btn2_change(bool_t push)
{
	ER ret;
	T_EDATA *esv;
	uint8_t p_edt[1];

	/* 押されて戻った時に処理する */
	if (push)
		return;

	/* 点灯モードの切り替え */
	switch (main_mode) {
	/* 自動の場合 */
	case lighting_mode_auto:
		/* 通常灯に変更 */
		main_mode = lighting_mode_normal;
		p_edt[0] = 0x42;
		break;
	/* 通常灯の場合 */
	case lighting_mode_normal:
		/* 常夜灯の場合 */
		main_mode = lighting_mode_night;
		p_edt[0] = 0x43;
		break;
	/* 常夜灯の場合 */
	case lighting_mode_night:
		/* カラー灯の場合 */
		main_mode = lighting_mode_coler;
		p_edt[0] = 0x45;
		break;
	/* カラー灯の場合 */
	case lighting_mode_coler:
	default:
		/* 自動の場合 */
		main_mode = lighting_mode_auto;
		p_edt[0] = 0x41;
		break;
	}

	/* プロパティ設定電文作成 */
	ret = ecn_esv_setc(&esv, GENERAL_LIGHTING_CLASS_EOBJ, 0xB6, 1, p_edt);
	if (ret != E_OK) {
		syslog(LOG_ERROR, "ecn_esv_setc");
		return;
	}

	/* 電文送信 */
	ecn_snd_esv(esv);
}

/*
 * タイムアウト処理
 */
static void main_btn_ontimer()
{
	uint8_t btn1, btn2;

	/* 10ms後にボタン状態を確認 */
	main_btn_timer = 10 * 1000;

	/* ボタン状態読み込み */
	btn1 = gpio_read(&sw1);
	btn2 = gpio_read(&sw2);

	/* ボタン１の処理 */
	if ((btn1 != 0) && !main_btn1_state) {
		main_btn1_count++;
		if (main_btn1_count > 10) {
			main_btn1_count = 0;
			main_btn1_state = true;

			main_btn1_change(true);
		}
	}
	else if ((btn1 == 0) && main_btn1_state) {
		main_btn1_count++;
		if (main_btn1_count > 10) {
			main_btn1_count = 0;
			main_btn1_state = false;

			main_btn1_change(false);
		}
	}

	/* ボタン２の処理 */
	if ((btn2 != 0) && !main_btn2_state) {
		main_btn2_count++;
		if (main_btn2_count > 10) {
			main_btn2_count = 0;
			main_btn2_state = true;

			main_btn2_change(true);
		}
	}
	else if ((btn2 == 0) && main_btn2_state) {
		main_btn2_count++;
		if (main_btn2_count > 10) {
			main_btn2_count = 0;
			main_btn2_state = false;

			main_btn2_change(false);
		}
	}
}



static void main_ontimer()
{
	ER ret;

	switch (main_state) {
	case main_state_start:
		/* ECHONETミドルウェアを起動 */
		ret = ecn_sta_svc();
		if (ret != E_OK) {
			syslog(LOG_ERROR, "ecn_sta_svc");
		}

		/* １秒後に人体検知センサを検索 */
		main_state = main_state_search;
		main_timer = 1000 * 1000;
		break;
	case main_state_search:
		/* 人体検知センサ再検索 */
		//main_search();  //注释掉了. 因为用不到
		main_state = main_state_search;
		main_timer = 5000 * 1000;
		break;
	}
}


void
eEchonet_timeOut(CELLIDX idx)
{
	CELLCB1	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	/* Put statements here #_TEFB_# */
	if (main_timer == 0) {
		main_ontimer();
	}

	if (main_btn_timer == 0) {
		main_btn_ontimer();
	}
}

/* #[<POSTAMBLE>]#
 *   Put non-entry functions below.
 * #[</POSTAMBLE>]#*/