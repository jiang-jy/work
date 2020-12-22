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
 *   void           cEchonet_OnPropertySet( );
 *   void           cEchonet_OffPropertySet( );
 *
 * #[</PREAMBLE>]# */

/* Put prototype declaration and/or variale definition here #_PAC_# */
#include "tEchonet_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

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
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEchonet_getTimer
 * name:         eEchonet_getTimer
 * global_name:  tEchonet_eEchonet_getTimer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int
eEchonet_getTimer(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEchonet_progress
 * name:         eEchonet_progress
 * global_name:  tEchonet_eEchonet_progress
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEchonet_progress(CELLIDX idx, int interval)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEchonet_ReciveService
 * name:         eEchonet_ReciveService
 * global_name:  tEchonet_eEchonet_ReciveService
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEchonet_ReciveService(CELLIDX idx, const T_EDATA* esv)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

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
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEchonet_timeOut
 * name:         eEchonet_timeOut
 * global_name:  tEchonet_eEchonet_timeOut
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEchonet_timeOut(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   Put non-entry functions below.
 * #[</POSTAMBLE>]#*/
