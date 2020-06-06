/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, _HKBehavior;


@protocol HDHealthDaemon <NSObject>
@property (readonly) HDBackgroundTaskScheduler * backgroundTaskScheduler; 
@property (readonly) HDPluginManager * pluginManager; 
@property (nonatomic,readonly) HDPrimaryProfile * primaryProfile; 
@property (nonatomic,retain) id<HDNanoAlertSuppressionService> alertSuppressionService; 
@property (nonatomic,readonly) _HKBehavior * behavior; 
@required
-(_HKBehavior *)behavior;
-(HDPluginManager *)pluginManager;
-(HDPrimaryProfile *)primaryProfile;
-(void)registerForDaemonReady:(id)arg1;
-(void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;
-(id)createXPCListenerWithMachServiceName:(id)arg1;
-(id)daemonExtensionWithIdentifier:(id)arg1;
-(void)registerForLaunchNotification:(const char*)arg1;
-(void)unregisterForLaunchNotification:(const char*)arg1;
-(id)daemonExtensionsConformingToProtocol:(id)arg1;
-(HDBackgroundTaskScheduler *)backgroundTaskScheduler;
-(id<HDNanoAlertSuppressionService>)alertSuppressionService;
-(void)setAlertSuppressionService:(id)arg1;

@end

