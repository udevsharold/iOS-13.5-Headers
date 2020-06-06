/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDCKChatSyncCKOperationFactory : NSObject
-(id)_chatSyncOperationGroupWithName:(id)arg1 ;
-(id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)_chatFetchRecordZoneChangesCKConfiguration;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 groupName:(id)arg4 ;
-(id)_chatWriteRecordsCKConfiguration;
-(id)_chatSyncOperationGroup;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 ;
-(id)saveChatsCKOperationUsingRecordsToSave:(id)arg1 ;
-(id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1 ;
@end

