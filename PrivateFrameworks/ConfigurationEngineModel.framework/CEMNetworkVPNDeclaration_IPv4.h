/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:15 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase {

	NSNumber* _payloadOverridePrimary;

}

@property (nonatomic,copy) NSNumber * payloadOverridePrimary;              //@synthesize payloadOverridePrimary=_payloadOverridePrimary - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithOverridePrimary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadOverridePrimary:(NSNumber *)arg1 ;
-(NSNumber *)payloadOverridePrimary;
@end

