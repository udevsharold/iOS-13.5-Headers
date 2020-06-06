/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsController.h>

@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController {

	SSMetricsEventTable* _table;

}
-(id)init;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(int)_maximumUnreportedToSelect;
-(id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3 suppressUserInfo:(BOOL)arg4 ;
-(id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressDSID:(BOOL)arg3 ;
-(long long)countUnreportedEventsBefore:(long long)arg1 ;
-(BOOL)deleteEventsInsertedBefore:(long long)arg1 ;
-(BOOL)deleteReportedEvents;
-(BOOL)insertEventSummaries:(id)arg1 error:(id*)arg2 ;
-(BOOL)markEventsAsReported:(id)arg1 ;
-(id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressUserInfo:(BOOL)arg3 ;
-(id)unreportedEventURLsSince:(long long)arg1 ;
@end

