/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDFitnessMachineStateTimersDelegate <NSObject>
@optional
-(void)stateTimersFieldDetectTimeout:(id)arg1;
-(void)stateTimersTagReadTimeout:(id)arg1;
-(void)stateTimersMachineIdentityVerificationTimeout:(id)arg1;
-(void)stateTimersUserAcceptanceTimeout:(id)arg1;
-(void)stateTimersWaitForMachineStartTimeout:(id)arg1;
-(void)stateTimersPauseTimeout:(id)arg1;
-(void)stateTimersDisconnectTimeout:(id)arg1;
-(void)stateTimersRetryConnectionTimeout:(id)arg1;
-(void)stateTimersMfaTimeout:(id)arg1;

@end

