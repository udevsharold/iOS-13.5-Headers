/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class HMDAccountHandle, NSData;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle {

	HMDAccountHandle* _accountHandle;
	NSData* _pushToken;

}

@property (copy,readonly) HMDAccountHandle * accountHandle;              //@synthesize accountHandle=_accountHandle - In the implementation block
@property (copy,readonly) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValidDestination:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)destination;
-(NSData *)pushToken;
-(id)privateDescription;
-(id)initWithDestination:(id)arg1 ;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
-(id)initWithPushToken:(id)arg1 accountHandle:(id)arg2 ;
@end

