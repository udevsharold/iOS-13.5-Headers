/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLGpsPosition : NSObject <NSSecureCoding> {

	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _expiry;
	SCD_Struct_CL32 _gpsLocation;
	SCD_Struct_CL34 _gpsLocationPrivate;

}

@property (nonatomic,readonly) time_point<std::__1::chrono::steady_clock expiry;              //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CL35 gpsLocation;                                   //@synthesize gpsLocation=_gpsLocation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CL36 gpsLocationPrivate;                            //@synthesize gpsLocationPrivate=_gpsLocationPrivate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(time_point<std::__1::chrono::steady_clock)expiry;
-(id)initWithLocation:(const SCD_Struct_CL35*)arg1 andPrivateLocation:(const SCD_Struct_CL36*)arg2 ;
-(BOOL)isStaleFix:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(SCD_Struct_CL35)gpsLocation;
-(SCD_Struct_CL36)gpsLocationPrivate;
@end

