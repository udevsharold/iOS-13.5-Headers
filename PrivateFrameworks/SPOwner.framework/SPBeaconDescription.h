/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPBeaconDescription : NSObject <NSCopying, NSSecureCoding> {

	NSString* _stableIdentifier;
	NSString* _name;
	NSString* _model;
	NSString* _systemVersion;
	long long _vendorId;
	long long _productId;
	long long _role;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                          //@synthesize systemVersion=_systemVersion - In the implementation block
@property (assign,nonatomic) long long vendorId;                              //@synthesize vendorId=_vendorId - In the implementation block
@property (assign,nonatomic) long long productId;                             //@synthesize productId=_productId - In the implementation block
@property (assign,nonatomic) long long role;                                  //@synthesize role=_role - In the implementation block
@property (nonatomic,copy,readonly) NSString * stableIdentifier;              //@synthesize stableIdentifier=_stableIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)role;
-(void)setName:(NSString *)arg1 ;
-(NSString *)systemVersion;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(void)setRole:(long long)arg1 ;
-(long long)vendorId;
-(void)setVendorId:(long long)arg1 ;
-(long long)productId;
-(void)setProductId:(long long)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(NSString *)stableIdentifier;
-(id)initWithStableIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 role:(long long)arg7 ;
@end

