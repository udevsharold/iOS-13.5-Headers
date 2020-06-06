/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@interface SCRCMathTableExpression : SCRCMathArrayExpression
-(unsigned long long)_numberOfColumns;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)mathMLTag;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(unsigned long long)numberOfTables;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6 ;
-(BOOL)isMultiRowTable;
-(BOOL)canBeWrappedInLatexMathIndicators;
@end

