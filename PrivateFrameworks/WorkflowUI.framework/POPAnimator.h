/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol POPAnimatorDelegate;
#import <WorkflowUI/WorkflowUI-Structs.h>
@class CADisplayLink, NSMutableArray;

@interface POPAnimator : NSObject {

	CADisplayLink* _displayLink;
	list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >* _list;
	CFDictionaryRef _dict;
	NSMutableArray* _observers;
	list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >* _pendingList;
	CFRunLoopObserverRef _pendingListObserver;
	double _slowMotionStartTime;
	double _slowMotionLastTime;
	double _slowMotionAccumulator;
	double _beginTime;
	opaque_pthread_mutex_t _lock;
	BOOL _disableDisplayLink;
	id<POPAnimatorDelegate> _delegate;

}

@property (assign,nonatomic) BOOL disableDisplayLink;                              //@synthesize disableDisplayLink=_disableDisplayLink - In the implementation block
@property (assign,nonatomic) double beginTime;                                     //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic,__weak) id<POPAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double refreshPeriod; 
+(id)sharedAnimator;
-(id)init;
-(void)dealloc;
-(id<POPAnimatorDelegate>)delegate;
-(void)setDelegate:(id<POPAnimatorDelegate>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(id)observers;
-(void)render;
-(double)refreshPeriod;
-(void)addAnimation:(id)arg1 forObject:(id)arg2 key:(id)arg3 ;
-(void)removeAllAnimationsForObject:(id)arg1 ;
-(void)removeAnimationForObject:(id)arg1 key:(id)arg2 ;
-(id)animationKeysForObject:(id)arg1 ;
-(id)animationForObject:(id)arg1 key:(id)arg2 ;
-(void)_clearPendingListObserver;
-(double)_currentRenderTime;
-(void)_renderTime:(double)arg1 items:(list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >*)arg2 ;
-(void)_processPendingList;
-(void)_renderTime:(double)arg1 item:(shared_ptr<POPAnimatorItem>*)arg2 ;
-(void)removeAnimationForObject:(id)arg1 key:(id)arg2 cleanupDict:(BOOL)arg3 ;
-(void)_scheduleProcessPendingList;
-(void)renderTime:(double)arg1 ;
-(BOOL)disableDisplayLink;
-(void)setDisableDisplayLink:(BOOL)arg1 ;
@end

