/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonExtension.h>

@class HDDaemon, HDAlertSuppressor, HDAppLauncher, HDBackgroundWorkoutRunner, HDCarouselServicesManager, HDCoreMotionWorkoutInterface, HDHeartRateRecoveryManager, HDPowerSavingModeManager, HDQuietModeManager, NSString;

@interface HDWorkoutPluginDaemonExtension : NSObject <HDHealthDaemonExtension> {

	HDDaemon* _daemon;
	HDAlertSuppressor* _alertSuppressor;
	HDAppLauncher* _appLauncher;
	HDBackgroundWorkoutRunner* _backgroundWorkoutRunner;
	HDCarouselServicesManager* _carouselServicesManager;
	HDCoreMotionWorkoutInterface* _coreMotionWorkoutInterface;
	HDHeartRateRecoveryManager* _heartRateRecoveryManager;
	HDPowerSavingModeManager* _powerSavingModeManager;
	HDQuietModeManager* _quietModeManager;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;                                               //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) HDAlertSuppressor * alertSuppressor;                                    //@synthesize alertSuppressor=_alertSuppressor - In the implementation block
@property (nonatomic,readonly) HDAppLauncher * appLauncher;                                            //@synthesize appLauncher=_appLauncher - In the implementation block
@property (nonatomic,readonly) HDBackgroundWorkoutRunner * backgroundWorkoutRunner;                    //@synthesize backgroundWorkoutRunner=_backgroundWorkoutRunner - In the implementation block
@property (nonatomic,readonly) HDCarouselServicesManager * carouselServicesManager;                    //@synthesize carouselServicesManager=_carouselServicesManager - In the implementation block
@property (nonatomic,readonly) HDCoreMotionWorkoutInterface * coreMotionWorkoutInterface;              //@synthesize coreMotionWorkoutInterface=_coreMotionWorkoutInterface - In the implementation block
@property (nonatomic,readonly) HDHeartRateRecoveryManager * heartRateRecoveryManager;                  //@synthesize heartRateRecoveryManager=_heartRateRecoveryManager - In the implementation block
@property (nonatomic,readonly) HDPowerSavingModeManager * powerSavingModeManager;                      //@synthesize powerSavingModeManager=_powerSavingModeManager - In the implementation block
@property (nonatomic,readonly) HDQuietModeManager * quietModeManager;                                  //@synthesize quietModeManager=_quietModeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDDaemon *)daemon;
-(id)initWithDaemon:(id)arg1 ;
-(HDCoreMotionWorkoutInterface *)coreMotionWorkoutInterface;
-(HDBackgroundWorkoutRunner *)backgroundWorkoutRunner;
-(HDAlertSuppressor *)alertSuppressor;
-(HDAppLauncher *)appLauncher;
-(HDCarouselServicesManager *)carouselServicesManager;
-(HDHeartRateRecoveryManager *)heartRateRecoveryManager;
-(HDPowerSavingModeManager *)powerSavingModeManager;
-(HDQuietModeManager *)quietModeManager;
@end

