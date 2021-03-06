/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, UIImageView;

@interface NUArticleNextButton : UIButton {

	UILabel* _nextTitleLabel;
	UIImageView* _nextArrowImageView;

}

@property (nonatomic,readonly) UILabel * nextTitleLabel;                      //@synthesize nextTitleLabel=_nextTitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * nextArrowImageView;              //@synthesize nextArrowImageView=_nextArrowImageView - In the implementation block
+(id)titleLabelFont;
+(id)nextArrowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)nextArrowImageView;
-(UILabel *)nextTitleLabel;
-(void)setNextLabelTitle:(id)arg1 animated:(BOOL)arg2 ;
@end

