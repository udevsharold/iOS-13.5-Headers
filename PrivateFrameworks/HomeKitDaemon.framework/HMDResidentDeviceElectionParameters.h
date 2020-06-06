/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFProductInfo, HMDHomeKitVersion, NSSet, HMDResidentDevice, HMFBoolean, NSArray;

@interface HMDResidentDeviceElectionParameters : HMFObject {

	HMFProductInfo* _productInfo;
	HMDHomeKitVersion* _version;
	NSSet* _accessories;
	HMDResidentDevice* _resident;
	HMFBoolean* _enabled;
	long long _location;

}

@property (readonly) HMDResidentDevice * resident;                            //@synthesize resident=_resident - In the implementation block
@property (getter=isEnabled,copy,readonly) HMFBoolean * enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) long long location;                                      //@synthesize location=_location - In the implementation block
@property (copy,readonly) NSArray * accessories; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(id)isEnabled;
-(long long)location;
-(NSArray *)accessories;
-(HMDResidentDevice *)resident;
-(id)initWithResident:(id)arg1 serializedPayload:(id)arg2 ;
-(id)initWithResident:(id)arg1 enabled:(id)arg2 location:(long long)arg3 accessories:(id)arg4 ;
-(id)serializedPayload;
@end

