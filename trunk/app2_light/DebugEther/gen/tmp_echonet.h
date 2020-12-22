/*  1 "./gen/tmp_C_src.c" */
/*  1 "<built-in>" */
/*  1 "<command-line>" */
/*  1 "./gen/tmp_C_src.c" */
/*  34 "./gen/tmp_C_src.c" */
typedef struct { int dummy; } va_list;

/*  1 "../../ntshell/echonet/echonet.h" 1 */
/*  41 "../../ntshell/echonet/echonet.h" */
/*  1 "../../asp3_dcre/include/t_stddef.h" 1 */
/*  65 "../../asp3_dcre/include/t_stddef.h" */
/*  1 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" 1 */
/*  61 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" */
/*  1 "../../musl-1.1.18/include/stdint.h" 1 */
/*  20 "../../musl-1.1.18/include/stdint.h" */
/*  1 "../../musl-1.1.18/include/bits/alltypes.h" 1 */
/*  93 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef unsigned int uintptr_t;
/*  108 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef int intptr_t;
/*  124 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef signed char int8_t;




typedef short int16_t;




typedef int int32_t;




typedef long long int64_t;




typedef long long intmax_t;




typedef unsigned char uint8_t;




typedef unsigned short uint16_t;




typedef unsigned int uint32_t;




typedef unsigned long long uint64_t;
/*  174 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef unsigned long long uintmax_t;
/*  21 "../../musl-1.1.18/include/stdint.h" 2 */

typedef int8_t int_fast8_t;
typedef int64_t int_fast64_t;

typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_fast8_t;
typedef uint64_t uint_fast64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;
/*  95 "../../musl-1.1.18/include/stdint.h" */
/*  1 "../../musl-1.1.18/include/bits/stdint.h" 1 */
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
/*  96 "../../musl-1.1.18/include/stdint.h" 2 */
/*  62 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" 2 */



/*  1 "../../asp3_dcre/arch/gcc/tool_stddef.h" 1 */
/*  81 "../../asp3_dcre/arch/gcc/tool_stddef.h" */
/*  1 "../../musl-1.1.18/include/stddef.h" 1 */
/*  17 "../../musl-1.1.18/include/stddef.h" */
/*  1 "../../musl-1.1.18/include/bits/alltypes.h" 1 */
/*  18 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef unsigned wchar_t;
/*  36 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef struct { long long __ll; long double __ld; } max_align_t;
/*  88 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef unsigned int size_t;
/*  98 "../../musl-1.1.18/include/bits/alltypes.h" */
typedef int ptrdiff_t;
/*  18 "../../musl-1.1.18/include/stddef.h" 2 */
/*  82 "../../asp3_dcre/arch/gcc/tool_stddef.h" 2 */
/*  1 "../../musl-1.1.18/include/limits.h" 1 */



/*  1 "../../musl-1.1.18/include/features.h" 1 */
/*  5 "../../musl-1.1.18/include/limits.h" 2 */



/*  1 "../../musl-1.1.18/include/bits/limits.h" 1 */
/*  9 "../../musl-1.1.18/include/limits.h" 2 */
/*  83 "../../asp3_dcre/arch/gcc/tool_stddef.h" 2 */
/*  191 "../../asp3_dcre/arch/gcc/tool_stddef.h" */
typedef float float32_t;
typedef double double64_t;
/*  66 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" 2 */




/*  1 "../../asp3_dcre/arch/arm_gcc/rza1/chip_stddef.h" 1 */
/*  68 "../../asp3_dcre/arch/arm_gcc/rza1/chip_stddef.h" */
/*  1 "../../asp3_dcre/arch/arm_gcc/common/core_stddef.h" 1 */
/*  69 "../../asp3_dcre/arch/arm_gcc/rza1/chip_stddef.h" 2 */
/*  71 "../../asp3_dcre/target/gr_peach_gcc/target_stddef.h" 2 */






static inline void
TOPPERS_assert_abort(void)
{



 __asm__ volatile("bkpt #0");
}
/*  66 "../../asp3_dcre/include/t_stddef.h" 2 */
/*  84 "../../asp3_dcre/include/t_stddef.h" */
struct TOPPERS_dummy_t { int TOPPERS_dummy_field; };
typedef void (*TOPPERS_fp_t)(struct TOPPERS_dummy_t);






