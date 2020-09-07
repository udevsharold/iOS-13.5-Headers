/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKWorkoutRoute, NSArray, HDDaemonTransaction;

@interface HDSmoothingTask : NSObject {

	HKWorkoutRoute* _sample;
	NSArray* _unsmoothedLocations;
	/*^block*/id _completionHandler;
	HDDaemonTransaction* _transaction;
	unsigned long long _smoothingAttempts;

}

@property (nonatomic,retain) HKWorkoutRoute * sample;                        //@synthesize sample=_sample - In the implementation block
@property (nonatomic,retain) NSArray * unsmoothedLocations;                  //@synthesize unsmoothedLocations=_unsmoothedLocations - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) HDDaemonTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign) unsigned long long smoothingAttempts;                     //@synthesize smoothingAttempts=_smoothingAttempts - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(HDDaemonTransaction *)transaction;
-(void)setTransaction:(HDDaemonTransaction *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(void)setSample:(HKWorkoutRoute *)arg1 ;
-(HKWorkoutRoute *)sample;
-(NSArray *)unsmoothedLocations;
-(void)setUnsmoothedLocations:(NSArray *)arg1 ;
-(unsigned long long)smoothingAttempts;
-(void)setSmoothingAttempts:(unsigned long long)arg1 ;
@end
