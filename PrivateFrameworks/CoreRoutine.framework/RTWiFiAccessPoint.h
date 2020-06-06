/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface RTWiFiAccessPoint : NSObject <NSSecureCoding> {

	NSString* _mac;
	long long _rssi;
	long long _channel;
	double _age;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * mac;                 //@synthesize mac=_mac - In the implementation block
@property (nonatomic,readonly) long long rssi;                 //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,readonly) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) double age;                     //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) NSDate * date;                  //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(long long)channel;
-(long long)rssi;
-(double)age;
-(NSString *)mac;
-(id)initWithMac:(id)arg1 rssi:(long long)arg2 channel:(long long)arg3 age:(double)arg4 date:(id)arg5 ;
@end

