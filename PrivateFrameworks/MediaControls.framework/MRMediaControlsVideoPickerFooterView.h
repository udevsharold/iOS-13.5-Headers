/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaPlayer/MPButton.h>

@class MTVisualStylingProvider, UILabel;

@interface MRMediaControlsVideoPickerFooterView : MPButton {

	MTVisualStylingProvider* _visualStylingProvider;
	UILabel* _customTitleLabel;

}

@property (nonatomic,retain) UILabel * customTitleLabel;                                   //@synthesize customTitleLabel=_customTitleLabel - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateStyle;
-(id)titleLabelText;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(UILabel *)customTitleLabel;
-(void)setCustomTitleLabel:(UILabel *)arg1 ;
@end

