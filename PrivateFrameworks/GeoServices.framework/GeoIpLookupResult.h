/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GeoIpLookupResult : NSObject {

	NSString* _ipAddress;
	SCD_Struct_GE32 _latLong;
	NSString* _countryCode;
	NSString* _timeZone;

}

@property (nonatomic,readonly) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE32 latLong;              //@synthesize latLong=_latLong - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * timeZone;                  //@synthesize timeZone=_timeZone - In the implementation block
-(NSString *)timeZone;
-(NSString *)countryCode;
-(NSString *)ipAddress;
-(id)initWithGEOPDPlaceResponse:(id)arg1 ;
-(SCD_Struct_GE32)latLong;
@end

