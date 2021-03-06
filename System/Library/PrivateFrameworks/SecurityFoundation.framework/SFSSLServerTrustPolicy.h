/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/SFTrustPolicy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding> {

	id _sslServerTrustPolicyInternal;

}

@property (nonatomic,copy) NSString * serverName; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithServerName:(id)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
@end

