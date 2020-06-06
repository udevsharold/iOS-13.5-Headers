/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface SiriContextOverride : NSObject <NSCopying, NSSecureCoding> {

	NSString* _currentSpokenLanguageCode;
	NSNumber* _unlockedSinceBoot;
	NSNumber* _deviceIsBlocked;
	NSNumber* _deviceIsPasscodeLocked;
	NSNumber* _pocketStateShouldPreventVoiceTrigger;
	NSNumber* _pad;
	NSNumber* _smartCoverClosed;
	NSNumber* _accessibilityShortcutEnabled;
	NSNumber* _carDNDActive;
	NSNumber* _connectedToCarPlay;
	NSNumber* _connectedToTrustedCarPlay;
	NSNumber* _siriIsEnabled;
	NSNumber* _siriIsRestricted;
	NSNumber* _siriIsSupported;

}

@property (nonatomic,retain) NSString * currentSpokenLanguageCode;                         //@synthesize currentSpokenLanguageCode=_currentSpokenLanguageCode - In the implementation block
@property (nonatomic,retain) NSNumber * unlockedSinceBoot;                                 //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (nonatomic,retain) NSNumber * deviceIsBlocked;                                   //@synthesize deviceIsBlocked=_deviceIsBlocked - In the implementation block
@property (nonatomic,retain) NSNumber * deviceIsPasscodeLocked;                            //@synthesize deviceIsPasscodeLocked=_deviceIsPasscodeLocked - In the implementation block
@property (nonatomic,retain) NSNumber * pocketStateShouldPreventVoiceTrigger;              //@synthesize pocketStateShouldPreventVoiceTrigger=_pocketStateShouldPreventVoiceTrigger - In the implementation block
@property (nonatomic,retain) NSNumber * pad;                                               //@synthesize pad=_pad - In the implementation block
@property (nonatomic,retain) NSNumber * smartCoverClosed;                                  //@synthesize smartCoverClosed=_smartCoverClosed - In the implementation block
@property (nonatomic,retain) NSNumber * accessibilityShortcutEnabled;                      //@synthesize accessibilityShortcutEnabled=_accessibilityShortcutEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * carDNDActive;                                      //@synthesize carDNDActive=_carDNDActive - In the implementation block
@property (nonatomic,retain) NSNumber * connectedToCarPlay;                                //@synthesize connectedToCarPlay=_connectedToCarPlay - In the implementation block
@property (nonatomic,retain) NSNumber * connectedToTrustedCarPlay;                         //@synthesize connectedToTrustedCarPlay=_connectedToTrustedCarPlay - In the implementation block
@property (nonatomic,retain) NSNumber * siriIsEnabled;                                     //@synthesize siriIsEnabled=_siriIsEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * siriIsRestricted;                                  //@synthesize siriIsRestricted=_siriIsRestricted - In the implementation block
@property (nonatomic,retain) NSNumber * siriIsSupported;                                   //@synthesize siriIsSupported=_siriIsSupported - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCarDNDActive:(NSNumber *)arg1 ;
-(void)setUnlockedSinceBoot:(NSNumber *)arg1 ;
-(NSNumber *)unlockedSinceBoot;
-(void)setSmartCoverClosed:(NSNumber *)arg1 ;
-(NSNumber *)siriIsSupported;
-(NSNumber *)siriIsEnabled;
-(NSNumber *)carDNDActive;
-(NSNumber *)accessibilityShortcutEnabled;
-(NSNumber *)siriIsRestricted;
-(id)currentSpokenLanguageCodeForSystemState:(id)arg1 ;
-(BOOL)hasUnlockedSinceBootForSystemState:(id)arg1 ;
-(BOOL)deviceIsBlockedForSystemState:(id)arg1 ;
-(BOOL)deviceIsPasscodeLockedForSystemState:(id)arg1 ;
-(BOOL)pocketStateShouldPreventVoiceTriggerForSystemState:(id)arg1 ;
-(BOOL)isPadForSystemState:(id)arg1 ;
-(BOOL)smartCoverClosedForSystemState:(id)arg1 ;
-(BOOL)accessibilityShortcutEnabledForSystemState:(id)arg1 ;
-(BOOL)carDNDActiveForSystemState:(id)arg1 ;
-(BOOL)isConnectedToCarPlayForSystemState:(id)arg1 ;
-(BOOL)isConnectedToTrustedCarPlayForSystemState:(id)arg1 ;
-(BOOL)siriIsEnabledForSystemState:(id)arg1 ;
-(BOOL)siriIsRestrictedForSystemState:(id)arg1 ;
-(BOOL)siriIsSupportedForSystemState:(id)arg1 ;
-(NSString *)currentSpokenLanguageCode;
-(NSNumber *)deviceIsBlocked;
-(NSNumber *)deviceIsPasscodeLocked;
-(NSNumber *)pocketStateShouldPreventVoiceTrigger;
-(NSNumber *)smartCoverClosed;
-(void)setCurrentSpokenLanguageCode:(NSString *)arg1 ;
-(void)setDeviceIsBlocked:(NSNumber *)arg1 ;
-(void)setDeviceIsPasscodeLocked:(NSNumber *)arg1 ;
-(void)setPocketStateShouldPreventVoiceTrigger:(NSNumber *)arg1 ;
-(void)setPad:(NSNumber *)arg1 ;
-(void)setAccessibilityShortcutEnabled:(NSNumber *)arg1 ;
-(void)setConnectedToTrustedCarPlay:(NSNumber *)arg1 ;
-(void)setConnectedToCarPlay:(NSNumber *)arg1 ;
-(void)setSiriIsEnabled:(NSNumber *)arg1 ;
-(void)setSiriIsRestricted:(NSNumber *)arg1 ;
-(void)setSiriIsSupported:(NSNumber *)arg1 ;
-(NSNumber *)pad;
-(NSNumber *)connectedToCarPlay;
-(NSNumber *)connectedToTrustedCarPlay;
-(void)overrideCurrentSpokenLanguageCode:(id)arg1 ;
-(void)overrideHasUnlockedSinceBoot:(BOOL)arg1 ;
-(void)overrideDeviceIsBlocked:(BOOL)arg1 ;
-(void)overrideDeviceIsPasscodeLocked:(BOOL)arg1 ;
-(void)overridePocketStateShouldPreventVoiceTrigger:(BOOL)arg1 ;
-(void)overrideIsPad:(BOOL)arg1 ;
-(void)overrideSmartCoverClosed:(BOOL)arg1 ;
-(void)overrideAccessibilityShortcutEnabled:(BOOL)arg1 ;
-(void)overrideCarDNDActive:(BOOL)arg1 ;
-(void)overrideConnectedToTrustedCarPlay:(BOOL)arg1 ;
-(void)overrideConnectedToCarPlay:(BOOL)arg1 ;
-(void)overrideSiriIsEnabled:(BOOL)arg1 ;
-(void)overrideSiriIsRestricted:(BOOL)arg1 ;
-(void)overrideSiriIsSupported:(BOOL)arg1 ;
@end

