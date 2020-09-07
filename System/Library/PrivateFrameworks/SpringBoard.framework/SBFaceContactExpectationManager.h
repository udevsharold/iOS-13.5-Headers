/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSceneManager, SBProximitySensorManager;

@interface SBFaceContactExpectationManager : NSObject {

	SBSceneManager* _sceneManager;
	SBProximitySensorManager* _proximitySensorManager;
	BOOL _faceExpected;

}
-(id)description;
-(id)initWithSceneManager:(id)arg1 ;
-(void)updateFaceContactExpectation;
-(id)initWithSceneManager:(id)arg1 proximitySensorManager:(id)arg2 ;
-(id)_frontmostScenesExpectingFaceContact;
-(id)_proximitySensorClientID;
@end
