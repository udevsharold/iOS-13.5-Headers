/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIBlurEffect, UIColor;

@interface HULayeredBackgroundEffect : NSObject {

	UIBlurEffect* _blurEffect;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIBlurEffect * blurEffect;              //@synthesize blurEffect=_blurEffect - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
+(id)backgroundWithFillColor:(id)arg1 ;
+(id)backgroundWithBlurEffect:(id)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setBlurEffect:(UIBlurEffect *)arg1 ;
-(UIBlurEffect *)blurEffect;
@end

