/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PowerUISmartChargeClientManaging <NSObject>
@required
-(id)status;
-(id)initWithClientName:(id)arg1;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1;
-(unsigned long long)isSmartChargingCurrentlyEnabled:(id*)arg1;
-(BOOL)disableSmartCharging:(id*)arg1;
-(void)disableSmartChargingWithHandler:(/*^block*/id)arg1;
-(BOOL)temporarilyDisableSmartCharging:(id*)arg1;
-(void)temporarilyDisableSmartChargingWithHandler:(/*^block*/id)arg1;
-(BOOL)enableSmartCharging:(id*)arg1;
-(void)enableSmartChargingWithHandler:(/*^block*/id)arg1;
-(BOOL)temporarilyEnableCharging:(id*)arg1;
-(void)temporarilyEnableChargingWithHandler:(/*^block*/id)arg1;
-(id)fullChargeDeadline:(id*)arg1;
-(id)powerLogStatus;

@end

