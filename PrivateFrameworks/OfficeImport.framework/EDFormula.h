/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDFormulaBuilding.h>

@class NSString;

@interface EDFormula : NSObject <EDFormulaBuilding> {

	CFDataRef mPackedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formula;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)removeTokenAtIndex:(unsigned)arg1 ;
-(id)warning;
-(EDToken*)tokenAtIndex:(unsigned)arg1 ;
-(void)setWarning:(int)arg1 ;
-(unsigned)tokenCount;
-(char*)lastExtendedDataForTokenAtIndex:(unsigned)arg1 length:(unsigned*)arg2 ;
-(int)tokenTypeAtIndex:(unsigned)arg1 ;
-(BOOL)isSupportedFormula;
-(void)setCleaned:(BOOL)arg1 ;
-(id)originalFormulaString;
-(void)populateXlPtg:(XlPtg*)arg1 index:(unsigned)arg2 ;
-(BOOL)setupTokensWithTokensCount:(unsigned)arg1 tokensWithDataCount:(unsigned)arg2 extendedDataLength:(unsigned)arg3 extendedDataCount:(unsigned)arg4 ;
-(void)removeAllTokens;
-(BOOL)copyTokenFromXlPtg:(XlPtg*)arg1 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 ;
-(BOOL)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 extendedDataCount:(unsigned)arg3 ;
-(char*)setExtendedDataAtIndex:(unsigned)arg1 extendedDataIndex:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)setupExtendedDataForTokenAtIndex:(unsigned)arg1 extendedDataLength:(unsigned)arg2 extendedDataCount:(unsigned)arg3 ;
-(BOOL)copyTokenAtIndex:(unsigned)arg1 fromFormula:(id)arg2 ;
-(int)warningType;
-(unsigned)firstTokenIndexForArgAtIndex:(unsigned)arg1 ;
-(id)saveArgs:(unsigned)arg1 andDelete:(BOOL)arg2 ;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2 ;
-(BOOL)convertToList:(unsigned)arg1 withFinalParen:(BOOL)arg2 ;
-(char*)extendedDataForTokenAtIndex:(unsigned)arg1 extendedDataIndex:(unsigned)arg2 length:(unsigned*)arg3 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 numArgs:(int)arg3 ;
-(BOOL)insertName:(unsigned long long)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned)arg3 ;
-(BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2 ;
-(BOOL)convertToList:(unsigned)arg1 ;
-(BOOL)convertToIntersect:(unsigned)arg1 ;
-(BOOL)convertLastRefsToArea;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(id)arg2 ;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3 ;
-(BOOL)shrinkSpanningRefAtArgIndex:(unsigned)arg1 ;
-(BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned)arg2 factor:(double)arg3 ;
-(BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(BOOL)fixTableOfConstantsRefs;
-(BOOL)uppercaseArgAtIndex:(unsigned)arg1 ;
-(id)initWithFormula:(id)arg1 ;
-(void)replaceTokenTypeAtIndex:(unsigned)arg1 withType:(int)arg2 ;
-(unsigned)countExtendedDataForTokenAtIndex:(unsigned)arg1 ;
-(BOOL)replaceTokenAtIndex:(unsigned)arg1 withFormula:(id)arg2 ;
-(BOOL)replaceTokenAtIndex:(unsigned)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned)arg3 ;
-(ChVector<XlPtg *>*)xlPtgs;
-(BOOL)convertTokensToSharedAtRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(void)setOriginalFormulaString:(id)arg1 ;
-(id)warningParameter;
-(void)setWarningParameter:(id)arg1 ;
-(BOOL)isCleaned;
-(BOOL)isContainsRelativeReferences;
-(void)updateContainsRelativeReferences:(BOOL)arg1 ;
-(BOOL)isCleanedWithEvaluationStack;
-(void)updateCleanedWithEvaluationStack:(BOOL)arg1 ;
-(BOOL)isSharedFormula;
-(BOOL)isBaseFormula;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned long long*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
@end

