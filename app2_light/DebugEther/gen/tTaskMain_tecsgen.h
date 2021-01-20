/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef tTaskMain_TECSGEN_H
#define tTaskMain_TECSGEN_H

/*
 * celltype          :  tTaskMain
 * global name       :  tTaskMain
 * multi-domain      :  no
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  no
 * has_INIB          :  no
 * rom               :  yes
 * CB initializer    :  yes
 */

/* global header #_IGH_# */
#include "global_tecsgen.h"

/* signature header #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sEchonet_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* cell CB (dummy) type definition #_CCDP_# */
typedef struct tag_tTaskMain_CB {
    int  dummy;
} tTaskMain_CB;
/* singleton cell CB prototype declaration #_MCPB_# */

/* celltype IDX type #_CTIX_# */
typedef int   tTaskMain_IDX;

/* prototype declaration of entry port function #_EPP_# */
/* sTaskBody */
void         tTaskMain_eTaskMain_main(tTaskMain_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* to get the definition of CB type of referenced celltype for optimization #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTaskMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tEchonet_tecsgen.h"
#ifdef  tTaskMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTaskMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTaskMain_ID_BASE           (1)  /* ID Base  #_NIDB_# */
#define tTaskMain_N_CELL            (1)  /*  number of cells  #_NCEL_# */

/* IDX validation macro #_CVI_# */
#define tTaskMain_VALID_IDX(IDX) (1)


/* celll CB macro #_GCB_# */
#define tTaskMain_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* call port function macro #_CPM_# */
#define tTaskMain_cTaskMain_initialize( p_that ) \
	  tEchonet_eEchonet_initialize( \
	   &tEchonet_INIB_tab[0] )
#define tTaskMain_cTaskMain_getTimer( p_that ) \
	  tEchonet_eEchonet_getTimer( \
	   &tEchonet_INIB_tab[0] )
#define tTaskMain_cTaskMain_progress( p_that, interval ) \
	  tEchonet_eEchonet_progress( \
	   &tEchonet_INIB_tab[0], (interval) )
#define tTaskMain_cTaskMain_ReciveService( p_that, esv ) \
	  tEchonet_eEchonet_ReciveService( \
	   &tEchonet_INIB_tab[0], (esv) )
#define tTaskMain_cTaskMain_breakWait( p_that, brkdat, len ) \
	  tEchonet_eEchonet_breakWait( \
	   &tEchonet_INIB_tab[0], (brkdat), (len) )
#define tTaskMain_cTaskMain_timeOut( p_that ) \
	  tEchonet_eEchonet_timeOut( \
	   &tEchonet_INIB_tab[0] )

#else  /* TECSFLOW */
#define tTaskMain_cTaskMain_initialize( p_that ) \
	  (p_that)->cTaskMain.initialize__T( \
 )
#define tTaskMain_cTaskMain_getTimer( p_that ) \
	  (p_that)->cTaskMain.getTimer__T( \
 )
#define tTaskMain_cTaskMain_progress( p_that, interval ) \
	  (p_that)->cTaskMain.progress__T( \
 (interval) )
#define tTaskMain_cTaskMain_ReciveService( p_that, esv ) \
	  (p_that)->cTaskMain.ReciveService__T( \
 (esv) )
#define tTaskMain_cTaskMain_breakWait( p_that, brkdat, len ) \
	  (p_that)->cTaskMain.breakWait__T( \
 (brkdat), (len) )
#define tTaskMain_cTaskMain_timeOut( p_that ) \
	  (p_that)->cTaskMain.timeOut__T( \
 )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* prototype declaration of entry port function (referenced when VMT useless optimise enabled) #_EPSP_# */
/* eTaskMain */
void           tTaskMain_eTaskMain_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX validation macro (abbrev.) #_CVIA_# */
#define VALID_IDX(IDX)  tTaskMain_VALID_IDX(IDX)


/* cell CB macro (abbrev) #_GCBA_# */
#define GET_CELLCB(idx)  tTaskMain_GET_CELLCB(idx)

/* CELLCB type (abbrev) #_CCT_# */
#define CELLCB	tTaskMain_CB

/* celltype IDX type (abbrev) #_CTIXA_# */
#define CELLIDX	tTaskMain_IDX

/* call port function macro (abbrev) #_CPMA_# */
#define cTaskMain_initialize( ) \
          ((void)p_cellcb, tTaskMain_cTaskMain_initialize( p_cellcb ))
#define cTaskMain_getTimer( ) \
          ((void)p_cellcb, tTaskMain_cTaskMain_getTimer( p_cellcb ))
#define cTaskMain_progress( interval ) \
          ((void)p_cellcb, tTaskMain_cTaskMain_progress( p_cellcb, interval ))
#define cTaskMain_ReciveService( esv ) \
          ((void)p_cellcb, tTaskMain_cTaskMain_ReciveService( p_cellcb, esv ))
#define cTaskMain_breakWait( brkdat, len ) \
          ((void)p_cellcb, tTaskMain_cTaskMain_breakWait( p_cellcb, brkdat, len ))
#define cTaskMain_timeOut( ) \
          ((void)p_cellcb, tTaskMain_cTaskMain_timeOut( p_cellcb ))




/* entry port function macro (abbrev) #_EPM_# */
#define eTaskMain_main   tTaskMain_eTaskMain_main

/* iteration code (FOREACH_CELL) (niether CB, nor NIB exit) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB initialize macro #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTaskMain_TECSGENH */