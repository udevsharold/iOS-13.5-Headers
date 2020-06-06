/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLVideoOverlayButton.h>

@class UIButton, _UIBackdropView, UIImageView;

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton> {

	long long _style;
	UIButton* _button;
	_UIBackdropView* _backdropView;
	UIImageView* _overlayPlayBackground;
	id _target;
	SEL _action;

}
-(void)dealloc;
-(long long)style;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
@end

