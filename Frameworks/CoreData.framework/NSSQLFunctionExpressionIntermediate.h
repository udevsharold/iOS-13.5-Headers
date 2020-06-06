/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate
+(BOOL)functionIsAcceptableAsAggregate:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isFunctionScoped;
-(id)_generateUncorrelatedSubqueryStringWithSymbol:(id)arg1 forAttribute:(id)arg2 inContext:(id)arg3 ;
-(id)_generateCorrelatedSubqueryStringWithSymbol:(id)arg1 forExpression:(id)arg2 inContext:(id)arg3 ;
-(id)_generateArgumentStringForCollection:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSelectForAggregateStringWithSymbol:(id)arg1 argument:(id)arg2 inContext:(id)arg3 ;
-(id)generateType1SQLString:(id)arg1 inContext:(id)arg2 ;
-(id)generateType2SQLString:(id)arg1 inContext:(id)arg2 ;
-(id)generateType3SQLString:(id)arg1 keypathOnly:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateType4SQLForSymbol:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForCountInContext:(id)arg1 ;
-(id)_generateMathStringWithSymbol:(id)arg1 inContext:(id)arg2 ;
-(id)_generateDistinctStringInContext:(id)arg1 ;
-(id)_generateNowStringInContext:(id)arg1 ;
-(id)_generateLengthStringInContext:(id)arg1 ;
-(id)_generateRtreeIndexStringInContext:(id)arg1 ;
@end

