/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSYSyncSessionObserverDelegate <NSObject>
@optional
-(void)supportsMigrationSync;

@required
-(void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
-(void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
-(void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;

@end

