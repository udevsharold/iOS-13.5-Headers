/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSSet* _topicItems;

}

@property (nonatomic,copy) NSSet * topicItems;              //@synthesize topicItems=_topicItems - In the implementation block
@property (nonatomic,copy) id filter;                       //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;               //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(void)setTopicItems:(NSSet *)arg1 ;
-(NSSet *)topicItems;
@end
