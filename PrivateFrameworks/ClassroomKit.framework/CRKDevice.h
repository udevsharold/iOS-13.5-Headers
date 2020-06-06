/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface CRKDevice : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supervised;
	BOOL _ephemeralMultiUser;
	BOOL _screenSaverActive;
	BOOL _muted;
	BOOL _appLocked;
	BOOL _passcodeEnabled;
	BOOL _requestingUnenroll;
	BOOL _orientationLocked;
	float _batteryLevel;
	float _volume;
	float _displayBackingScaleFactor;
	float _displayWidth;
	float _displayHeight;
	NSString* _identifier;
	NSString* _serialNumber;
	NSString* _trustedExchangeIdentifier;
	unsigned long long _platform;
	NSString* _model;
	NSString* _name;
	NSString* _systemName;
	NSString* _systemVersion;
	NSString* _buildVersion;
	unsigned long long _chargingState;
	unsigned long long _lockState;
	unsigned long long _screenState;
	unsigned long long _availableBytes;
	unsigned long long _deviceOrientation;
	unsigned long long _interfaceOrientation;
	NSArray* _displays;
	NSString* _primaryOpenApplication;
	NSString* _secondaryOpenApplication;
	NSArray* _allOpenApplications;
	NSArray* _installedApplicationInfo;
	NSString* _stagedAdHocIdentityCertificateFingerprint;
	NSArray* _trustedAnchorCertificateFingerprints;
	NSString* _userIdentifier;
	NSString* _userDisplayName;
	NSString* _userGivenName;
	NSString* _userPhoneticGivenName;
	NSString* _userFamilyName;
	NSString* _userPhoneticFamilyName;
	NSString* _userImageURL;
	unsigned long long _loginState;
	NSString* _studentImageIdentifier;
	NSString* _instructorImageIdentifier;
	NSString* _currentLocaleIdentifier;
	NSDictionary* _activeAirPlayRoute;
	NSArray* _availableAirPlayRoutes;
	NSString* _managementLockPasscode;
	NSString* _pipOpenApplication;

}

