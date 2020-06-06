/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICSelectorDelayer : NSObject {

	BOOL _waitToFireUntilRequestsStop;
	BOOL _callOnMainThread;
	id _target;
	SEL _selector;
	double _delay;
	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _fireBlock;

}

@property (assign,nonatomic,__weak) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                           //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL waitToFireUntilRequestsStop;                       //@synthesize waitToFireUntilRequestsStop=_waitToFireUntilRequestsStop - In the implementation block
@property (assign,nonatomic) BOOL callOnMainThread;                                  //@synthesize callOnMainThread=_callOnMainThread - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,copy) id fireBlock;                                             //@synthesize fireBlock=_fireBlock - In the implementation block
@property (assign) double delay;                                                     //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) BOOL isScheduledToFire; 
-(void)dealloc;
-(SEL)selector;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(BOOL)arg4 callOnMainThread:(BOOL)arg5 ;
-(void)requestFire;
-(BOOL)isScheduledToFire;
-(void)fireImmediately;
-(void)setWaitToFireUntilRequestsStop:(BOOL)arg1 ;
-(void)setCallOnMainThread:(BOOL)arg1 ;
-(void)_cancelFireRequests;
-(BOOL)waitToFireUntilRequestsStop;
-(void)callTargetSelector;
-(BOOL)callOnMainThread;
-(void)cancelPreviousFireRequests;
@end

