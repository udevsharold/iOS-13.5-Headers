/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFConditionItem.h>

@class HFCondition, HFPresenceCondition, HMHome, NSString;

@interface HFPresenceConditionItem : HFItem <HFConditionItem> {

	HFPresenceCondition* _condition;
	HMHome* _home;

}

@property (nonatomic,retain) HFPresenceCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) HMHome * home;                              //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(HFPresenceCondition *)condition;
-(HMHome *)home;
-(void)setCondition:(HFPresenceCondition *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithCondition:(id)arg1 home:(id)arg2 ;
@end

