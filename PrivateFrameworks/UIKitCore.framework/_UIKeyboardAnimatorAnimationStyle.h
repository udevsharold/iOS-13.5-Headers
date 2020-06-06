/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputViewAnimationStyle.h>

@protocol UIInputViewAnimationHost;
@class _UIKeyboardAnimator;

@interface _UIKeyboardAnimatorAnimationStyle : UIInputViewAnimationStyle {

	_UIKeyboardAnimator* _animator;
	id<UIInputViewAnimationHost> _currentHost;
	BOOL _currentFromPosition;

}
+(id)animationStyleWithAnimator:(id)arg1 ;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(void)defaultLaunchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

