/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarImageView.h>

@class UIColor;

@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView {

	UIColor* _unfocusedTintColor;
	UIColor* _focusedImageTintColor;

}

@property (nonatomic,retain) UIColor * focusedImageTintColor;              //@synthesize focusedImageTintColor=_focusedImageTintColor - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)isUserInteractionEnabled;
-(void)applyStyleAttributes:(id)arg1 ;
-(UIColor *)focusedImageTintColor;
-(void)setFocusedImageTintColor:(UIColor *)arg1 ;
@end

