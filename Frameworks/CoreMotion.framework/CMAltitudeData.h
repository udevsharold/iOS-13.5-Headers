/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSNumber;

@interface CMAltitudeData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) NSNumber * relativeAltitude; 
@property (nonatomic,readonly) NSNumber * pressure; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)pressure;
-(id)initWithAltitude:(float)arg1 andTimestamp:(double)arg2 atBaseAltitude:(float)arg3 ;
-(id)initWithTimestamp:(double)arg1 pressure:(float)arg2 relativeAltitude:(float)arg3 ;
-(NSNumber *)relativeAltitude;
@end

