/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@class NSString;

@interface CMFitnessMachineWorkout : CMWorkout {

	NSString* fManufacturerName;
	NSString* fModel;

}

@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) NSString * model; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)fitnessMachineWorkoutInstance:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(NSString *)manufacturerName;
-(id)initWithSessionId:(id)arg1 workoutType:(long long)arg2 manufacturerName:(id)arg3 model:(id)arg4 ;
@end
