/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBScene, UIScenePresentationContext;


@protocol UIScenePresenter <BSInvalidatable>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,__weak,readonly) FBScene * scene; 
@property (nonatomic,copy,readonly) UIScenePresentationContext * presentationContext; 
@property (nonatomic,readonly) UIView*<UIScenePresentation> presentationView; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(void)invalidate;
-(NSString *)identifier;
-(BOOL)isActive;
-(BOOL)isInvalidated;
-(FBScene *)scene;
-(void)activate;
-(void)deactivate;
-(UIScenePresentationContext *)presentationContext;
-(void)modifyPresentationContext:(/*^block*/id)arg1;
-(UIView*<UIScenePresentation>)presentationView;
-(id)newSnapshotContext;
-(id)newSnapshot;
-(id)newSnapshotPresentationView;

@end
