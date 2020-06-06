/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFEventBuilder.h>
#import <libobjc.A.dylib/HFLocationEventBuilder.h>

@class HFSelectedUserCollection, NSString;

@interface HFPresenceEventBuilder : HFEventBuilder <HFLocationEventBuilder> {

	HFSelectedUserCollection* _users;
	unsigned long long _eventType;
	unsigned long long _activationGranularity;

}

@property (nonatomic,retain) HFSelectedUserCollection * users;                      //@synthesize users=_users - In the implementation block
@property (assign,nonatomic) unsigned long long eventType;                          //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned long long activationGranularity;              //@synthesize activationGranularity=_activationGranularity - In the implementation block
@property (nonatomic,readonly) unsigned long long presenceEventType; 
@property (nonatomic,readonly) unsigned long long presenceUserType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_selectedUsersForPresenceEvent:(id)arg1 ;
-(NSString *)description;
-(id)initWithEvent:(id)arg1 ;
-(HFSelectedUserCollection *)users;
-(unsigned long long)eventType;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)setUsers:(HFSelectedUserCollection *)arg1 ;
-(unsigned long long)presenceEventType;
-(unsigned long long)activationGranularity;
-(unsigned long long)presenceUserType;
-(id)buildNewEventFromCurrentState;
-(void)setActivationGranularity:(unsigned long long)arg1 ;
@end

