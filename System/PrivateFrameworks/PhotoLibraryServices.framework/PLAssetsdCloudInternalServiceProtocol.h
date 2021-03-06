/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAssetsdCloudInternalServiceProtocol <NSObject>
@required
-(void)setCloudPhotoLibraryEnabledState:(BOOL)arg1;
-(void)enablePhotostreamsWithStreamID:(id)arg1;
-(void)syncCloudPhotoLibrary;
-(void)createPhotostreamAlbumWithStreamID:(id)arg1;
-(void)updateSharedAlbumsCachedServerConfigurationLimits;
-(void)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)keyForEmailAddress:(id)arg1 reply:(/*^block*/id)arg2;
-(void)emailAddressForKey:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)personInfoDictionaryForPersonID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
-(void)isReadyForCloudPhotoLibraryWithReply:(/*^block*/id)arg1;
-(void)shouldAutoEnableiCPLOnOSXWithReply:(/*^block*/id)arg1;
-(void)setCloudPhotoLibraryPauseState:(BOOL)arg1 reason:(short)arg2;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)getCurrentTransferProgress:(/*^block*/id)arg1;
-(void)getNotUploadedCount:(/*^block*/id)arg1;
-(void)getSystemBudgetsWithReply:(/*^block*/id)arg1;
-(void)overrideSystemBudgetsForSyncSession:(BOOL)arg1 systemBudgets:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)publishMomentShareWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchMomentShareWithURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)acceptMomentShareWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)forceSyncMomentShareWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryUserIdentitiesWithEmails:(id)arg1 phoneNumbers:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getResetSyncStatusWithReply:(/*^block*/id)arg1;

@end

