/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@class UIView, TVMonogramViewConfiguration, _TVMonogramDescription, UIImage, _TVImageView, TVImageProxy, NSString;

@interface _TVMonogramView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting> {

	UIView* _placeholderView;
	UIView* _unfocusedShadowView;
	UIView* _focusedShadowView;
	BOOL _isSelected;
	TVMonogramViewConfiguration* _configuration;
	_TVMonogramDescription* _monogramDescription;
	UIImage* _image;
	UIImage* _placeholderImage;
	double _unfocusedImageAlpha;
	UIView* _overlayView;
	/*^block*/id _pressCompletionBlock;
	_TVImageView* _imageView;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,copy) id pressCompletionBlock;                                      //@synthesize pressCompletionBlock=_pressCompletionBlock - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                  //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,readonly) TVMonogramViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) _TVMonogramDescription * monogramDescription;               //@synthesize monogramDescription=_monogramDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                 //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double unfocusedImageAlpha;                                 //@synthesize unfocusedImageAlpha=_unfocusedImageAlpha - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                       //@synthesize overlayView=_overlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(TVMonogramViewConfiguration *)configuration;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIView *)overlayView;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setPressCompletionBlock:(id)arg1 ;
-(id)pressCompletionBlock;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(double)unfocusedImageAlpha;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)_updatePlaceholerView;
-(void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2 ;
-(void)_updateUnfocusedShadowFrameAndLayerWithFrame:(CGRect)arg1 ;
-(void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1 ;
-(void)setMonogramDescription:(_TVMonogramDescription *)arg1 ;
-(void)_updateFocusedShadowFrameAndLayerWithFrame:(CGRect)arg1 ;
-(_TVMonogramDescription *)monogramDescription;
-(void)setUnfocusedImageAlpha:(double)arg1 ;
@end

