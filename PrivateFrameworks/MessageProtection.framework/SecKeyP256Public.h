/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <libobjc.A.dylib/P256PublicKeyProtocol.h>

@class NSData, NSString;

@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol> {

	SecKeyRef _publicKeyRef;
	NSData* _serializedKey;

}

@property (assign) SecKeyRef publicKeyRef;                          //@synthesize publicKeyRef=_publicKeyRef - In the implementation block
@property (retain) NSData * serializedKey;                          //@synthesize serializedKey=_serializedKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)dataRepresentation;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifySignature:(id)arg1 data:(id)arg2 ;
-(SecKeyRef)publicKeyRef;
-(id)initWithSecKeyRef:(SecKeyRef)arg1 ;
-(void)setPublicKeyRef:(SecKeyRef)arg1 ;
-(NSData *)serializedKey;
-(void)setSerializedKey:(NSData *)arg1 ;
@end