typedef int bool_t;

typedef signed int int_t;
typedef unsigned int uint_t;

typedef signed long long_t;
typedef unsigned long ulong_t;

typedef int_t FN;
typedef int_t ER;
typedef int_t ID;
typedef uint_t ATR;
typedef uint_t STAT;
typedef uint_t MODE;
typedef int_t PRI;
typedef uint32_t TMO;
typedef uint32_t RELTIM;

typedef uint64_t SYSTIM;



typedef uint32_t PRCTIM;
typedef uint32_t HRTCNT;

typedef TOPPERS_fp_t FP;

typedef int_t ER_BOOL;
typedef int_t ER_ID;
typedef int_t ER_UINT;

typedef uintptr_t MB_T;

typedef uint32_t ACPTN;
typedef struct acvct {
 ACPTN acptn1;
 ACPTN acptn2;
 ACPTN acptn3;
 ACPTN acptn4;
} ACVCT;
/*  42 "../../ntshell/echonet/echonet.h" 2 */
/*  1 "../../asp3_dcre/include/t_syslog.h" 1 */
/*  119 "../../asp3_dcre/include/t_syslog.h" */
typedef struct {
 uint_t logtype;
 HRTCNT logtim;
 intptr_t logpar[6];
} SYSLOG;
/*  134 "../../asp3_dcre/include/t_syslog.h" */
typedef struct t_syslog_rlog {
 uint_t count;
 uint_t lost;
 uint_t logmask;
 uint_t lowmask;
} T_SYSLOG_RLOG;
/*  152 "../../asp3_dcre/include/t_syslog.h" */
extern ER tSysLog_eSysLog_write(uint_t prio, const SYSLOG *p_syslog) ;

static inline void
_syslog_0(uint_t prio, uint_t type)
{
 SYSLOG logbuf;

 logbuf.logtype = type;
 (void) tSysLog_eSysLog_write(prio, &logbuf);
}

static inline void
_syslog_1(uint_t prio, uint_t type, intptr_t arg1)
{
 SYSLOG logbuf;

 logbuf.logtype = type;
 logbuf.logpar[0] = arg1;
 (void) tSysLog_eSysLog_write(prio, &logbuf);
}

static inline void
_syslog_2(uint_t prio, uint_t type, intptr_t arg1, intptr_t arg2)
{
 SYSLOG logbuf;

 logbuf.logtype = type;
 logbuf.logpar[0] = arg1;
 logbuf.logpar[1] = arg2;
 (void) tSysLog_eSysLog_write(prio, &logbuf);
}

static inline void
_syslog_3(uint_t prio, uint_t type, intptr_t arg1, intptr_t arg2, intptr_t arg3)
{
 SYSLOG logbuf;

 logbuf.logtype = type;
 logbuf.logpar[0] = arg1;
 logbuf.logpar[1] = arg2;
 logbuf.logpar[2] = arg3;
 (void) tSysLog_eSysLog_write(prio, &logbuf);
}

static inline void
_syslog_4(uint_t prio, uint_t type, intptr_t arg1, intptr_t arg2,
           intptr_t arg3, intptr_t arg4)
{
 SYSLOG logbuf;

 logbuf.logtype = type;
 logbuf.logpar[0] = arg1;
 logbuf.logpar[1] = arg2;
 logbuf.logpar[2] = arg3;
 logbuf.logpar[3] = arg4;
 (void) tSysLog_eSysLog_write(prio, &logbuf);
}

static inline void
_syslog_5(uint_t prio, uint_t type, intptr_t arg1, intptr_t arg2,
        intptr_t arg3, intptr_t arg4, intptr_t arg5)
{
 SYSLOG logbuf;

 logbuf.logtype = type;
 logbuf.logpar[0] = arg1;
 logbuf.logpar[1] = arg2;
 logbuf.logpar[2] = arg3;
 logbuf.logpar[3] = arg4;
 logbuf.logpar[4] = arg5;
 (void) tSysLog_eSysLog_write(prio, &logbuf);
}

