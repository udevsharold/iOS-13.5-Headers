/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PQLResultSet, BRCSyncContext;

@interface BRCFSDownloaderBatchEnumerator : NSObject {

	long long _now;
	long long* _retryQueueKick;
	PQLResultSet* _rs;
	BRCSyncContext* _syncContext;

}

@property (nonatomic,readonly) BRCSyncContext * syncContext;              //@synthesize syncContext=_syncContext - In the implementation block
-(void)close;
-(id)etag;
-(long long)completedUnitCount;
-(BRCSyncContext *)syncContext;
-(id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long*)arg4 ;
-(id)nextDocumentItem;
-(id)stageID;
@end

