/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>

@class MTIntentAlarm;

@interface MTToggleAlarmIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;                   //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) long long state; 
@property (nonatomic,copy) MTIntentAlarm * alarm; 
+(id)unspecifiedIntentResponseWithState:(long long)arg1 ;
+(id)readyIntentResponseWithState:(long long)arg1 ;
+(id)continueInAppIntentResponseWithState:(long long)arg1 ;
+(id)inProgressIntentResponseWithState:(long long)arg1 ;
+(id)successIntentResponseWithState:(long long)arg1 alarm:(id)arg2 ;
+(id)failureRequiringAppLaunchIntentResponseWithState:(long long)arg1 ;
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end