static inline void
_syslog_6(uint_t prio, uint_t type, intptr_t arg1, intptr_t arg2,
     intptr_t arg3, intptr_t arg4, intptr_t arg5, intptr_t arg6)
{
 SYSLOG logbuf;

 logbuf.logtype = type;
 logbuf.logpar[0] = arg1;
 logbuf.logpar[1] = arg2;
 logbuf.logpar[2] = arg3;
 logbuf.logpar[3] = arg4;
 logbuf.logpar[4] = arg5;
 logbuf.logpar[5] = arg6;
 (void) tSysLog_eSysLog_write(prio, &logbuf);
}




extern void syslog(uint_t prio, const char *format, ...) ;
/*  43 "../../ntshell/echonet/echonet.h" 2 */

/*  1 "../../ntshell/echonet/echonet_rename.h" 1 */
/*  45 "../../ntshell/echonet/echonet.h" 2 */
/*  1 "../../ntshell/echonet/echonet_class.h" 1 */
/*  46 "../../ntshell/echonet/echonet.h" 2 */
/*  1 "../../ntshell/src/echonet_app_config.h" 1 */
/*  47 "../../ntshell/echonet/echonet.h" 2 */
/*  67 "../../ntshell/echonet/echonet.h" */
typedef enum _echonet_enod_id
{
 ENOD_NOT_MATCH_ID = -1,
 ENOD_MULTICAST_ID = 0,
 ENOD_LOCAL_ID = 1,
 ENOD_API_ID = 2,
 ENOD_REMOTE_ID = 3,
} ECN_ENOD_ID;


typedef enum
{
 ECN_EDH1_ECHONET_LITE = 0x10
} ECN_EHD1_ECL_VERSION;


typedef enum
{
 ECN_EDH2_FORMAT_1 = 0x81,
 ECN_EDH2_FORMAT_2 = 0x82
} ECN_EHD2_FORMAT;


typedef enum _echonet_service_code
{
 ESV_NOP = 0,
 ESV_SET_I = 0x60,
 ESV_SET_C = 0x61,
 ESV_GET = 0x62,
 ESV_INF_REQ = 0x63,
 ESV_SET_GET = 0x6E,
 ESV_SET_RES = 0x71,
 ESV_GET_RES = 0x72,
 ESV_INF = 0x73,
 ESV_INFC = 0x74,
 ESV_INFC_RES = 0x7A,
 ESV_SET_GET_RES = 0x7E,
 ESV_SET_I_SNA = 0x50,
 ESV_SET_C_SNA = 0x51,
 ESV_GET_SNA = 0x52,
 ESV_INF_SNA = 0x53,
 ESV_SET_GET_SNA = 0x5E
} ECN_SRV_CODE;




typedef struct
{
 uint8_t ehd1;
 uint8_t ehd2;
 uint16_t tid;
} T_ECN_HDR;




typedef struct
{
 uint8_t eojx1;
 uint8_t eojx2;
 uint8_t eojx3;
} T_ECN_EOJ;




typedef struct
{
 T_ECN_EOJ seoj;
 T_ECN_EOJ deoj;
 uint8_t esv;
 uint8_t opc;
} T_ECN_EDATA_BODY;




typedef struct
{
 uint8_t epc;
 uint8_t pdc;

} T_ECN_PRP;




typedef struct
{
 T_ECN_HDR ecn_hdr;
 T_ECN_EDATA_BODY edata;
 T_ECN_PRP ecn_prp;
} T_ECN_EDT_HDR;




typedef struct echonet_object_data
{
 uint8_t _private1[192];
 T_ECN_EDT_HDR hdr;
 uint8_t _private2[64 - sizeof(T_ECN_EDT_HDR)];
} T_EDATA;




typedef struct echonet_epc_enumerator
{
 T_EDATA *pk_esv;
 uint8_t count;
 uint8_t got_ct;
 uint8_t next_blk_ct;
 uint8_t is_eof;
 int cur;
} T_ENUM_EPC;

typedef struct echonet_property_initialization_block EPRPINIB;




typedef int (EPRP_SETTER)(const EPRPINIB *item, const void *src, int size, bool_t *anno);




typedef int (EPRP_GETTER)(const EPRPINIB *item, void *dst, int size);




struct echonet_property_initialization_block
{
 uint8_t eprpcd;
 ATR eprpatr;
 uint8_t eprpsz;
 intptr_t exinf;
 EPRP_SETTER *eprpset;
 EPRP_GETTER *eprpget;
};






