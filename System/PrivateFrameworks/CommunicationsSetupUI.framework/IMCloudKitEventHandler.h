/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMCloudKitEventHandler <NSObject>
@optional
-(void)cloudKitEventNotificationManager:(id)arg1 didDisableAllDevices:(BOOL)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 didChangeEnabled:(BOOL)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
-(void)cloudKitEventNotificationManager:(id)arg1 didFetchSyncStatistics:(id)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
-(void)cloudKitEventNotificationManager:(id)arg1 didPerformAdditionalStorageRequiredCheck:(BOOL)arg2 additionalStorageRequired:(unsigned long long)arg3 forAccountId:(id)arg4 error:(id)arg5;

@end
