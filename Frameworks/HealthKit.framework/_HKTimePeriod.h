/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_HKDateBounded.h>

@class NSDate, NSString;

@interface _HKTimePeriod : NSObject <NSSecureCoding, NSCopying, _HKDateBounded> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)containsDate:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)endsBeforeDate:(id)arg1 ;
-(BOOL)startsAfterDate:(id)arg1 ;
-(BOOL)containsTimePeriod:(id)arg1 ;
-(BOOL)overlapsTimePeriod:(id)arg1 ;
-(long long)compareByStartDate:(id)arg1 ;
-(long long)compareByEndDate:(id)arg1 ;
@end