@property (nonatomic,copy) NSString * serialNumber; 
@property (assign,nonatomic) unsigned long long platform; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * systemName; 
@property (nonatomic,copy) NSString * systemVersion; 
@property (nonatomic,copy) NSString * buildVersion; 
@property (assign,getter=isSupervised,nonatomic) BOOL supervised; 
@property (assign,getter=isEphemeralMultiUser,nonatomic) BOOL ephemeralMultiUser; 
@property (assign,nonatomic) float batteryLevel; 
@property (assign,nonatomic) unsigned long long chargingState; 
@property (assign,nonatomic) unsigned long long lockState; 
@property (assign,nonatomic) unsigned long long screenState; 
@property (assign,getter=isScreenSaverActive,nonatomic) BOOL screenSaverActive; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) unsigned long long availableBytes; 
@property (assign,nonatomic) unsigned long long deviceOrientation; 
@property (assign,nonatomic) unsigned long long interfaceOrientation; 
@property (nonatomic,copy) NSArray * displays; 
@property (assign,getter=isOrientationLocked,nonatomic) BOOL orientationLocked; 
@property (assign,nonatomic) float displayBackingScaleFactor; 
@property (assign,nonatomic) float displayWidth; 
@property (assign,nonatomic) float displayHeight; 
@property (nonatomic,copy) NSString * primaryOpenApplication; 
@property (nonatomic,copy) NSString * secondaryOpenApplication; 
@property (nonatomic,copy) NSString * pipOpenApplication; 
@property (nonatomic,copy) NSArray * allOpenApplications; 
@property (assign,getter=isAppLocked,nonatomic) BOOL appLocked; 
@property (nonatomic,copy) NSArray * installedApplications; 
@property (nonatomic,copy) NSArray * installedApplicationInfo; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy) NSString * userDisplayName; 
@property (nonatomic,copy) NSString * userGivenName; 
@property (nonatomic,copy) NSString * userFamilyName; 
@property (nonatomic,copy) NSString * userImageURL; 
@property (assign,nonatomic) unsigned long long loginState; 
@property (assign,getter=isPasscodeEnabled,nonatomic) BOOL passcodeEnabled; 
@property (nonatomic,copy) NSString * studentImageIdentifier; 
@property (nonatomic,copy) NSString * instructorImageIdentifier; 
@property (nonatomic,copy) NSString * currentLocaleIdentifier; 
@property (nonatomic,copy) NSDictionary * activeAirPlayRoute; 
@property (nonatomic,copy) NSArray * availableAirPlayRoutes; 
@property (nonatomic,copy) NSString * managementLockPasscode; 
@property (nonatomic,copy) NSString * serialNumber;                                            //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * trustedExchangeIdentifier;                               //@synthesize trustedExchangeIdentifier=_trustedExchangeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long platform;                                      //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * model;                                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * systemName;                                              //@synthesize systemName=_systemName - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                                           //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;                                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,getter=isSupervised,nonatomic) BOOL supervised;                              //@synthesize supervised=_supervised - In the implementation block
@property (assign,getter=isEphemeralMultiUser,nonatomic) BOOL ephemeralMultiUser;              //@synthesize ephemeralMultiUser=_ephemeralMultiUser - In the implementation block
@property (assign,nonatomic) float batteryLevel;                                               //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) unsigned long long chargingState;                                 //@synthesize chargingState=_chargingState - In the implementation block
@property (assign,nonatomic) unsigned long long lockState;                                     //@synthesize lockState=_lockState - In the implementation block
@property (assign,nonatomic) unsigned long long screenState;                                   //@synthesize screenState=_screenState - In the implementation block
@property (assign,getter=isScreenSaverActive,nonatomic) BOOL screenSaverActive;                //@synthesize screenSaverActive=_screenSaverActive - In the implementation block
@property (assign,nonatomic) float volume;                                                     //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                        //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) unsigned long long availableBytes;                                //@synthesize availableBytes=_availableBytes - In the implementation block
@property (assign,nonatomic) unsigned long long deviceOrientation;                             //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientation;                          //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,copy) NSArray * displays;                                                 //@synthesize displays=_displays - In the implementation block
@property (assign,getter=isOrientationLocked,nonatomic) BOOL orientationLocked;                //@synthesize orientationLocked=_orientationLocked - In the implementation block
@property (assign,nonatomic) float displayBackingScaleFactor;                                  //@synthesize displayBackingScaleFactor=_displayBackingScaleFactor - In the implementation block
@property (assign,nonatomic) float displayWidth;                                               //@synthesize displayWidth=_displayWidth - In the implementation block
@property (assign,nonatomic) float displayHeight;                                              //@synthesize displayHeight=_displayHeight - In the implementation block
@property (nonatomic,copy) NSString * primaryOpenApplication;                                  //@synthesize primaryOpenApplication=_primaryOpenApplication - In the implementation block
@property (nonatomic,copy) NSString * secondaryOpenApplication;                                //@synthesize secondaryOpenApplication=_secondaryOpenApplication - In the implementation block
@property (nonatomic,copy) NSString * pipOpenApplication;                                      //@synthesize pipOpenApplication=_pipOpenApplication - In the implementation block
@property (nonatomic,copy) NSArray * allOpenApplications;                                      //@synthesize allOpenApplications=_allOpenApplications - In the implementation block
@property (assign,getter=isAppLocked,nonatomic) BOOL appLocked;                                //@synthesize appLocked=_appLocked - In the implementation block
@property (nonatomic,copy) NSArray * installedApplicationInfo;                                 //@synthesize installedApplicationInfo=_installedApplicationInfo - In the implementation block
@property (nonatomic,copy) NSString * stagedAdHocIdentityCertificateFingerprint;               //@synthesize stagedAdHocIdentityCertificateFingerprint=_stagedAdHocIdentityCertificateFingerprint - In the implementation block
@property (nonatomic,copy) NSArray * trustedAnchorCertificateFingerprints;                     //@synthesize trustedAnchorCertificateFingerprints=_trustedAnchorCertificateFingerprints - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                                          //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * userDisplayName;                                         //@synthesize userDisplayName=_userDisplayName - In the implementation block
@property (nonatomic,copy) NSString * userGivenName;                                           //@synthesize userGivenName=_userGivenName - In the implementation block
@property (nonatomic,copy) NSString * userFamilyName;                                          //@synthesize userFamilyName=_userFamilyName - In the implementation block
@property (nonatomic,copy) NSString * userPhoneticGivenName;                                   //@synthesize userPhoneticGivenName=_userPhoneticGivenName - In the implementation block
@property (nonatomic,copy) NSString * userPhoneticFamilyName;                                  //@synthesize userPhoneticFamilyName=_userPhoneticFamilyName - In the implementation block
@property (nonatomic,copy) NSString * userImageURL;                                            //@synthesize userImageURL=_userImageURL - In the implementation block
@property (assign,nonatomic) unsigned long long loginState;                                    //@synthesize loginState=_loginState - In the implementation block
@property (assign,getter=isPasscodeEnabled,nonatomic) BOOL passcodeEnabled;                    //@synthesize passcodeEnabled=_passcodeEnabled - In the implementation block
@property (nonatomic,copy) NSString * studentImageIdentifier;                                  //@synthesize studentImageIdentifier=_studentImageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * instructorImageIdentifier;                               //@synthesize instructorImageIdentifier=_instructorImageIdentifier - In the implementation block
@property (assign,getter=isRequestingUnenroll,nonatomic) BOOL requestingUnenroll;              //@synthesize requestingUnenroll=_requestingUnenroll - In the implementation block
@property (nonatomic,copy) NSString * currentLocaleIdentifier;                                 //@synthesize currentLocaleIdentifier=_currentLocaleIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * activeAirPlayRoute;                                  //@synthesize activeAirPlayRoute=_activeAirPlayRoute - In the implementation block
@property (nonatomic,copy) NSArray * availableAirPlayRoutes;                                   //@synthesize availableAirPlayRoutes=_availableAirPlayRoutes - In the implementation block
@property (nonatomic,copy) NSString * managementLockPasscode;                                  //@synthesize managementLockPasscode=_managementLockPasscode - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allPropertyKeys;
+(id)keyTranslations;
+(id)CRKKeyForDMFKey:(id)arg1 ;
+(id)applicationInfoFromBundleIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)systemVersion;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)platform;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(unsigned long long)lockState;
-(void)setLockState:(unsigned long long)arg1 ;
-(BOOL)isEphemeralMultiUser;
-(NSString *)serialNumber;
-(BOOL)isSupervised;
-(void)setPlatform:(unsigned long long)arg1 ;
-(unsigned long long)interfaceOrientation;
-(unsigned long long)deviceOrientation;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setDeviceOrientation:(unsigned long long)arg1 ;
-(NSString *)systemName;
-(NSString *)buildVersion;
-(float)batteryLevel;
-(NSArray *)displays;
-(void)setChargingState:(unsigned long long)arg1 ;
-(unsigned long long)chargingState;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isScreenSaverActive;
-(void)setBatteryLevel:(float)arg1 ;
-(BOOL)isMuted;
-(void)setDisplays:(NSArray *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)isOrientationLocked;
-(void)setOrientationLocked:(BOOL)arg1 ;
-(void)setSupervised:(BOOL)arg1 ;
-(unsigned long long)availableBytes;
-(void)setAvailableBytes:(unsigned long long)arg1 ;
-(void)setSystemName:(NSString *)arg1 ;
-(float)displayHeight;
-(void)setSystemVersion:(NSString *)arg1 ;
-(BOOL)isRequestingUnenroll;
-(void)setRequestingUnenroll:(BOOL)arg1 ;
-(NSArray *)installedApplicationInfo;
-(void)setInstalledApplicationInfo:(NSArray *)arg1 ;
-(NSArray *)allOpenApplications;
-(NSString *)trustedExchangeIdentifier;
-(void)setTrustedExchangeIdentifier:(NSString *)arg1 ;
-(void)setEphemeralMultiUser:(BOOL)arg1 ;
-(unsigned long long)screenState;
-(void)setScreenState:(unsigned long long)arg1 ;
-(void)setScreenSaverActive:(BOOL)arg1 ;
-(float)displayBackingScaleFactor;
-(void)setDisplayBackingScaleFactor:(float)arg1 ;
-(float)displayWidth;
-(void)setDisplayWidth:(float)arg1 ;
-(void)setDisplayHeight:(float)arg1 ;
-(NSString *)primaryOpenApplication;
-(void)setPrimaryOpenApplication:(NSString *)arg1 ;
-(NSString *)secondaryOpenApplication;
-(void)setSecondaryOpenApplication:(NSString *)arg1 ;
-(NSString *)pipOpenApplication;
-(void)setPipOpenApplication:(NSString *)arg1 ;
-(void)setAllOpenApplications:(NSArray *)arg1 ;
-(BOOL)isAppLocked;
-(void)setAppLocked:(BOOL)arg1 ;
-(NSString *)stagedAdHocIdentityCertificateFingerprint;
-(void)setStagedAdHocIdentityCertificateFingerprint:(NSString *)arg1 ;
-(NSArray *)trustedAnchorCertificateFingerprints;
-(void)setTrustedAnchorCertificateFingerprints:(NSArray *)arg1 ;
-(NSString *)userDisplayName;
-(void)setUserDisplayName:(NSString *)arg1 ;
-(NSString *)userGivenName;
-(void)setUserGivenName:(NSString *)arg1 ;
-(NSString *)userFamilyName;
-(void)setUserFamilyName:(NSString *)arg1 ;
-(NSString *)userPhoneticGivenName;
-(void)setUserPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)userPhoneticFamilyName;
-(void)setUserPhoneticFamilyName:(NSString *)arg1 ;
-(NSString *)userImageURL;
-(void)setUserImageURL:(NSString *)arg1 ;
-(unsigned long long)loginState;
-(void)setLoginState:(unsigned long long)arg1 ;
-(BOOL)isPasscodeEnabled;
-(void)setPasscodeEnabled:(BOOL)arg1 ;
-(NSString *)studentImageIdentifier;
-(void)setStudentImageIdentifier:(NSString *)arg1 ;
-(NSString *)instructorImageIdentifier;
-(void)setInstructorImageIdentifier:(NSString *)arg1 ;
-(NSString *)currentLocaleIdentifier;
-(void)setCurrentLocaleIdentifier:(NSString *)arg1 ;
-(NSDictionary *)activeAirPlayRoute;
-(void)setActiveAirPlayRoute:(NSDictionary *)arg1 ;
-(NSArray *)availableAirPlayRoutes;
-(void)setAvailableAirPlayRoutes:(NSArray *)arg1 ;
-(NSString *)managementLockPasscode;
-(void)setManagementLockPasscode:(NSString *)arg1 ;
-(NSArray *)installedApplications;
-(void)setInstalledApplications:(NSArray *)arg1 ;
-(BOOL)isApplicationOpen:(id)arg1 ;
-(BOOL)isApplicationInstalled:(id)arg1 ;
@end

