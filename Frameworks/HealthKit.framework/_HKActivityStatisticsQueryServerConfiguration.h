/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents;

@interface _HKActivityStatisticsQueryServerConfiguration : HKQueryServerConfiguration {

	NSDate* _startDate;
	NSDate* _endDate;
	NSDateComponents* _moveIntervalComponents;
	NSDateComponents* _exerciseIntervalComponents;
	double _updateInterval;

}

@property (nonatomic,copy) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * moveIntervalComponents;                  //@synthesize moveIntervalComponents=_moveIntervalComponents - In the implementation block
@property (nonatomic,copy) NSDateComponents * exerciseIntervalComponents;              //@synthesize exerciseIntervalComponents=_exerciseIntervalComponents - In the implementation block
@property (assign,nonatomic) double updateInterval;                                    //@synthesize updateInterval=_updateInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(void)setMoveIntervalComponents:(NSDateComponents *)arg1 ;
-(void)setExerciseIntervalComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)moveIntervalComponents;
-(NSDateComponents *)exerciseIntervalComponents;
@end

