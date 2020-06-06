/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface HUCheckmarkAccessoryView : UIView {

	BOOL _checked;
	BOOL _disabled;
	UIImageView* _checkmarkImageView;

}

@property (nonatomic,retain) UIImageView * checkmarkImageView;              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (assign,nonatomic) BOOL checked;                                  //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                 //@synthesize disabled=_disabled - In the implementation block
+(double)borderWidth;
+(id)grayBorderColor;
-(BOOL)disabled;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setDisabled:(BOOL)arg1 ;
-(void)_updateColors;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
@end

