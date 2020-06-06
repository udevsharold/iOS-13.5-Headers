/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SASSystemState.h>

@class SASSystemState, SiriContextOverride;

@interface SASOverriddenSystemState : SASSystemState {

	SASSystemState* _systemState;
	SiriContextOverride* _contextOverride;

}

@property (nonatomic,retain) SASSystemState * systemState;                       //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,retain) SiriContextOverride * contextOverride;              //@synthesize contextOverride=_contextOverride - In the implementation block
-(BOOL)isPad;
-(SASSystemState *)systemState;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(BOOL)siriIsSupported;
-(BOOL)siriIsEnabled;
-(BOOL)carDNDActive;
-(id)lockStateMonitor;
-(BOOL)isConnectedToTrustedCarPlay;
-(BOOL)accessibilityShortcutEnabled;
-(BOOL)isConnectedToCarPlay;
-(BOOL)siriIsRestricted;
-(void)setContextOverride:(SiriContextOverride *)arg1 ;
-(void)setLockStateMonitor:(id)arg1 ;
-(SiriContextOverride *)contextOverride;
-(id)initWithSystemState:(id)arg1 contextOverride:(id)arg2 ;
-(id)currentSpokenLanguageCode;
-(BOOL)hasUnlockedSinceBoot;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)pocketStateShouldPreventVoiceTrigger;
-(BOOL)smartCoverClosed;
@end

