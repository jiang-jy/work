/*
 *   Copyright (C) 2008-2017 by TOPPERS Project
 *
 *  上記著作権者は，以下の(1)～(4)の条件を満たす場合に限り，本ソフトウェ
 *  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *  (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *      権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *      スコード中に含まれていること．
 *  (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *      用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *      者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *      の無保証規定を掲載すること．
 *  (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *      と．
 *    (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *        作権表示，この利用条件および下記の無保証規定を掲載すること．
 *    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *        報告すること．
 *  (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *      免責すること．
 * 
 *  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *  の責任を負わない．
 * 
 *  @(#) $Id$
 */

#ifndef nTECSInfo_tTECSInfo__INLINE_H
#define nTECSInfo_tTECSInfo__INLINE_H

/*
 * This file was automatically generated by tecsgen.
 * Move and rename like below before editing,
 *   gen/tTECSInfo_inline_template.h => src/tTECSInfo_inline.h
 * to avoid to be overwritten by tecsgen.
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cTECSInfo signature: nTECSInfo_sTECSInfo context:task
 *   ER             cTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc );
 *   ER             cTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc );
 *   ER             cTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc );
 *   ER             cTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc );
 *   ER             cTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc );
 *   ER             cTECSInfo_findRawEntryDescriptor( const char_t* namespace_path, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc );
 *   ER             cTECSInfo_findRawEntryDescriptor_unsafe( const char_t* namespace_path, void** rawDesc );
 *
 * #[</PREAMBLE>]# */

/* entry port function #_TEPF_# */
/* #[<ENTRY_PORT>]# eTECSInfo
 * entry port: eTECSInfo
 * signature:  nTECSInfo_sTECSInfo
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTECSInfo_findNamespace
 * name:         eTECSInfo_findNamespace
 * global_name:  nTECSInfo_tTECSInfo_eTECSInfo_findNamespace
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTECSInfo_findNamespace(const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* nsDesc)
{
    return cTECSInfo_findNamespace( namespace_path, nsDesc );
}

/* #[<ENTRY_FUNC>]# eTECSInfo_findRegion
 * name:         eTECSInfo_findRegion
 * global_name:  nTECSInfo_tTECSInfo_eTECSInfo_findRegion
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTECSInfo_findRegion(const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* regionDesc)
{
    return cTECSInfo_findRegion( namespace_path, regionDesc );
}

/* #[<ENTRY_FUNC>]# eTECSInfo_findSignature
 * name:         eTECSInfo_findSignature
 * global_name:  nTECSInfo_tTECSInfo_eTECSInfo_findSignature
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTECSInfo_findSignature(const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* signatureDesc)
{
    return cTECSInfo_findSignature( namespace_path, signatureDesc );
}

/* #[<ENTRY_FUNC>]# eTECSInfo_findCelltype
 * name:         eTECSInfo_findCelltype
 * global_name:  nTECSInfo_tTECSInfo_eTECSInfo_findCelltype
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTECSInfo_findCelltype(const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* celltypeDesc)
{
  return cTECSInfo_findCelltype( namespace_path, celltypeDesc );
}

/* #[<ENTRY_FUNC>]# eTECSInfo_findCell
 * name:         eTECSInfo_findCell
 * global_name:  nTECSInfo_tTECSInfo_eTECSInfo_findCell
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTECSInfo_findCell(const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* cellDesc)
{
  return cTECSInfo_findCell( namespace_path, cellDesc );
}

/* #[<ENTRY_FUNC>]# eTECSInfo_findRawEntryDescriptor
 * name:         eTECSInfo_findRawEntryDescriptor
 * global_name:  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTECSInfo_findRawEntryDescriptor(const char_t* namespace_path, int_t ith, Descriptor( nTECSInfo_sRawEntryDescriptorInfo )* rawEntryDescDesc, Descriptor( nTECSInfo_sEntryInfo )* entryDesc)
{
    return cTECSInfo_findRawEntryDescriptor(namespace_path, ith, rawEntryDescDesc, entryDesc);
}

/* #[<ENTRY_FUNC>]# eTECSInfo_findRawEntryDescriptor_unsafe
 * name:         eTECSInfo_findRawEntryDescriptor_unsafe
 * global_name:  nTECSInfo_tTECSInfo_eTECSInfo_findRawEntryDescriptor_unsafe
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eTECSInfo_findRawEntryDescriptor_unsafe(const char_t* namespace_path, void** rawDesc)
{
    return cTECSInfo_findRawEntryDescriptor_unsafe(namespace_path, rawDesc);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/

#endif /* nTECSInfo_tTECSInfo_INLINEH */