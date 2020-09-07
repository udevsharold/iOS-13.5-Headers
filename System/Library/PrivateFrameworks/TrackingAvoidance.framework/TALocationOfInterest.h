/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDate, NSString;

@interface TALocationOfInterest : NSObject <OSLogCoding, TAEventProtocol> {

	unsigned long long _type;
	double _latitude;
	double _longitude;
	double _horizontalAccuracy;
	NSDate* _date;

}

@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)latitude;
-(double)longitude;
-(double)horizontalAccuracy;
-(id)descriptionDictionary;
-(id)getDate;
-(id)initWithType:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 date:(id)arg5 ;
@end
