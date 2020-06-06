/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIActivityIndicatorView, UILabel, UIImageView;

@interface PLProgressHUD : UIView {

	_UIBackdropView* _backdropView;
	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _label;
	UIImageView* _checkmarkView;
	BOOL _isShowing;

}
-(void)dealloc;
-(void)setText:(id)arg1 ;
-(void)done;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)showInView:(id)arg1 ;
-(void)hide;
@end