typedef struct echonet_object_initialization_block
{
 ATR eobjatr;
 ID enodid;
 intptr_t exinf;
 uint8_t eojx1;
 uint8_t eojx2;
 uint8_t eojx3;
 const EPRPINIB *eprp;
 uint_t eprpcnt;
} EOBJINIB;




typedef struct echonet_object_control_block
{
 const EOBJINIB *profile;
 const EOBJINIB **eobjs;
 uint_t eobjcnt;
} EOBJCB;




typedef struct echonet_node_address_block
{
 bool_t inuse;
 uint8_t ipaddr[16];
} ENODADRB;




extern const ID _echonet_tmax_eobjid;




extern const EOBJINIB _echonet_eobjinib_table[];




extern const int _echonet_tnum_enodid;




extern EOBJCB _echonet_eobjcb_table[];




extern const int _echonet_tnum_enodadr;




extern ENODADRB _echonet_enodadrb_table[];




extern const ID _echonet_ecn_svc_taskid;
extern const ID _echonet_ecn_udp_taskid;
extern const ID _echonet_ecn_api_dataqueueid;
extern const ID _echonet_ecn_svc_dataqueueid;
extern const ID _echonet_ecn_udp_dataqueueid;



extern const ID _echonet_ecn_udp_cepid;
/*  297 "../../ntshell/echonet/echonet.h" */
extern void initialize_echonet_object(void);

typedef EOBJINIB T_REOBJ;

typedef EPRPINIB T_RPRP;

typedef ENODADRB T_ENOD_ADDR;




ER ecn_sta_svc();




ER ecn_ntf_inl();




ER ecn_ref_eobj(ID eobjid, T_REOBJ *pk_eobj);




ER ecn_ref_eprp(ID eobjid, uint8_t epc, T_RPRP *pk_eprp);




ER ecn_esv_seti(T_EDATA **ppk_esv, ID eobjid, uint8_t epc, uint8_t pdc, const void *p_edt);




ER ecn_esv_setc(T_EDATA **ppk_esv, ID eobjid, uint8_t epc, uint8_t pdc, const void *p_edt);




ER ecn_esv_get(T_EDATA **ppk_esv, ID eobjid, uint8_t epc);




ER ecn_esv_inf_req(T_EDATA **ppk_esv, ID eobjid, uint8_t epc);




ER ecn_esv_set_get(T_EDATA **ppk_esv, ID eobjid, uint8_t epc, uint8_t pdc, const void *p_edt);




ER ecn_trn_set_get(T_EDATA *pk_esv, int *p_trn_pos);




ER ecn_end_set_get(T_EDATA *pk_esv, int trn_pos);




ER ecn_esv_infc(T_EDATA **ppk_esv, ID eobjid, ID seobjid, uint8_t sepc);




ER ecn_add_epc(T_EDATA *pk_esv, uint8_t epc);




ER ecn_add_edt(T_EDATA *pk_esv, uint8_t epc, uint8_t pdc, const void *p_edt);




ER ecn_snd_esv(T_EDATA *pk_esv);




ER ecn_rcv_esv(T_EDATA **ppk_esv);




ER ecn_trcv_esv(T_EDATA **ppk_esv, int tmout);




ER ecn_prcv_esv(T_EDATA **ppk_esv);




ER ecn_rel_esv(T_EDATA *pk_esv);




ID ecn_get_enod(T_EDATA *pk_esv);




ID ecn_get_eobj(T_EDATA *pk_esv);




ER ecn_itr_ini(T_ENUM_EPC *pk_itr, T_EDATA *pk_esv);




ER ecn_itr_nxt(T_ENUM_EPC *pk_itr, uint8_t *p_epc, uint8_t *p_pdc, void *p_edt);




ER ecn_brk_wai(const void *p_dat, int datsz);




ER ecn_get_brk_dat(T_EDATA *pk_esv, void *p_buf, int bufsz, int *p_datsz);




int ecn_data_prop_set(const EPRPINIB *item, const void *src, int size, bool_t *anno);




int ecn_data_prop_get(const EPRPINIB *item, void *dst, int size);
/*  36 "./gen/tmp_C_src.c" 2 */
