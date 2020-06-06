/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface _UIPopoverViewArtworkLoader : NSObject {

	long long _backgroundStyle;
	NSString* _backgroundSelector;

}
+(id)backgroundSelectorForBackgroundStyle:(long long)arg1 ;
-(double)arrowHeight;
-(double)arrowBase;
-(id)initWithBackgroundStyle:(long long)arg1 ;
-(id)topArrowLeftEndCapView;
-(id)topArrowPinnedView;
-(id)topArrowView;
-(id)topArrowRightEndCapView;
-(id)bottomArrowLeftEndCapView;
-(id)bottomArrowPinnedView;
-(id)bottomArrowView;
-(id)bottomArrowRightEndCapView;
-(id)shortRightArrowView;
-(id)rightArrowPinnedTopView;
-(id)rightArrowBottomEndCapView;
-(id)rightArrowPinnedBottomView;
-(id)rightArrowTopEndCapView;
-(id)rightArrowView;
-(id)templateImageForDirection:(id)arg1 shortArtwork:(BOOL)arg2 traitCollection:(id)arg3 ;
-(id)_templateImageForDirection:(id)arg1 shortArtwork:(BOOL)arg2 traitCollection:(id)arg3 rimShadow:(BOOL)arg4 ;
-(BOOL)modern;
-(id)_topArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(double)topArrowStart;
-(CGRect)contentRectForRect:(CGRect)arg1 inImageOfSize:(CGSize)arg2 ;
-(double)arrowTopGradientEnd;
-(double)capCornerRadius;
-(CGRect)contentsCenterForRect:(CGRect)arg1 inImageOfSize:(CGSize)arg2 ;
-(id)viewWithContentsImage:(id)arg1 rect:(CGRect)arg2 center:(CGRect)arg3 antialiasingMask:(unsigned)arg4 directionSelector:(id)arg5 ;
-(id)_topArrowPinnedViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(double)clampArrowBase;
-(id)_topArrowLeftEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_topArrowRightEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_rightArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(double)sideArrowStart;
-(id)_rightArrowPinnedTopViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_rightArrowPinnedBottomViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_rightArrowTopEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(double)noArrowTopGradientEnd;
-(id)_rightArrowBottomEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(double)bottomEndCapHeight;
-(id)_bottomArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_bottomArrowPinnedViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_bottomArrowLeftEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_bottomArrowRightEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_shortTopArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(double)shortArtArrowTopGradientEnd;
-(id)_shortTopArrowPinnedViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_shortTopArrowLeftEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_shortTopArrowRightEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_shortRightArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(double)shortArtRightArrowBase;
-(id)_shortBottomArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(double)shortArtNoArrowTopGradientEnd;
-(id)_shortBottomArrowPinnedViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_shortBottomArrowLeftEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)_shortBottomArrowRightEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2 ;
-(id)shortTopArrowView;
-(id)shortTopArrowPinnedView;
-(id)shortTopArrowLeftEndCapView;
-(id)shortTopArrowRightEndCapView;
-(id)shortBottomArrowView;
-(id)shortBottomArrowPinnedView;
-(id)shortBottomArrowLeftEndCapView;
-(id)shortBottomArrowRightEndCapView;
@end

