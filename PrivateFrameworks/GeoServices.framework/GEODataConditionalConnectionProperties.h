/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEODataConditionalConnectionProperties : NSObject <NSSecureCoding> {

	unsigned long long _workLoad;
	double _timeWindowStartTime;
	double _timeWindowDuration;

}

@property (nonatomic,readonly) unsigned long long workLoad;              //@synthesize workLoad=_workLoad - In the implementation block
@property (nonatomic,readonly) double timeWindowStartTime;               //@synthesize timeWindowStartTime=_timeWindowStartTime - In the implementation block
@property (nonatomic,readonly) double timeWindowDuration;                //@synthesize timeWindowDuration=_timeWindowDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithWorkload:(unsigned long long)arg1 timeWindowDuration:(double)arg2 ;
-(id)initWithWorkload:(unsigned long long)arg1 timeWindowStartTime:(double)arg2 timeWindowDuration:(double)arg3 ;
-(unsigned long long)workLoad;
-(double)timeWindowStartTime;
-(double)timeWindowDuration;
@end

