/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource <NSObject>
@optional
-(CGRect*)statusBarAvoidanceFrame;
-(id)statusBarDescriberAtPoint:(CGPoint)arg1 inView:(id)arg2 pointInSceneLayoutSpace:(CGPoint*)arg3;
-(CGRect*)frameForSceneIdentifier:(id)arg1 inView:(id)arg2;
-(id)statusBarPartsForSceneWithIdentifier:(id)arg1;
-(id)currentlyValidStatusBarPartIdentifiers;

@required
-(long long)statusBarOrientation;
-(id)statusBarDescribers;
-(id)statusBarDescriberForStatusBarPart:(id)arg1;
-(BOOL)allowsConfiguringIndividualStatusBarParts;

@end

