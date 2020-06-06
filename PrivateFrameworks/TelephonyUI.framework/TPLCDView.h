/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPLCDBar.h>

@class UIView, TPLCDTextView, TPLCDSubImageView;

@interface TPLCDView : TPLCDBar {

	UIView* _contentView;
	TPLCDTextView* _textView;
	TPLCDTextView* _labelView;
	TPLCDSubImageView* _imageView;
	unsigned _layoutAsLabelled : 1;
	BOOL _verticallyCenterTextViewIfLabelless;

}

@property (assign) BOOL verticallyCenterTextViewIfLabelless;              //@synthesize verticallyCenterTextViewIfLabelless=_verticallyCenterTextViewIfLabelless - In the implementation block
+(double)defaultTextFontSize;
+(double)defaultLabelFontSize;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGRect)_labelFrame;
-(CGRect)textFrame;
-(CGRect)fullSizedContentViewFrame;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(id)subImage;
-(void)_resetContentViewFrame;
-(double)_textVInset;
-(double)_labelVInset;
-(BOOL)shouldCenterContentView;
-(BOOL)verticallyCenterTextViewIfLabelless;
-(CGRect)_text1Frame;
-(BOOL)shouldCenterText;
-(CGRect)_imageViewFrame;
-(void)setLabel:(id)arg1 animate:(BOOL)arg2 ;
-(void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setContentsAlpha:(double)arg1 ;
-(void)setTextFontSize:(double)arg1 ;
-(void)setLabelFontSize:(double)arg1 ;
-(void)blinkLabel;
-(void)setSubImage:(id)arg1 ;
-(void)setLayoutAsLabelled:(BOOL)arg1 ;
-(void)setSecondLineText:(id)arg1 ;
-(id)secondLineText;
-(void)setVerticallyCenterTextViewIfLabelless:(BOOL)arg1 ;
@end

