/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ITIdleTimerStateRequestDelegate <NSObject>
@required
-(BOOL)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(id)arg2;
-(void)resendIdleTimerAssertions;

@end

