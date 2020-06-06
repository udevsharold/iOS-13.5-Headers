/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAEmailVettingRequest : AARequest {

	ACAccount* _account;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)urlRequest;
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
@end

