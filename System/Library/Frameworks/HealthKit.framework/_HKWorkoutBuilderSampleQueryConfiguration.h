/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSUUID;

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration {

	BOOL _needsHistoricalData;
	NSUUID* _workoutBuilderIdentifier;

}

@property (assign,nonatomic) BOOL needsHistoricalData;                     //@synthesize needsHistoricalData=_needsHistoricalData - In the implementation block
@property (nonatomic,copy) NSUUID * workoutBuilderIdentifier;              //@synthesize workoutBuilderIdentifier=_workoutBuilderIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNeedsHistoricalData:(BOOL)arg1 ;
-(void)setWorkoutBuilderIdentifier:(NSUUID *)arg1 ;
-(BOOL)needsHistoricalData;
-(NSUUID *)workoutBuilderIdentifier;
@end
