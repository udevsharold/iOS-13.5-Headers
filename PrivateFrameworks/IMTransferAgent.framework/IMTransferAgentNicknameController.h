/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject {

	CKContainer* _nickNameContainer;

}

@property (nonatomic,readonly) CKContainer * nickNameContainer;              //@synthesize nickNameContainer=_nickNameContainer - In the implementation block
+(id)sharedInstance;
+(id)ckQueue;
-(id)lockdownManager;
-(BOOL)shouldUseDevNickNameContainer;
-(void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)deleteAllPersonalNicknamesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_serverSaysToUseOldContainer;
-(id)_nickNameContainerIdentifier;
-(id)_nickNameContainer;
-(id)nickNamePublicDatabase;
-(void)fetchCurrentUserForNicknameContainer:(/*^block*/id)arg1 ;
-(CKContainer *)nickNameContainer;
-(id)_nickNameFetchConfiguration;
-(id)_nickNamePublicDB;
-(void)performCloudKitOperation:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordID:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordIDs:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)fetchAllNicknamesForCurrentUser:(/*^block*/id)arg1 ;
-(id)_nickNameSaveConfiguration;
-(void)_handleSaveNicknameError:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)cloudKitOperationWithRetryCount:(unsigned long long)arg1 withError:(id)arg2 operation:(/*^block*/id)arg3 ;
-(double)_retryIntervalForRetryCount:(unsigned long long)arg1 ;
@end

