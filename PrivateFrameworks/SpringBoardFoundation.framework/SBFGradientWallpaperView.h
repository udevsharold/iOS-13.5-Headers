/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFGradient;

@interface SBFGradientWallpaperView : SBFWallpaperView {

	SBFGradient* _wallpaperGradient;

}

@property (nonatomic,copy,readonly) SBFGradient * wallpaperGradient;              //@synthesize wallpaperGradient=_wallpaperGradient - In the implementation block
+(Class)layerClass;
-(long long)wallpaperType;
-(SBFGradient *)wallpaperGradient;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2 ;
-(id)_computeAverageColor;
-(id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2 ;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 ;
@end

