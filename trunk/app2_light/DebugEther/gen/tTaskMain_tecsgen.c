/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#include "tTaskMain_tecsgen.h"
#include "tTaskMain_factory.h"

/* entry port descriptor type #_EDT_# */
/* eTaskMain */
struct tag_tTaskMain_eTaskMain_DES {
    const struct tag_sTaskBody_VMT *vmt;
    int           idx;
};

/* entry port skelton function #_EPSF_# */
/* eTaskMain */
void           tTaskMain_eTaskMain_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tTaskMain_eTaskMain_DES *lepd
        = (struct tag_tTaskMain_eTaskMain_DES *)epd;
    tTaskMain_eTaskMain_main( lepd->idx );
}

/* entry port skelton function table #_EPSFT_# */
/* eTaskMain */
const struct tag_sTaskBody_VMT tTaskMain_eTaskMain_MT_ = {
    tTaskMain_eTaskMain_main_skel,
};

/* entry port descriptor referenced by call port (differ from actual definition) #_CPEPD_# */

/* call port array #_CPA_# */

/* array of attr/var #_AVAI_# */
/* entry port descriptor #_EPD_# */
extern const struct tag_tTaskMain_eTaskMain_DES TaskMain_eTaskMain_des;
const struct tag_tTaskMain_eTaskMain_DES TaskMain_eTaskMain_des = {
    &tTaskMain_eTaskMain_MT_,
    0,
};
/* CB initialize code #_CIC_# */
void
tTaskMain_CB_initialize()
{
    tTaskMain_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}