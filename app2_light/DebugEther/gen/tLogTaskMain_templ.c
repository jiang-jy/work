/*
 * This file was automatically generated by tecsgen.
 * Move and rename like below before editing,
 *   gen/tLogTaskMain_templ.c => src/tLogTaskMain.c
 * to avoid to be overwritten by tecsgen.
 */
/* #[<PREAMBLE>]#
 * Don't edit the comments between #[<...>]# and #[</...>]#
 * These comment are used by tecsmerege when merging.
 *
 * attr access macro #_CAAM_#
 * interval         RELTIM           ATTR_interval   
 * flushWait        RELTIM           ATTR_flushWait  
 *
 * call port function #_TCPF_#
 * call port: cSerialPort signature: sSerialPort context:task
 *   ER             cSerialPort_open( );
 *   ER             cSerialPort_close( );
 *   ER_UINT        cSerialPort_read( char* buffer, uint_t length, TMO tmout );
 *   ER_UINT        cSerialPort_write( const char* buffer, uint_t length );
 *   ER             cSerialPort_control( uint_t ioControl );
 *   ER             cSerialPort_refer( T_SERIAL_RPOR* pk_rpor );
 * call port: cnSerialPortManage signature: snSerialPortManage context:task
 *   bool_t         cnSerialPortManage_getChar( char* p_char );
 * call port: cSysLog signature: sSysLog context:task
 *   ER             cSysLog_write( uint_t priority, const SYSLOG* p_syslog );
 *   ER_UINT        cSysLog_read( SYSLOG* p_syslog );
 *   ER             cSysLog_mask( uint_t logMask, uint_t lowMask );
 *   ER             cSysLog_refer( T_SYSLOG_RLOG* pk_rlog );
 *   ER             cSysLog_flush( );
 * call port: cPutLog signature: sPutLog context:task
 *   void           cPutLog_putChar( char c );
 *
 * #[</PREAMBLE>]# */

/* Put prototype declaration and/or variale definition here #_PAC_# */
#include "tLogTaskMain_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* entry port function #_TEPF_# */
/* #[<ENTRY_PORT>]# eLogTaskBody
 * entry port: eLogTaskBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eLogTaskBody_main
 * name:         eLogTaskBody_main
 * global_name:  tLogTaskMain_eLogTaskBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLogTaskBody_main()
{
}

/* #[<ENTRY_PORT>]# eLogTaskTerminate
 * entry port: eLogTaskTerminate
 * signature:  sRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eLogTaskTerminate_main
 * name:         eLogTaskTerminate_main
 * global_name:  tLogTaskMain_eLogTaskTerminate_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eLogTaskTerminate_main()
{
}

/* #[<ENTRY_PORT>]# eLogTask
 * entry port: eLogTask
 * signature:  sLogTask
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eLogTask_flush
 * name:         eLogTask_flush
 * global_name:  tLogTaskMain_eLogTask_flush
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eLogTask_flush(uint_t count)
{
}

/* #[<POSTAMBLE>]#
 *   Put non-entry functions below.
 * #[</POSTAMBLE>]#*/
