/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, RTLocation, NSDate;

@interface RTPlaceInferenceOptions : NSObject <NSSecureCoding> {

	BOOL _useBackground;
	unsigned long long _fidelityPolicy;
	NSArray* _locations;
	NSArray* _accessPoints;
	RTLocation* _location;
	double _distance;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _limit;

}

@property (nonatomic,readonly) unsigned long long fidelityPolicy;              //@synthesize fidelityPolicy=_fidelityPolicy - In the implementation block
@property (nonatomic,readonly) NSArray * locations;                            //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSArray * accessPoints;                         //@synthesize accessPoints=_accessPoints - In the implementation block
@property (nonatomic,readonly) RTLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double distance;                                //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) long long limit;                                //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL useBackground;                             //@synthesize useBackground=_useBackground - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(long long)limit;
-(RTLocation *)location;
-(double)distance;
-(NSArray *)locations;
-(NSArray *)accessPoints;
-(id)initWithFidelityPolicy:(unsigned long long)arg1 locations:(id)arg2 accessPoints:(id)arg3 distance:(double)arg4 location:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 limit:(long long)arg8 useBackground:(BOOL)arg9 ;
-(id)initWithFidelityPolicy:(unsigned long long)arg1 locations:(id)arg2 accessPoints:(id)arg3 ;
-(id)initWithinDistance:(double)arg1 location:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(unsigned long long)fidelityPolicy;
-(BOOL)useBackground;
@end

