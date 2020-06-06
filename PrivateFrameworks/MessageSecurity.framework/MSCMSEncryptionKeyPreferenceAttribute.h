/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageSecurity/MessageSecurity-Structs.h>
#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder> {

	SecCertificateRef _encryptionCertificate;

}

@property (readonly) SecCertificateRef encryptionCertificate;              //@synthesize encryptionCertificate=_encryptionCertificate - In the implementation block
-(void)dealloc;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(SecCertificateRef)encryptionCertificate;
@end

