/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* entry port descriptor type #_EDT_# */
/* eTask : omitted by entry port optimize */

/* eiTask : omitted by entry port optimize */

/* entry port skelton function #_EPSF_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* entry port skelton function table #_EPSFT_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* entry port descriptor referenced by call port (differ from actual definition) #_CPEPD_# */
extern struct tag_sTaskBody_VDES TaskMain_eTaskMain_des;

extern struct tag_sTaskBody_VDES LogTask_LogTaskMain_eLogTaskBody_des;

/* call port array #_CPA_# */


/* array of attr/var #_AVAI_# */
/* cell INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  Task id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &TaskMain_eTaskMain_des,                 /* cTaskBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_Task,                        /* id */
    },
    /* cell: tTask_CB_tab[1]:  LogTask_Task id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &LogTask_LogTaskMain_eLogTaskBody_des,   /* cTaskBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_LogTask_Task,                /* id */
    },
};

/* entry port descriptor #_EPD_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* CB initialize code #_CIC_# */
void
tTask_CB_initialize()
{
    tTask_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
