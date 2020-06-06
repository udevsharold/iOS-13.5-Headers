/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:14 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowOpenFromManagedToUnmanaged;
	NSNumber* _payloadAllowOpenFromUnmanagedToManaged;
	NSNumber* _payloadForceAirDropUnmanaged;
	NSNumber* _payloadAllowManagedAppsCloudSync;
	NSNumber* _payloadAllowManagedToWriteUnmanagedContacts;
	NSNumber* _payloadAllowUnmanagedToReadManagedContacts;

}

@property (nonatomic,copy) NSNumber * payloadAllowOpenFromManagedToUnmanaged;                   //@synthesize payloadAllowOpenFromManagedToUnmanaged=_payloadAllowOpenFromManagedToUnmanaged - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowOpenFromUnmanagedToManaged;                   //@synthesize payloadAllowOpenFromUnmanagedToManaged=_payloadAllowOpenFromUnmanagedToManaged - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceAirDropUnmanaged;                             //@synthesize payloadForceAirDropUnmanaged=_payloadForceAirDropUnmanaged - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowManagedAppsCloudSync;                         //@synthesize payloadAllowManagedAppsCloudSync=_payloadAllowManagedAppsCloudSync - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowManagedToWriteUnmanagedContacts;              //@synthesize payloadAllowManagedToWriteUnmanagedContacts=_payloadAllowManagedToWriteUnmanagedContacts - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowUnmanagedToReadManagedContacts;               //@synthesize payloadAllowUnmanagedToReadManagedContacts=_payloadAllowUnmanagedToReadManagedContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowOpenFromManagedToUnmanaged:(id)arg2 withAllowOpenFromUnmanagedToManaged:(id)arg3 withForceAirDropUnmanaged:(id)arg4 withAllowManagedAppsCloudSync:(id)arg5 withAllowManagedToWriteUnmanagedContacts:(id)arg6 withAllowUnmanagedToReadManagedContacts:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowOpenFromManagedToUnmanaged:(NSNumber *)arg1 ;
-(void)setPayloadAllowOpenFromUnmanagedToManaged:(NSNumber *)arg1 ;
-(void)setPayloadForceAirDropUnmanaged:(NSNumber *)arg1 ;
-(void)setPayloadAllowManagedAppsCloudSync:(NSNumber *)arg1 ;
-(void)setPayloadAllowManagedToWriteUnmanagedContacts:(NSNumber *)arg1 ;
-(void)setPayloadAllowUnmanagedToReadManagedContacts:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowOpenFromManagedToUnmanaged;
-(NSNumber *)payloadAllowOpenFromUnmanagedToManaged;
-(NSNumber *)payloadForceAirDropUnmanaged;
-(NSNumber *)payloadAllowManagedAppsCloudSync;
-(NSNumber *)payloadAllowManagedToWriteUnmanagedContacts;
-(NSNumber *)payloadAllowUnmanagedToReadManagedContacts;
@end

