/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HUFeatureOnboardingFlow.h>

@protocol HUConfigurationViewController;
@class HMHome, NAFuture, UIViewController, NSDictionary, NSString;

@interface HULanguageSetupOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {

	BOOL _shouldAbortThisOnboardingFlowGroup;
	BOOL _shouldAbortAllOnboarding;
	BOOL _forceOnboardingFinishedForErrorRecovery;
	HMHome* _home;
	NAFuture* _onboardingFuture;
	UIViewController*<HUConfigurationViewController> _initialViewController;
	unsigned long long _languageOnboardingFlowType;
	NSDictionary* _usageOptions;
	NSString* _assistantDeviceIntendedRecognitionLanguage;

}

@property (assign,nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;                                             //@synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup - In the implementation block
@property (assign,nonatomic) BOOL shouldAbortAllOnboarding;                                                       //@synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding - In the implementation block
@property (assign,nonatomic) BOOL forceOnboardingFinishedForErrorRecovery;                                        //@synthesize forceOnboardingFinishedForErrorRecovery=_forceOnboardingFinishedForErrorRecovery - In the implementation block
@property (assign,nonatomic) unsigned long long languageOnboardingFlowType;                                       //@synthesize languageOnboardingFlowType=_languageOnboardingFlowType - In the implementation block
@property (nonatomic,retain) NSDictionary * usageOptions;                                                         //@synthesize usageOptions=_usageOptions - In the implementation block
@property (nonatomic,retain) NSString * assistantDeviceIntendedRecognitionLanguage;                               //@synthesize assistantDeviceIntendedRecognitionLanguage=_assistantDeviceIntendedRecognitionLanguage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NAFuture * onboardingFuture;                                                         //@synthesize onboardingFuture=_onboardingFuture - In the implementation block
@property (nonatomic,retain) UIViewController*<HUConfigurationViewController> initialViewController;              //@synthesize initialViewController=_initialViewController - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                       //@synthesize home=_home - In the implementation block
-(NSString *)description;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(UIViewController*<HUConfigurationViewController>)initialViewController;
-(NSDictionary *)usageOptions;
-(void)setUsageOptions:(NSDictionary *)arg1 ;
-(void)setInitialViewController:(UIViewController*<HUConfigurationViewController>)arg1 ;
-(NAFuture *)onboardingFuture;
-(id)processUserInput:(id)arg1 ;
-(void)setOnboardingFuture:(NAFuture *)arg1 ;
-(BOOL)shouldAbortThisOnboardingFlowGroup;
-(BOOL)shouldAbortAllOnboarding;
-(void)setShouldAbortThisOnboardingFlowGroup:(BOOL)arg1 ;
-(void)setShouldAbortAllOnboarding:(BOOL)arg1 ;
-(id)initWithUsageOptions:(id)arg1 home:(id)arg2 ;
-(id)_determineNextViewControllerWithPriorResults:(id)arg1 ;
-(unsigned long long)languageOnboardingFlowType;
-(NSString *)assistantDeviceIntendedRecognitionLanguage;
-(void)setForceOnboardingFinishedForErrorRecovery:(BOOL)arg1 ;
-(void)setAssistantDeviceIntendedRecognitionLanguage:(NSString *)arg1 ;
-(void)setLanguageOnboardingFlowType:(unsigned long long)arg1 ;
-(BOOL)forceOnboardingFinishedForErrorRecovery;
@end

