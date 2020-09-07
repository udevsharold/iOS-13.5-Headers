/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDFormula.h>

@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula {

	EDReferenceCollection* mReferences;
	EDWorkbook* mWorkbook;

}
+(id)formulaWithReferences:(id)arg1 ;
+(id)formulaWithReference:(id)arg1 ;
-(id)initWithReference:(id)arg1 ;
-(id)references;
-(void)setReferences:(id)arg1 ;
-(void)setWorkbook:(id)arg1 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)initWithReferences:(id)arg1 ;
-(id)referencesFromFormula;
-(BOOL)isConstantStringFormula;
-(id)constantValuesFromConstantStringFormula;
-(void)prepareTokens;
-(id)initWithWorkbook:(id)arg1 ;
@end
