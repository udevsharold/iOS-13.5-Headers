/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IMMultiQueue : NSObject {

	NSMutableDictionary* _queueMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2 ;
-(BOOL)_addBlock:(/*^block*/id)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(id)loggableOverviewForKey:(id)arg1 ;
-(BOOL)addBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4 ;
-(BOOL)addBlock:(/*^block*/id)arg1 forKey:(id)arg2 description:(id)arg3 ;
-(id)loggableOverview;
@end

