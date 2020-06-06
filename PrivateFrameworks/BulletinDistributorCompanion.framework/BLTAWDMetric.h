/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AWDMetricContainer, PBCodable;

@interface BLTAWDMetric : NSObject {

	AWDMetricContainer* _metricContainer;
	PBCodable* _metric;

}

@property (nonatomic,retain,readonly) PBCodable * metric;              //@synthesize metric=_metric - In the implementation block
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 isGizmoDate:(BOOL)arg6 startTime:(id)arg7 now:(id)arg8 ;
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 ;
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7 connectionStatus:(unsigned long long)arg8 hasPublicationDate:(BOOL)arg9 ;
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7 ;
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 now:(id)arg7 connectionStatus:(unsigned long long)arg8 ;
+(void)submitMetricForDelayWithID:(unsigned)arg1 class:(Class)arg2 startTime:(id)arg3 ;
+(void)submitMetricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 ;
+(void)submitMetricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 isGizmoDate:(BOOL)arg6 startTime:(id)arg7 ;
+(void)submitMetricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned long long)arg7 ;
+(void)submitMetricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned long long)arg7 hasPublicationDate:(BOOL)arg8 ;
+(void)submitMetricForDelayAckFromSecondaryDeviceWithSectionID:(id)arg1 publisherMatchID:(id)arg2 companionPublicationDate:(id)arg3 startTime:(id)arg4 connectionStatus:(unsigned long long)arg5 origConnectionStatus:(unsigned long long)arg6 timedOut:(BOOL)arg7 ;
+(void)submitMetricForDelayToSyncWithStartTime:(id)arg1 initial:(BOOL)arg2 ;
-(PBCodable *)metric;
-(void)_submit;
-(id)initWithMetricID:(unsigned)arg1 class:(Class)arg2 ;
-(void)_setDelayFrom:(id)arg1 to:(id)arg2 ;
@end

