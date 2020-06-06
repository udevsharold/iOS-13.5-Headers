/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface CTSweetgumUsageAccountMetrics : NSObject <NSSecureCoding> {

	BOOL _localDevice;
	NSString* _networkUsageLabel;
	long long _deviceType;
	NSString* _subscriptionStatus;
	NSString* _planType;
	NSDate* _billingCycleEndDate;
	NSArray* _applicablePlans;

}

@property (nonatomic,retain) NSString * networkUsageLabel;               //@synthesize networkUsageLabel=_networkUsageLabel - In the implementation block
@property (assign,nonatomic) long long deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL localDevice;                           //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,retain) NSString * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,retain) NSString * planType;                        //@synthesize planType=_planType - In the implementation block
@property (nonatomic,retain) NSDate * billingCycleEndDate;               //@synthesize billingCycleEndDate=_billingCycleEndDate - In the implementation block
@property (nonatomic,retain) NSArray * applicablePlans;                  //@synthesize applicablePlans=_applicablePlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)deviceType;
-(NSString *)planType;
-(void)setPlanType:(NSString *)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(NSDate *)billingCycleEndDate;
-(void)setBillingCycleEndDate:(NSDate *)arg1 ;
-(NSString *)networkUsageLabel;
-(BOOL)localDevice;
-(NSString *)subscriptionStatus;
-(NSArray *)applicablePlans;
-(void)setNetworkUsageLabel:(NSString *)arg1 ;
-(void)setLocalDevice:(BOOL)arg1 ;
-(void)setSubscriptionStatus:(NSString *)arg1 ;
-(void)setApplicablePlans:(NSArray *)arg1 ;
@end

