/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NGMFullPrekey, NGMPublicDeviceIdentity;

@interface NGMKeyRollingTicket : NSObject {

	NGMFullPrekey* _prekey;
	NGMPublicDeviceIdentity* _registrationInfo;

}

@property (nonatomic,readonly) NGMFullPrekey * prekey;                                  //@synthesize prekey=_prekey - In the implementation block
@property (nonatomic,readonly) NGMPublicDeviceIdentity * registrationInfo;              //@synthesize registrationInfo=_registrationInfo - In the implementation block
-(id)identityData;
-(NGMPublicDeviceIdentity *)registrationInfo;
-(id)prekeyData;
-(id)publicDeviceIdentity;
-(id)initTicketWithSigningKey:(id)arg1 error:(id*)arg2 ;
-(NGMFullPrekey *)prekey;
@end

