/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding> {

	NSDictionary* _networkServiceTypePerConfig;
	long long _expectedSendSize;
	long long _expectedReceiveSize;

}

@property (nonatomic,retain) NSDictionary * networkServiceTypePerConfig;              //@synthesize networkServiceTypePerConfig=_networkServiceTypePerConfig - In the implementation block
@property (assign,nonatomic) long long expectedSendSize;                              //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign,nonatomic) long long expectedReceiveSize;                           //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)expectedSendSize;
-(long long)expectedReceiveSize;
-(NSDictionary *)networkServiceTypePerConfig;
-(void)setExpectedSendSize:(long long)arg1 ;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(void)setNetworkServiceTypePerConfig:(NSDictionary *)arg1 ;
@end

