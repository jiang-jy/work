/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#include "tLight_tecsgen.h"
#include "tLight_factory.h"

/* entry port descriptor type #_EDT_# */
/* eLight : omitted by entry port optimize */

/* entry port skelton function #_EPSF_# */
/* eLight : omitted by entry port optimize */

/* entry port skelton function table #_EPSFT_# */
/* eLight : omitted by entry port optimize */

/* entry port descriptor referenced by call port (differ from actual definition) #_CPEPD_# */

/* call port array #_CPA_# */

/* array of attr/var #_AVAI_# */
/* cell INIB #_INIB_# */
tLight_INIB tLight_INIB_tab[] = {
    /* cell: tLight_CB_tab[0]:  Light id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        0,                                       /* eprpcd */
        0,                                       /* eprpatr */
        0,                                       /* eprpsz */
        0,                                       /* exinf */
    },
};

/* entry port descriptor #_EPD_# */
/* eLight : omitted by entry port optimize */
/* CB initialize code #_CIC_# */
void
tLight_CB_initialize()
{
    tLight_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}