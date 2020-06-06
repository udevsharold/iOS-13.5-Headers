/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDCloudSyncCoordinatorObserver
@required
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateSyncEnabled:(BOOL)arg2;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateErrorRequiringUserAction:(id)arg2;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateLastPushDate:(id)arg2 lastPullDate:(id)arg3;
-(void)cloudSyncCoordinatorObserver:(id)arg1 didUpdateRestoreCompletionDate:(id)arg2;

@end

