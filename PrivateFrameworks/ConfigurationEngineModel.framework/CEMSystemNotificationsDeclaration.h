/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:17 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMSystemNotificationsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadNotificationSettings;
	NSNumber* _payloadAllowNotificationsModification;

}

@property (nonatomic,copy) NSArray * payloadNotificationSettings;                         //@synthesize payloadNotificationSettings=_payloadNotificationSettings - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowNotificationsModification;              //@synthesize payloadAllowNotificationsModification=_payloadAllowNotificationsModification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withNotificationSettings:(id)arg2 withAllowNotificationsModification:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withNotificationSettings:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadNotificationSettings:(NSArray *)arg1 ;
-(void)setPayloadAllowNotificationsModification:(NSNumber *)arg1 ;
-(NSArray *)payloadNotificationSettings;
-(NSNumber *)payloadAllowNotificationsModification;
@end

