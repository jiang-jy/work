/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef tLight_TECSGEN_H
#define tLight_TECSGEN_H

/*
 * celltype          :  tLight
 * global name       :  tLight
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  yes
 * rom               :  yes
 * CB initializer    :  yes
 */

/* global header #_IGH_# */
#include "global_tecsgen.h"

/* signature header #_ISH_# */
#include "sLight_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* cell INIB type definition #_CIP_# */
typedef const struct tag_tLight_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    uint8_t        eprpcd;
    ATR            eprpatr;
    uint8_t        eprpsz;
    intptr_t       exinf;
}  tLight_INIB;

/* CB not exist. CB corresponding to INIB #_DCI_# */
#define tLight_CB_tab           tLight_INIB_tab
#define tLight_CB               tLight_INIB
#define tag_tLight_CB           tag_tLight_INIB

/* singleton cell CB prototype declaration #_MCPB_# */
extern tLight_INIB  tLight_INIB_tab[];

/* celltype IDX type #_CTIX_# */
typedef const struct tag_tLight_INIB *tLight_IDX;

/* prototype declaration of entry port function #_EPP_# */
/* sLight */
ER           tLight_eLight_onOffPropertySet(tLight_IDX idx, const uint8_t* src, int size, bool_t* anno);
void         tLight_eLight_OnPropertySet(tLight_IDX idx);
void         tLight_eLight_OffPropertySet(tLight_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tLight_ID_BASE              (1)  /* ID Base  #_NIDB_# */
#define tLight_N_CELL               (1)  /*  number of cells  #_NCEL_# */

/* IDX validation macro #_CVI_# */
#define tLight_VALID_IDX(IDX) (1)


/* celll CB macro #_GCB_# */
#define tLight_GET_CELLCB(idx) (idx)

/* attr access  #_AAM_# */
#define tLight_ATTR_eprpcd( p_that )	((p_that)->eprpcd)
#define tLight_ATTR_eprpatr( p_that )	((p_that)->eprpatr)
#define tLight_ATTR_eprpsz( p_that )	((p_that)->eprpsz)
#define tLight_ATTR_exinf( p_that )	((p_that)->exinf)

#define tLight_GET_eprpcd(p_that)	((p_that)->eprpcd)
#define tLight_GET_eprpatr(p_that)	((p_that)->eprpatr)
#define tLight_GET_eprpsz(p_that)	((p_that)->eprpsz)
#define tLight_GET_exinf(p_that)	((p_that)->exinf)



#ifndef TECSFLOW
#else  /* TECSFLOW */
#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* prototype declaration of entry port function (referenced when VMT useless optimise enabled) #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX validation macro (abbrev.) #_CVIA_# */
#define VALID_IDX(IDX)  tLight_VALID_IDX(IDX)


/* cell CB macro (abbrev) #_GCBA_# */
#define GET_CELLCB(idx)  tLight_GET_CELLCB(idx)

/* CELLCB type (abbrev) #_CCT_# */
#define CELLCB	tLight_CB

/* celltype IDX type (abbrev) #_CTIXA_# */
#define CELLIDX	tLight_IDX


/* attr access macro (abbrev) #_AAMA_# */
#define ATTR_eprpcd          tLight_ATTR_eprpcd( p_cellcb )
#define ATTR_eprpatr         tLight_ATTR_eprpatr( p_cellcb )
#define ATTR_eprpsz          tLight_ATTR_eprpsz( p_cellcb )
#define ATTR_exinf           tLight_ATTR_exinf( p_cellcb )





/* entry port function macro (abbrev) #_EPM_# */
//#define eLight_onOffPropertySet tLight_eLight_onOffPropertySet
//#define eLight_OnPropertySet tLight_eLight_OnPropertySet
//#define eLight_OffPropertySet tLight_eLight_OffPropertySet

/* iteration code (FOREACH_CELL) #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tLight_N_CELL; (i)++ ){ \
       (p_cb) = &tLight_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB initialize macro #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tLight_TECSGENH */
