/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HKMCCycleSegment : NSObject <NSSecureCoding> {

	SCD_Struct_HK0 _days;
	long long _type;

}

@property (nonatomic,readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) SCD_Struct_HK0 days;              //@synthesize days=_days - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_menstruationSegmentWithDays:(SCD_Struct_HK0)arg1 ;
+(id)_fertileWindowSegmentWithDays:(SCD_Struct_HK0)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_HK0)days;
-(id)_initWithType:(long long)arg1 days:(SCD_Struct_HK0)arg2 ;
@end

