/*
 * This file was automatically generated by tecsgen.
 * This file is not intended to be edited.
 */
#ifndef tTerminateRoutine_TECSGEN_H
#define tTerminateRoutine_TECSGEN_H

/*
 * celltype          :  tTerminateRoutine
 * global name       :  tTerminateRoutine
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
#include "sRoutineBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* cell CB (dummy) type definition #_CCDP_# */
typedef struct tag_tTerminateRoutine_CB {
    int  dummy;
} tTerminateRoutine_CB;
/* singleton cell CB prototype declaration #_MCPB_# */

/* celltype IDX type #_CTIX_# */
typedef int   tTerminateRoutine_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* to get the definition of CB type of referenced celltype for optimization #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTerminateRoutine_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tLogTaskMain_tecsgen.h"
#ifdef  tTerminateRoutine_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTerminateRoutine_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTerminateRoutine_ID_BASE        (1)  /* ID Base  #_NIDB_# */
#define tTerminateRoutine_N_CELL        (1)  /*  number of cells  #_NCEL_# */

/* IDX validation macro #_CVI_# */
#define tTerminateRoutine_VALID_IDX(IDX) (1)


/* celll CB macro #_GCB_# */
#define tTerminateRoutine_GET_CELLCB(idx) ((void *)0)
#ifndef TECSFLOW
 /* call port function macro #_CPM_# */
#define tTerminateRoutine_cTerminateRoutineBody_main( p_that ) \
	  tLogTaskMain_eLogTaskTerminate_main( \
	    )

#else  /* TECSFLOW */
#define tTerminateRoutine_cTerminateRoutineBody_main( p_that ) \
	  (p_that)->cTerminateRoutineBody.main__T( \
 )

#endif /* TECSFLOW */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX validation macro (abbrev.) #_CVIA_# */
#define VALID_IDX(IDX)  tTerminateRoutine_VALID_IDX(IDX)


/* cell CB macro (abbrev) #_GCBA_# */
#define GET_CELLCB(idx)  tTerminateRoutine_GET_CELLCB(idx)

/* CELLCB type (abbrev) #_CCT_# */
#define CELLCB	tTerminateRoutine_CB

/* celltype IDX type (abbrev) #_CTIXA_# */
#define CELLIDX	tTerminateRoutine_IDX

/* call port function macro (abbrev) #_CPMA_# */
#define cTerminateRoutineBody_main( ) \
          ((void)p_cellcb, tTerminateRoutine_cTerminateRoutineBody_main( p_cellcb ))



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

#endif /* tTerminateRoutine_TECSGENH */
