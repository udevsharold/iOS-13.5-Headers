/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBFormula : NSObject
+(id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(int)arg2 formulaClass:(Class)arg3 state:(id)arg4 ;
+(void)readFormulaFromXlCell:(XlCell*)arg1 edCell:(EDCellHeader*)arg2 edRowBlocks:(id)arg3 state:(id)arg4 ;
+(id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withFormulaLength:(int)arg2 state:(id)arg3 ;
+(void)setupTokensInEDFormulaFromXlFormulaProcessor:(XlFormulaProcessor*)arg1 length:(int)arg2 edFormula:(id)arg3 edSheet:(id)arg4 ;
+(id)edFormulaFromXlFmlaDefinition:(const void*)arg1 withTokenLength:(int)arg2 formulaLength:(int)arg3 formulaClass:(Class)arg4 edSheet:(id)arg5 state:(id)arg6 ;
+(XlFormulaInfo*)xlFormulaInfoFromEDSharedFormula:(id)arg1 state:(id)arg2 ;
+(char*)edFormulaToParsedExpression:(id)arg1 tokenLength:(unsigned short*)arg2 formulaLength:(unsigned short*)arg3 state:(id)arg4 ;
+(XlFormulaInfo*)xlFormulaInfoFromEDFormula:(id)arg1 state:(id)arg2 ;
+(unsigned)writeToken:(id)arg1 tokenIndex:(unsigned)arg2 tokenStream:(XLFormulaStream*)arg3 extendedStream:(XLFormulaStream*)arg4 state:(id)arg5 ;
@end

