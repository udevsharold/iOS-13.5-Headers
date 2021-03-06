/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface OBContentView : UIView {

	BOOL _aboveHeaderLayout;
	BOOL _customizedBackgroundColor;
	UIView* _bleedView;
	UIColor* _lightColor;
	UIColor* _darkColor;

}

@property (nonatomic,retain) UIColor * lightColor;                        //@synthesize lightColor=_lightColor - In the implementation block
@property (nonatomic,retain) UIColor * darkColor;                         //@synthesize darkColor=_darkColor - In the implementation block
@property (assign,nonatomic) BOOL aboveHeaderLayout;                      //@synthesize aboveHeaderLayout=_aboveHeaderLayout - In the implementation block
@property (assign,nonatomic) BOOL customizedBackgroundColor;              //@synthesize customizedBackgroundColor=_customizedBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) UIView * bleedView;                   //@synthesize bleedView=_bleedView - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)bleedView;
-(id)_defaultColorForCurrentTraitCollection;
-(id)initWithFrame:(CGRect)arg1 aboveHeaderLayout:(BOOL)arg2 ;
-(void)setCustomizedBackgroundColor:(BOOL)arg1 ;
-(BOOL)customizedBackgroundColor;
-(BOOL)aboveHeaderLayout;
-(UIColor *)darkColor;
-(UIColor *)lightColor;
-(void)setBleedView:(UIView *)arg1 ;
-(BOOL)_colorIsDefault:(id)arg1 ;
-(void)setLightColor:(UIColor *)arg1 ;
-(void)setDarkColor:(UIColor *)arg1 ;
-(void)setAboveHeaderLayout:(BOOL)arg1 ;
@end

