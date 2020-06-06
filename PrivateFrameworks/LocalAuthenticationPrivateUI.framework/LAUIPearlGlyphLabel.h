/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class UIView, CABackdropLayer, UILabel, LAUIPearlGlyphView, UIColor, UIFont, NSObject, NSString;

@interface LAUIPearlGlyphLabel : UIView {

	UIView* _container;
	CABackdropLayer* _background;
	UIView* _labelContainer;
	UILabel* _label;
	UIView* _glyphContainer;
	LAUIPearlGlyphView* _glyph;
	map<CALayer *__unsafe_unretained, CALayer *, std::__1::less<CALayer *__unsafe_unretained>, std::__1::allocator<std::__1::pair<CALayer *const __unsafe_unretained, CALayer *> > >* _masks;
	vector<UIView *, std::__1::allocator<UIView *> >* _labelSnapshots;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	UIFont* _baseFont;
	CGSize _currentLabelSize;
	CGSize _currentMaximumSize;
	NSObject*<OS_dispatch_source> _visibilityTimer;
	BOOL _inWindow;
	BOOL _textNeedsUpdate;
	BOOL _textUpdateNeedsAnimation;
	BOOL _visible;
	BOOL _visibleNeedsUpdate;
	BOOL _allowDelayedVisibility;
	BOOL _animated;
	BOOL _reduceBlur;
	BOOL _shimmerEnabled;
	long long _style;
	NSString* _text;
	CGSize _maximumSize;

}

@property (assign,nonatomic) BOOL inApplicationContext; 
@property (nonatomic,readonly) long long style;                                          //@synthesize style=_style - In the implementation block
@property (getter=isShimmerEnabled,nonatomic,readonly) BOOL shimmerEnabled;              //@synthesize shimmerEnabled=_shimmerEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) CGSize maximumSize;                                       //@synthesize maximumSize=_maximumSize - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(long long)style;
-(NSString *)text;
-(CGSize)maximumSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)didMoveToWindow;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateText;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)_applyStyle;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)setInApplicationContext:(BOOL)arg1 ;
-(void)_updateVisibilityAnimated:(BOOL)arg1 ;
-(void)reduceTransparencyDidChange:(id)arg1 ;
-(void)reduceMotionDidChange:(id)arg1 ;
-(void)boldTextStatusDidChange:(id)arg1 ;
-(void)_updateFontAnimated:(BOOL)arg1 ;
-(void)_applyVisibilityAnimated:(BOOL)arg1 ;
-(BOOL)inApplicationContext;
-(void)_updateGlyphPaused;
-(void)_updateBoundsSizeAnimated:(BOOL)arg1 ;
-(void)_updateReduceBlurState;
-(void)setShimmerEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setText:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMaximumSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShimmerEnabled;
@end

