/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPlacemark, CLLocation, NSString;

@interface _CLPlaceInference : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _userType;
	unsigned long long _placeType;
	CLPlacemark* _placemark;
	CLLocation* _referenceLocation;
	double _confidence;
	NSString* _preferredName;

}

@property (nonatomic,readonly) unsigned long long userType;                 //@synthesize userType=_userType - In the implementation block
@property (nonatomic,readonly) unsigned long long placeType;                //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,readonly) CLPlacemark * placemark;                     //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) CLLocation * referenceLocation;              //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSString * preferredName;                    //@synthesize preferredName=_preferredName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(unsigned long long)userType;
-(id)initWithUserType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 placemark:(id)arg3 referenceLocation:(id)arg4 confidence:(double)arg5 preferredName:(id)arg6 ;
-(CLLocation *)referenceLocation;
-(unsigned long long)placeType;
-(CLPlacemark *)placemark;
-(NSString *)preferredName;
@end

