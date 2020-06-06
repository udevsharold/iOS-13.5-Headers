/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STGenericIntentLocation : NSObject <NSSecureCoding> {

	BOOL _isLatLong;
	NSString* _name;
	double _latitude;
	double _longitude;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL isLatLong;                //@synthesize isLatLong=_isLatLong - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)initWithName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
-(BOOL)isLatLong;
-(void)setIsLatLong:(BOOL)arg1 ;
@end

