/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface PKPeerPaymentRequestToken : NSObject <NSSecureCoding, NSCopying> {

	NSString* _requestToken;
	NSUUID* _deviceScoreIdentifier;

}

@property (nonatomic,copy,readonly) NSString * requestToken;                     //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceScoreIdentifier;              //@synthesize deviceScoreIdentifier=_deviceScoreIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)informalRequestToken;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)requestToken;
-(id)initWithRequestToken:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
-(BOOL)isEqualToPeerPaymentRequestToken:(id)arg1 ;
-(BOOL)isInformalRequestToken;
-(NSUUID *)deviceScoreIdentifier;
@end

