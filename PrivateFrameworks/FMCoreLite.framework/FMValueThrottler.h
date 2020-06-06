/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMScheduler, FMCancelable;
@class NSMutableSet;

@interface FMValueThrottler : NSObject {

	double _throttleInterval;
	id<FMScheduler> _updateScheduler;
	id _value;
	NSMutableSet* _observerBlocks;
	id<FMCancelable> _valueUpdateCancelationToken;

}

@property (nonatomic,readonly) NSMutableSet * observerBlocks;                           //@synthesize observerBlocks=_observerBlocks - In the implementation block
@property (nonatomic,retain) id<FMCancelable> valueUpdateCancelationToken;              //@synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken - In the implementation block
@property (nonatomic,readonly) double throttleInterval;                                 //@synthesize throttleInterval=_throttleInterval - In the implementation block
@property (nonatomic,retain) id<FMScheduler> updateScheduler;                           //@synthesize updateScheduler=_updateScheduler - In the implementation block
@property (nonatomic,retain) id value;                                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingValueChange; 
-(id)init;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id<FMScheduler>)updateScheduler;
-(id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2 ;
-(id)initWithThrottleInterval:(double)arg1 ;
-(id<FMCancelable>)valueUpdateCancelationToken;
-(void)_enqueueValueUpdateIfNecessary;
-(void)setValueUpdateCancelationToken:(id<FMCancelable>)arg1 ;
-(double)throttleInterval;
-(void)_notifyObserversOfValueUpdate;
-(NSMutableSet *)observerBlocks;
-(void)setUpdateScheduler:(id<FMScheduler>)arg1 ;
-(id)observeValueChangesWithBlock:(/*^block*/id)arg1 ;
-(void)flushValueChanges;
-(BOOL)hasPendingValueChange;
@end

