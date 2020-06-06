/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface WFHotspotDetails : NSObject {

	NSNumber* _batteryLife;
	NSString* _cellularProtocolString;
	NSNumber* _signalStrength;

}

@property (nonatomic,retain) NSNumber * batteryLife;                       //@synthesize batteryLife=_batteryLife - In the implementation block
@property (nonatomic,copy) NSString * cellularProtocolString;              //@synthesize cellularProtocolString=_cellularProtocolString - In the implementation block
@property (nonatomic,retain) NSNumber * signalStrength;                    //@synthesize signalStrength=_signalStrength - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)signalStrength;
-(NSNumber *)batteryLife;
-(void)setBatteryLife:(NSNumber *)arg1 ;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(NSString *)cellularProtocolString;
-(void)setCellularProtocolString:(NSString *)arg1 ;
-(BOOL)isEqualHotspotDetails:(id)arg1 ;
@end

