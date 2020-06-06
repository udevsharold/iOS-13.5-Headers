/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:13 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSArray, NSString;

@interface CEMApplicationSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadDiagnosticSubmission;
	NSNumber* _payloadAppAnalytics;
	NSNumber* _payloadAllowDiagnosticSubmission;
	NSArray* _payloadAutonomousSingleAppModePermittedAppIDs;
	NSNumber* _payloadAllowActivityContinuation;
	NSNumber* _payloadAllowEnterpriseAppTrust;
	NSNumber* _payloadAllowDiagnosticSubmissionModification;
	NSNumber* _payloadAllowAutomaticAppUpdates;
	NSNumber* _payloadAllowAutomaticAppUpdatesModification;

}

@property (nonatomic,copy) NSNumber * payloadDiagnosticSubmission;                               //@synthesize payloadDiagnosticSubmission=_payloadDiagnosticSubmission - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAppAnalytics;                                       //@synthesize payloadAppAnalytics=_payloadAppAnalytics - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowDiagnosticSubmission;                          //@synthesize payloadAllowDiagnosticSubmission=_payloadAllowDiagnosticSubmission - In the implementation block
@property (nonatomic,copy) NSArray * payloadAutonomousSingleAppModePermittedAppIDs;              //@synthesize payloadAutonomousSingleAppModePermittedAppIDs=_payloadAutonomousSingleAppModePermittedAppIDs - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowActivityContinuation;                          //@synthesize payloadAllowActivityContinuation=_payloadAllowActivityContinuation - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowEnterpriseAppTrust;                            //@synthesize payloadAllowEnterpriseAppTrust=_payloadAllowEnterpriseAppTrust - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowDiagnosticSubmissionModification;              //@synthesize payloadAllowDiagnosticSubmissionModification=_payloadAllowDiagnosticSubmissionModification - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAutomaticAppUpdates;                           //@synthesize payloadAllowAutomaticAppUpdates=_payloadAllowAutomaticAppUpdates - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAutomaticAppUpdatesModification;               //@synthesize payloadAllowAutomaticAppUpdatesModification=_payloadAllowAutomaticAppUpdatesModification - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withDiagnosticSubmission:(id)arg2 withAppAnalytics:(id)arg3 withAllowDiagnosticSubmission:(id)arg4 withAutonomousSingleAppModePermittedAppIDs:(id)arg5 withAllowActivityContinuation:(id)arg6 withAllowEnterpriseAppTrust:(id)arg7 withAllowDiagnosticSubmissionModification:(id)arg8 withAllowAutomaticAppUpdates:(id)arg9 withAllowAutomaticAppUpdatesModification:(id)arg10 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDiagnosticSubmission:(NSNumber *)arg1 ;
-(void)setPayloadAppAnalytics:(NSNumber *)arg1 ;
-(void)setPayloadAllowDiagnosticSubmission:(NSNumber *)arg1 ;
-(void)setPayloadAutonomousSingleAppModePermittedAppIDs:(NSArray *)arg1 ;
-(void)setPayloadAllowActivityContinuation:(NSNumber *)arg1 ;
-(void)setPayloadAllowEnterpriseAppTrust:(NSNumber *)arg1 ;
-(void)setPayloadAllowDiagnosticSubmissionModification:(NSNumber *)arg1 ;
-(void)setPayloadAllowAutomaticAppUpdates:(NSNumber *)arg1 ;
-(void)setPayloadAllowAutomaticAppUpdatesModification:(NSNumber *)arg1 ;
-(NSNumber *)payloadDiagnosticSubmission;
-(NSNumber *)payloadAppAnalytics;
-(NSNumber *)payloadAllowDiagnosticSubmission;
-(NSArray *)payloadAutonomousSingleAppModePermittedAppIDs;
-(NSNumber *)payloadAllowActivityContinuation;
-(NSNumber *)payloadAllowEnterpriseAppTrust;
-(NSNumber *)payloadAllowDiagnosticSubmissionModification;
-(NSNumber *)payloadAllowAutomaticAppUpdates;
-(NSNumber *)payloadAllowAutomaticAppUpdatesModification;
@end

