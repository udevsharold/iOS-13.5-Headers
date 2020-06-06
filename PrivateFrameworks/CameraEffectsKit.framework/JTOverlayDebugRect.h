/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class UIColor;

@interface JTOverlayDebugRect : NSObject {

	BOOL _ignoreTransform;
	double _borderWidth;
	UIColor* _borderColor;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL ignoreTransform;               //@synthesize ignoreTransform=_ignoreTransform - In the implementation block
-(CGRect)frame;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(void)setIgnoreTransform:(BOOL)arg1 ;
-(BOOL)ignoreTransform;
@end

