/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {

	SBAppLayout* _toAppLayout;
	SBAppLayout* _fromAppLayout;

}
-(long long)wallpaperStyle;
-(id)transitionWillBegin;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(NSRange)fullSizeSnapshotsRange;
-(long long)liveContentRasterizationStyle;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsResignActiveAssertion;
-(long long)keyboardSuppressionMode;
-(BOOL)shouldRasterizeLiveContentUntilDelay:(inout double*)arg1 ;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 ;
@end

