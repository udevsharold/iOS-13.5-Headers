/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNScheduler;
@class CNQueue, NSMutableArray;

@interface _CNFlatMapSubscriptionContext : NSObject {

	CNQueue* _decorators;
	NSMutableArray* _tokens;
	id<CNScheduler> _downstream;
	id<CNScheduler> _resourceLock;
	BOOL _operatorReceiving;
	BOOL _observerReceiving;

}

@property (nonatomic,readonly) CNQueue * decorators;                                         //@synthesize decorators=_decorators - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tokens;                                      //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> downstream;                                   //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceLock;                                 //@synthesize resourceLock=_resourceLock - In the implementation block
@property (assign,getter=isOperatorReceiving,nonatomic) BOOL operatorReceiving;              //@synthesize operatorReceiving=_operatorReceiving - In the implementation block
@property (assign,getter=isObserverReceiving,nonatomic) BOOL observerReceiving;              //@synthesize observerReceiving=_observerReceiving - In the implementation block
-(NSMutableArray *)tokens;
-(id<CNScheduler>)downstream;
-(id<CNScheduler>)resourceLock;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(CNQueue *)decorators;
-(BOOL)isObserverReceiving;
-(void)setObserverReceiving:(BOOL)arg1 ;
-(BOOL)isOperatorReceiving;
-(void)setOperatorReceiving:(BOOL)arg1 ;
@end

