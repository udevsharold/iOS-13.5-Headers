/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAddSecureElementPassConfiguration : NSObject <NSSecureCoding> {

	NSString* _issuerIdentifier;
	NSString* _localizedDescription;
	long long _configurationType;

}

@property (nonatomic,readonly) long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
@property (nonatomic,copy) NSString * issuerIdentifier;                  //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)issuerIdentifier;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(long long)configurationType;
@end

