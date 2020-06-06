/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKDevicePearl, BKDeviceTouchID;

@interface PKBiometrics : NSObject {

	BKDevicePearl* _pearlDevice;
	BKDeviceTouchID* _touchIDDevice;

}

@property (nonatomic,retain) BKDevicePearl * pearlDevice;                  //@synthesize pearlDevice=_pearlDevice - In the implementation block
@property (nonatomic,retain) BKDeviceTouchID * touchIDDevice;              //@synthesize touchIDDevice=_touchIDDevice - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)removeIdentity:(id)arg1 ;
-(id)nameForIdentity:(id)arg1 ;
-(BOOL)setName:(id)arg1 forIdentity:(id)arg2 ;
-(long long)deviceTypeForIdentityType:(long long)arg1 ;
-(id)deviceForType:(long long)arg1 ;
-(BKDevicePearl *)pearlDevice;
-(BKDeviceTouchID *)touchIDDevice;
-(id)identitiesForIdentityType:(long long)arg1 ;
-(long long)maximumIdentityCountForIdentityType:(long long)arg1 ;
-(id)nextIdentityNameForIdentityType:(long long)arg1 ;
-(void)setPearlDevice:(BKDevicePearl *)arg1 ;
-(void)setTouchIDDevice:(BKDeviceTouchID *)arg1 ;
@end

