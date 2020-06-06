/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDFetchBatchedRecordsOperation.h>
#import <libobjc.A.dylib/CKDOperationPipelining.h>

@class NSString;

@interface CKDFetchArchivedRecordsOperation : CKDFetchBatchedRecordsOperation <CKDOperationPipelining> {

	/*^block*/id _recordFetchedBlock;
	/*^block*/id _serverChangeTokenUpdatedBlock;

}

@property (nonatomic,copy) id recordFetchedBlock;                                     //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id serverChangeTokenUpdatedBlock;                          //@synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)recordFetchedBlock;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setServerChangeTokenUpdatedBlock:(id)arg1 ;
-(NSString *)pipeliningDescription;
-(void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2 ;
-(void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4 ;
-(void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2 ;
-(id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2 ;
-(id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1 ;
-(void)_noteOperationBeginning;
-(void)_noteOperationFinishedBlockEnd;
-(void)_noteOperationEnding;
-(id)serverChangeTokenUpdatedBlock;
@end

