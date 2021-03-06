/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView;

@interface VUIConfirmationDialogTemplateView : UIView {

	UIVisualEffectView* _backdropView;
	UIView* _cardView;

}

@property (nonatomic,retain) UIView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIVisualEffectView *)backdropView;
-(void)_configureSubviews;
-(UIView *)cardView;
-(void)setCardView:(UIView *)arg1 ;
@end

