/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@interface _SFDimmingButton : UIButton {

	double _normalImageAlpha;
	double _highlightedImageAlpha;
	double _highlightAnimationDuration;

}

@property (assign,nonatomic) double normalImageAlpha;                        //@synthesize normalImageAlpha=_normalImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightedImageAlpha;                   //@synthesize highlightedImageAlpha=_highlightedImageAlpha - In the implementation block
@property (assign,nonatomic) double highlightAnimationDuration;              //@synthesize highlightAnimationDuration=_highlightAnimationDuration - In the implementation block
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setNormalImageAlpha:(double)arg1 ;
-(void)setHighlightedImageAlpha:(double)arg1 ;
-(void)setHighlightAnimationDuration:(double)arg1 ;
-(void)_updateImageAlpha;
-(double)normalImageAlpha;
-(double)highlightedImageAlpha;
-(double)highlightAnimationDuration;
@end

