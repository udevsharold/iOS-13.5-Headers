/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMPolicyiCloudAccountDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadMode;

}

@property (nonatomic,copy) NSString * payloadMode;                  //@synthesize payloadMode=_payloadMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withMode:(id)arg2 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadMode:(NSString *)arg1 ;
-(NSString *)payloadMode;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
@end
