/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RETrainingScheduler.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface REOpportunisticTrainingScheduler : RETrainingScheduler {

	NSObject*<OS_xpc_object> _criteria;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _blocks;
	BOOL _scheduled;

}
-(id)init;
-(void)dealloc;
-(void)performTask:(/*^block*/id)arg1 ;
-(void)cancelPendindTasks;
-(void)_queue_unschedule;
-(void)_performAllTasks;
@end
