/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDDataCollectionObserverState;

@interface _HDDataCollectionObserverWrapper : NSObject {

	id _observer;
	HDDataCollectionObserverState* _state;
	double _collectionInterval;

}

@property (nonatomic,__weak,readonly) id observer;                             //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) HDDataCollectionObserverState * state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double collectionInterval;                        //@synthesize collectionInterval=_collectionInterval - In the implementation block
-(id)description;
-(id)observer;
-(HDDataCollectionObserverState *)state;
-(void)setState:(HDDataCollectionObserverState *)arg1 ;
-(void)setCollectionInterval:(double)arg1 ;
-(double)collectionInterval;
-(id)initWithObserver:(id)arg1 state:(id)arg2 collectionInterval:(double)arg3 ;
@end

