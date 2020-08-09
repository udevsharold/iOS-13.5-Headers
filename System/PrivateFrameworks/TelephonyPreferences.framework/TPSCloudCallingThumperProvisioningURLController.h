/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TPSCloudCallingURLController.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@class NSString;

@interface TPSCloudCallingThumperProvisioningURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (nonatomic,readonly) BOOL shouldShowUpgradeToThumperButton; 
@property (getter=isThumperProvisioningInProcess,nonatomic,readonly) BOOL thumperProvisioningInProcess; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)enableCapability;
-(void)webSheetCompletion;
-(BOOL)isCapabilityEnabled;
-(int)capabilityProvisioningStatus;
-(id)capabilityProvisioningURL;
-(BOOL)isCapabilityProvisioningURLInvalid;
-(id)capabilityProvisioningPostData;
-(BOOL)isThumperProvisioningInProcess;
-(id)requestTimeoutController;
-(BOOL)shouldShowEmergencyAddress;
-(BOOL)shouldShowUpgradeToThumperButton;
@end
