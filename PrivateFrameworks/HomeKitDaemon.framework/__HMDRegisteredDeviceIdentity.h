/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/__HMDRegisteredIdentity.h>

@class HMDDevice;

@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity {

	HMDDevice* _device;

}

@property (readonly) HMDDevice * device;              //@synthesize device=_device - In the implementation block
-(id)initWithIdentity:(id)arg1 ;
-(HMDDevice *)device;
-(id)initWithIdentity:(id)arg1 device:(id)arg2 ;
@end

