/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol AVTViewLayoutInfo;
@class AVTUIEnvironment, NSString;

@interface AVTActionsToAttributeEditorTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	AVTUIEnvironment* _environment;
	id<AVTViewLayoutInfo> _avtViewLayoutInfo;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTViewLayoutInfo> avtViewLayoutInfo;              //@synthesize avtViewLayoutInfo=_avtViewLayoutInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)adjustedSafeAreaInsetsForView:(id)arg1 ;
-(AVTUIEnvironment *)environment;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id<AVTViewLayoutInfo>)avtViewLayoutInfo;
-(id)initWithAVTViewLayoutInfo:(id)arg1 environment:(id)arg2 ;
@end

