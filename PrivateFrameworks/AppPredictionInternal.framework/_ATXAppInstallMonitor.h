/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _ATXAppInfoManager, NSDictionary, NSObject;

@interface _ATXAppInstallMonitor : NSObject {

	_ATXAppInfoManager* _appInfoManager;
	NSDictionary* _assetData;
	NSObject*<OS_dispatch_queue> _installQueue;
	/*^block*/id _updateCompletionBlock;

}
+(id)removeIntersectionBetweenSet:(id)arg1 set:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)train;
-(BOOL)restoreInProgress;
-(id)initWithAppInfoManager:(id)arg1 ;
-(void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)arg1 andBackdate:(BOOL)arg2 ;
-(void)synchronousUpdateAndBackdate:(BOOL)arg1 ;
-(void)noSyncUpdateWithWaitTime:(unsigned long long)arg1 andBackdate:(BOOL)arg2 ;
-(void)receivedStateChangeNotification:(id)arg1 ;
-(void)receivedInstallNotification:(id)arg1 ;
-(void)_receivedInstallNotificationWithApps:(id)arg1 placeholderInstallNotification:(BOOL)arg2 ;
-(void)receivedUninstallNotification:(id)arg1 ;
-(void)_receivedUninstallNotificationWithApps:(id)arg1 placeholderUninstallNotification:(BOOL)arg2 ;
-(void)handleInstallationOfApps:(id)arg1 andBackdate:(BOOL)arg2 ;
-(void)handleUninstallationOfApps:(id)arg1 ;
-(id)_fetchInstalledApps;
-(id)_fetchAllAppsFromDatastore;
-(id)_fetchAllAppsWithInstallDateFromDatastore;
-(void)setUpdateCompletionBlock:(/*^block*/id)arg1 ;
@end

