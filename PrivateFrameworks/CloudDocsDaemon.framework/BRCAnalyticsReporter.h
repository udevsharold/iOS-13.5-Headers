/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BRCAccountSession, NSObject, BRCMetricEndpoint, NSMutableDictionary, BRCSyncHealthReport;

@interface BRCAnalyticsReporter : NSObject {

	BRCAccountSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	BRCMetricEndpoint* _metricEndpoint;
	NSMutableDictionary* _eventsByKind;
	BRCSyncHealthReport* _syncHealthReport;

}
-(void)submitEventMetric:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(void)_forgetEventMetrics:(id)arg1 ;
-(void)_cleanupTimedOutEventMetrics:(id)arg1 ;
-(void)_withEventMetricsOfKind:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)forgetEventMetric:(id)arg1 ;
-(void)createFSEventToSyncUpEventForFileID:(unsigned long long)arg1 genID:(unsigned)arg2 ;
-(void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)arg1 genID:(unsigned)arg2 accessor:(/*^block*/id)arg3 ;
-(void)lookupFSEventToSyncUpEventByItemID:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)createUserDownloadEventForOperationID:(id)arg1 isRecursive:(BOOL)arg2 isForBackup:(BOOL)arg3 ;
-(void)lookupUserDownloadEventByOperationID:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)lookupUserDownloadEventByDocID:(id)arg1 accessor:(/*^block*/id)arg2 ;
@end

