/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMZoomControlUtilities : NSObject
+(void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBarAlignmentRect:(CGRect)arg3 bottomBarTransparent:(BOOL)arg4 shutterButtonAlignmentRect:(CGRect)arg5 previewViewAlignmentRect:(CGRect)arg6 ;
+(double)_zoomControlRadiusForZoomControl:(id)arg1 layoutSide:(long long)arg2 layoutStyle:(long long)arg3 width:(double)arg4 centerOfZoomControlInContainerBounds:(CGPoint)arg5 marginForZoomDiaFromEdge:(double)arg6 ;
+(void)layoutZoomControl:(id)arg1 layoutSide:(long long)arg2 forLayoutStyle:(long long)arg3 width:(double)arg4 marginForZoomButtonFromEdge:(double)arg5 marginForZoomDialFromEdge:(double)arg6 zoomDialContentMaskingHeight:(double)arg7 centerOfZoomControlInContainerView:(CGPoint)arg8 ;
+(double)piecewiseLinearMappingForX:(double)arg1 fromXValues:(id)arg2 toYValues:(id)arg3 ;
+(double)linearMappingForX:(double)arg1 x1:(double)arg2 y1:(double)arg3 x2:(double)arg4 y2:(double)arg5 clamp:(BOOL)arg6 ;
+(void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBar:(id)arg3 previewView:(id)arg4 ;
+(double)zoomControlDisplayValueForZoomFactor:(double)arg1 mode:(long long)arg2 device:(long long)arg3 videoConfiguration:(long long)arg4 ;
@end

