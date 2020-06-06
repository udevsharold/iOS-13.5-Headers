/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, SSLogFileOptions, NSObject;

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying> {

	BOOL _writeToDisk;
	NSString* _category;
	unsigned long long _environment;
	NSString* _subsystem;
	SSLogFileOptions* _backingLogFileOptions;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;
	NSString* _outputDirectory;
	NSString* _outputFilename;

}

@property (nonatomic,retain) SSLogFileOptions * backingLogFileOptions;                      //@synthesize backingLogFileOptions=_backingLogFileOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * outputDirectory;                                      //@synthesize outputDirectory=_outputDirectory - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                       //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (assign,nonatomic) BOOL writeToDisk;                                              //@synthesize writeToDisk=_writeToDisk - In the implementation block
@property (nonatomic,readonly) BOOL debugLogsEnabled; 
@property (nonatomic,readonly) SSLogFileOptions * logFileOptions; 
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) BOOL shouldLogToDisk; 
+(id)sharedAccountsConfig;
+(id)sharedConfig;
+(id)sharedAccountsCookiesConfig;
+(id)sharedPrivacyConfig;
+(id)sharedBagConfig;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedFollowUpConfig;
+(id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2 ;
+(id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3 ;
+(BOOL)_debugLogsEnabled:(id)arg1 ;
+(id)sharedAccountsLogoutConfig;
+(id)sharedAccountsMigrationConfig;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedBagCacheConfig;
+(id)sharedPushNotificationConfig;
+(id)sharedDaemonConfig;
+(id)sharedStoreServicesConfig;
+(id)sharedAccountsAuthenticationConfig;
+(id)sharedDaemonConfigOversize;
+(id)sharediTunesStoreConfig;
+(id)_logFileDirectoryPathForSubsystem:(id)arg1 category:(id)arg2 ;
+(id)_logFilenameForSubsystem:(id)arg1 category:(id)arg2 ;
+(BOOL)_deviceIsRunningInternalBuild;
+(BOOL)_deviceIsRunningSeedBuild;
+(BOOL)_deviceIsRunningInternalOrSeedBuild;
+(id)sharedAskPermissionExtensionConfig;
+(id)sharedFairPlayAnisetteConfig;
+(id)sharedFeatureEnablerMigrationConfig;
+(id)sharediTunesStoreConfigOversize;
+(id)sharedStoreServicesConfigOversize;
+(id)sharedWriteToDiskConfig;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(unsigned long long)environment;
-(void)setEnvironment:(unsigned long long)arg1 ;
-(BOOL)shouldLog;
-(NSString *)subsystem;
-(void)setOutputFilename:(NSString *)arg1 ;
-(NSString *)outputDirectory;
-(NSObject*<OS_os_log>)OSLogObject;
-(BOOL)debugLogsEnabled;
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(void)setSubsystem:(NSString *)arg1 ;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)writeToDisk;
-(BOOL)shouldLogToDisk;
-(void)setWriteToDisk:(BOOL)arg1 ;
-(SSLogFileOptions *)backingLogFileOptions;
-(NSString *)outputFilename;
-(void)setBackingLogFileOptions:(SSLogFileOptions *)arg1 ;
-(void)setOutputDirectory:(NSString *)arg1 ;
-(SSLogFileOptions *)logFileOptions;
@end

