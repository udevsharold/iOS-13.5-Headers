/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface OITSUDelayTimer : NSObject {

	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	BOOL _cancelled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (setter=_setDispatchQueue:,nonatomic,retain) NSObject*<OS_dispatch_queue> _dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (setter=_setDispatchTimer:,nonatomic,retain) NSObject*<OS_dispatch_source> _dispatchTimer;              //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (assign,setter=_setCancelled:,getter=_isCancelled,nonatomic) BOOL _cancelled;                           //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;                          //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)_isCancelled;
-(NSObject*<OS_dispatch_queue>)_dispatchQueue;
-(void)_reallyCancel;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)_dispatchTimer;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)_setCancelled:(BOOL)arg1 ;
-(void)_setDispatchQueue:(id)arg1 ;
-(void)_setDispatchTimer:(id)arg1 ;
@end

