/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMHome, HFUserNotificationServiceTopic;

@interface HFUserNotificationServiceTopicItem : HFItem {

	HMHome* _home;
	HFUserNotificationServiceTopic* _topic;

}

@property (nonatomic,readonly) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserNotificationServiceTopic * topic;              //@synthesize topic=_topic - In the implementation block
-(HFUserNotificationServiceTopic *)topic;
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 topic:(id)arg2 ;
@end

