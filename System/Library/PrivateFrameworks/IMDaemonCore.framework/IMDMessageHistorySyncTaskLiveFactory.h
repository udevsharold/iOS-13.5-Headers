/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDMessageHistorySyncTaskFactory.h>

@class IMDCKSyncController, IMDAccountController, IMDReplayController, NSString;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory> {

	IMDCKSyncController* _ckSyncController;
	IMDAccountController* _accountController;
	IMDReplayController* _replayController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)_initWithCKSyncController:(id)arg1 accountController:(id)arg2 replayController:(id)arg3 ;
-(id)_newFirstUnlockReplaySyncTask;
-(id)_newIDSTransactionLogSyncTask;
-(id)_newKChatSyncTask;
-(id)newSyncTaskForType:(unsigned long long)arg1 ;
@end
