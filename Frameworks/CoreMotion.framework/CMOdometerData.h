/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSNumber, NSString;

@interface CMOdometerData : NSObject <SRSampling, NSSecureCoding, NSCopying> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _distance;
	NSNumber* _currentSpeed;
	NSNumber* _averageSpeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSNumber * distance;                  //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) NSNumber * currentSpeed;              //@synthesize currentSpeed=_currentSpeed - In the implementation block
@property (nonatomic,readonly) NSNumber * averageSpeed;              //@synthesize averageSpeed=_averageSpeed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSNumber *)distance;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(NSNumber *)currentSpeed;
-(NSNumber *)averageSpeed;
-(id)initWithDistance:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 currentSpeed:(id)arg4 averageSpeed:(id)arg5 ;
@end

