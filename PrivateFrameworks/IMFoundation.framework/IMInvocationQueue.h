/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject {

	BOOL _holdQueue;
	id _delegate;
	id _target;
	double _dequeueRate;
	NSMutableArray* _queue;
	NSMutableArray* _options;
	NSProtocolChecker* _protocolChecker;

}

@property (nonatomic,readonly) BOOL holdQueue;                                          //@synthesize holdQueue=_holdQueue - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain,readonly) NSProtocolChecker * protocolChecker;              //@synthesize protocolChecker=_protocolChecker - In the implementation block
@property (nonatomic,retain) Protocol * protocol; 
@property (assign) id target;                                                           //@synthesize target=_target - In the implementation block
@property (assign) id delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double dequeueRate;                                        //@synthesize dequeueRate=_dequeueRate - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned long long)count;
-(NSMutableArray *)queue;
-(NSMutableArray *)options;
-(BOOL)isEmpty;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(Protocol *)protocol;
-(id)peek;
-(void)setProtocol:(Protocol *)arg1 ;
-(unsigned long long)_optionsForInvocation:(id)arg1 ;
-(long long)_enqueueInvocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_invokeInvocation:(id)arg1 ;
-(void)_setQueueTimer;
-(void)_checkQueue;
-(id)_dequeueInvocation;
-(int)_numberOfLimitedMessagesInQueue;
-(int)_maxQueueLimitSize;
-(BOOL)_acceptsOptions:(unsigned long long)arg1 ;
-(BOOL)_replaceSimilarInvocation:(id)arg1 ;
-(BOOL)_insertInvocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setDequeueRate:(double)arg1 ;
-(void)_stepQueueNotification:(id)arg1 ;
-(void)_holdQueueNotification:(id)arg1 ;
-(void)_releaseQueueNotification:(id)arg1 ;
-(void)removeAllInvocations;
-(void)invokeAll;
-(double)dequeueRate;
-(NSProtocolChecker *)protocolChecker;
-(BOOL)holdQueue;
@end

