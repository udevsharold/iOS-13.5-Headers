/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class BRCAccountSession, NSMutableDictionary, NSObject;

@interface BRCPowerLogReporter : NSObject {

	BRCAccountSession* _session;
	NSMutableDictionary* _deepScanReasonsToReport;
	NSObject*<OS_dispatch_source> _reporterTimer;
	NSObject*<OS_dispatch_queue> _reporterQueue;

}
-(id)initWithSession:(id)arg1 ;
-(void)reportDeepScanReason:(id)arg1 forAppLibraryID:(id)arg2 ;
-(double)statsReportInterval;
-(void)_reportStats;
-(double)timeUntilNextReport;
@end

