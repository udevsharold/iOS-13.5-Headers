/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasSecureElement;
	BOOL _hasRemoteDevices;
	BOOL _inFailForward;
	BOOL _canMakeRemotePayments;
	BOOL _canDecryptBAAEncryptedData;

}

@property (assign,nonatomic) BOOL hasSecureElement;                                          //@synthesize hasSecureElement=_hasSecureElement - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteDevices;                                          //@synthesize hasRemoteDevices=_hasRemoteDevices - In the implementation block
@property (assign,getter=isInFailForward,nonatomic) BOOL inFailForward;                      //@synthesize inFailForward=_inFailForward - In the implementation block
@property (assign,nonatomic) BOOL canMakeRemotePayments;                                     //@synthesize canMakeRemotePayments=_canMakeRemotePayments - In the implementation block
@property (assign,nonatomic) BOOL canDecryptBAAEncryptedData;                                //@synthesize canDecryptBAAEncryptedData=_canDecryptBAAEncryptedData - In the implementation block
@property (getter=_isDemoModeActive,nonatomic,readonly) BOOL _isDemoModeActive; 
@property (nonatomic,readonly) BOOL canMakePayments; 
@property (nonatomic,readonly) BOOL canMakeLocalPayments; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canMakePayments;
-(BOOL)isInFailForward;
-(BOOL)hasRemoteDevices;
-(BOOL)canMakeLocalPayments;
-(BOOL)canMakeRemotePayments;
-(BOOL)_isDemoModeActive;
-(BOOL)canDecryptBAAEncryptedData;
-(BOOL)hasSecureElement;
-(void)setHasSecureElement:(BOOL)arg1 ;
-(void)setHasRemoteDevices:(BOOL)arg1 ;
-(void)setInFailForward:(BOOL)arg1 ;
-(void)setCanMakeRemotePayments:(BOOL)arg1 ;
-(void)setCanDecryptBAAEncryptedData:(BOOL)arg1 ;
@end

