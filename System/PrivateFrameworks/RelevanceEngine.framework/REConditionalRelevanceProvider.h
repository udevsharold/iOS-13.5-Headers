/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider {

	RERelevanceCondition* _condition;

}

@property (nonatomic,readonly) RERelevanceCondition * condition; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(RERelevanceCondition *)condition;
-(id)initWithRelevanceCondition:(id)arg1 ;
-(float)_evaluateCondition;
@end

