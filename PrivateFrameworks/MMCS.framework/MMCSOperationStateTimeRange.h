/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCS/MMCSOperationStateTimeRange.h>
@class NSDate;


@protocol MMCSOperationStateTimeRange <NSObject>
@property (readonly) unsigned long long operationState; 
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (readonly) double absoluteStart; 
@property (readonly) double absoluteStop; 
@required
-(NSDate *)startDate;
-(double)duration;
-(unsigned long long)operationState;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1;
-(long long)compareStopTime:(id)arg1;

@end


@class NSDate, NSString;

@interface MMCSOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange> {

	unsigned long long _operationState;
	NSDate* _startDate;
	double _duration;

}

@property (nonatomic,retain) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (readonly) unsigned long long operationState;              //@synthesize operationState=_operationState - In the implementation block
@property (readonly) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (readonly) double queueing; 
@property (readonly) double executing; 
@property (readonly) double absoluteStart; 
@property (readonly) double relativeStart; 
@property (readonly) double absoluteStop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForOperationState:(unsigned long long)arg1 ;
+(id)descriptionWithOperationState:(unsigned long long)arg1 absoluteStart:(double)arg2 duration:(double)arg3 ;
+(id)describedSortedRanges:(id)arg1 ;
-(NSString *)description;
-(NSDate *)startDate;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(double)queueing;
-(double)executing;
-(unsigned long long)operationState;
-(id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1 ;
-(long long)compareStopTime:(id)arg1 ;
-(double)relativeStart;
@end

