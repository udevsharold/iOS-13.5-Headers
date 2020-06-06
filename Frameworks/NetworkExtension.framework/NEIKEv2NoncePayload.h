/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2NoncePayload : NEIKEv2Payload {

	NSData* _nonce;

}

@property (retain) NSData * nonce;              //@synthesize nonce=_nonce - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

