/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSDictionary;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding> {

	ACAccount* _account;
	NSDictionary* _serverResponse;

}

@property (nonatomic,readonly) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(NSDictionary *)serverResponse;
@end

