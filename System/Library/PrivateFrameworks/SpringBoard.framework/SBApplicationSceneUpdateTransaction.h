/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@class SBApplicationSceneEntity, SBWorkspaceTransitionRequest, SBWorkspaceApplicationSceneTransitionContext, NSString, FBSMutableSceneParameters, UIApplicationSceneTransitionContext, UIApplicationSceneSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {

	SBApplicationSceneEntity* _applicationSceneEntity;
	SBWorkspaceTransitionRequest* _request;
	SBWorkspaceApplicationSceneTransitionContext* _transitionContext;
	NSString* _sceneIdentifier;
	FBSMutableSceneParameters* _sceneParameters;
	UIApplicationSceneTransitionContext* _sceneTransitionContext;
	BOOL _suspendedActivation;
	BOOL _shouldSendActivationResult;

}

@property (nonatomic,readonly) SBApplicationSceneEntity * applicationSceneEntity;              //@synthesize applicationSceneEntity=_applicationSceneEntity - In the implementation block
@property (nonatomic,readonly) NSString * sceneIdentifier;                                     //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) UIApplicationSceneSettings * sceneSettings; 
@property (assign,nonatomic) BOOL shouldSendActivationResult;                                  //@synthesize shouldSendActivationResult=_shouldSendActivationResult - In the implementation block
-(id)_customizedDescriptionProperties;
-(void)_didComplete;
-(NSString *)sceneIdentifier;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(UIApplicationSceneSettings *)sceneSettings;
-(SBApplicationSceneEntity *)applicationSceneEntity;
-(void)_sendActivationResultWithSuccess:(BOOL)arg1 ;
-(id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2 ;
-(void)setShouldSendActivationResult:(BOOL)arg1 ;
-(BOOL)shouldSendActivationResult;
@end

