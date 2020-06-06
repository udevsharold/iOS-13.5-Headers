/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NNMKSyncStateManagerDelegate <NSObject>
@required
-(void)syncStateManager:(id)arg1 didAcknowledgeForwardNotificationPayload:(/*^block*/id)arg2 forBulletin:(id)arg3;
-(void)syncStateManagerDidUnpair:(id)arg1;
-(void)syncStateManagerDidChangePairedDevice:(id)arg1;
-(void)syncStateManagerDidBeginSyncSession:(id)arg1 syncSessionType:(id)arg2 syncSessionIdentifier:(id)arg3;
-(void)syncStateManagerDidInvalidateSyncSession:(id)arg1 syncSessionIdentifier:(id)arg2;
-(BOOL)syncStateManagerShouldAddFavoriteSubsectionForMailboxId:(id)arg1;

@end

