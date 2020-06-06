/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSDate, NSObject, PMMPredictionNotification;

@interface ATXMagicalMomentsUpdateMonitor : NSObject {

	NSDictionary* _predictionMap;
	NSDate* _expiration;
	unsigned long long _mmPredictionCount;
	NSObject*<OS_dispatch_queue> _queue;
	PMMPredictionNotification* _mmUpdateListener;
	unsigned long long _limit;

}

@property (nonatomic,readonly) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
-(id)init;
-(unsigned long long)limit;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(void)dropCacheIfExpired;
-(id)predictionsForBundleId:(id)arg1 ;
-(unsigned long long)mmPredictionCount;
-(void)setupUpdateListener;
-(void)updatePredictionsWith:(id)arg1 consumer:(unsigned long long)arg2 ;
-(void)_setPredictions:(id)arg1 expiration:(id)arg2 totalPredictionCount:(unsigned long long)arg3 ;
@end

