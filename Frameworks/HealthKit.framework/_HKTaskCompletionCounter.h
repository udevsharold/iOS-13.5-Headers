/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKTaskCompletionCounter : NSObject {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;
	long long _target;

}
+(id)counterWithTargetCount:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidate;
-(void)decrementCounter;
-(void)incrementCounter;
-(void)allTasksEnqueued;
@end

