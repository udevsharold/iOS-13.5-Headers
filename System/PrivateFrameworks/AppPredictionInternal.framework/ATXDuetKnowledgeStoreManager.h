/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _DKKnowledgeQuerying, OS_dispatch_source;
@class NSObject, NSDate;

@interface ATXDuetKnowledgeStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<_DKKnowledgeQuerying> _store;
	NSDate* _lastUsedDate;
	NSObject*<OS_dispatch_source> _pressureSource;
	unsigned long long _previousPressure;
	NSObject*<OS_dispatch_source> _expirationSource;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)runBlock:(/*^block*/id)arg1 ;
-(void)_clear;
-(void)_handleMemoryPressure;
@end
