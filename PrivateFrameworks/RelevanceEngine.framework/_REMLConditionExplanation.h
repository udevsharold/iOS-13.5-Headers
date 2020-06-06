/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REMLExplanation.h>

@class RECondition;

@interface _REMLConditionExplanation : REMLExplanation {

	RECondition* _condition;
	unsigned long long _type;

}
-(id)initWithCondition:(id)arg1 ;
-(id)explanationByCombiningWithExplanation:(id)arg1 ;
-(id)explanationWithStyle:(unsigned long long)arg1 ;
-(long long)_rankExplanationToSimilarExplanation:(id)arg1 ;
-(id)_constantConditionExplanationWithStyle:(unsigned long long)arg1 ;
-(id)_probabilityExplanation:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(id)_featureRuleExplanation:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(id)_valueExplanation:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(id)_hasFeatureExplanation:(id)arg1 withStyle:(unsigned long long)arg2 ;
@end

