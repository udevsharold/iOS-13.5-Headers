/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKAccountAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying> {

	NSString* _account;
	NSString* _extendedAccount;
	NSString* _payments;

}

@property (nonatomic,copy) NSString * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * extendedAccount;              //@synthesize extendedAccount=_extendedAccount - In the implementation block
@property (nonatomic,copy) NSString * payments;                     //@synthesize payments=_payments - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)payments;
-(void)setPayments:(NSString *)arg1 ;
-(NSString *)extendedAccount;
-(void)setExtendedAccount:(NSString *)arg1 ;
@end

