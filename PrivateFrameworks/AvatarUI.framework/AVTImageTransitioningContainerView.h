/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImage, AVTUIAnimatingImageView;

@interface AVTImageTransitioningContainerView : UIView {

	UIView* _liveView;
	UIImage* _staticImage;
	long long _layoutMode;
	AVTUIAnimatingImageView* _imageViewsContainer;
	UIView* _borderMaskView;
	CGSize _aspectRatio;

}

@property (nonatomic,readonly) AVTUIAnimatingImageView * imageViewsContainer;              //@synthesize imageViewsContainer=_imageViewsContainer - In the implementation block
@property (nonatomic,readonly) UIView * borderMaskView;                                    //@synthesize borderMaskView=_borderMaskView - In the implementation block
@property (nonatomic,readonly) UIView * staticView; 
@property (nonatomic,retain) UIView * liveView;                                            //@synthesize liveView=_liveView - In the implementation block
@property (nonatomic,retain) UIImage * staticImage;                                        //@synthesize staticImage=_staticImage - In the implementation block
@property (assign,nonatomic) CGSize aspectRatio;                                           //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) long long layoutMode;                                       //@synthesize layoutMode=_layoutMode - In the implementation block
+(CGRect)imageViewRectForContentRect:(CGRect)arg1 liveViewRect:(CGRect)arg2 imageSize:(CGSize)arg3 scale:(double)arg4 ;
+(CGRect)borderMaskRectForContentRect:(CGRect)arg1 ;
+(CGRect)liveViewRectForContentRect:(CGRect)arg1 aspectRatio:(CGSize)arg2 layoutMode:(long long)arg3 scale:(double)arg4 ;
-(CGSize)aspectRatio;
-(void)setAspectRatio:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)layoutMode;
-(void)setStaticImage:(UIImage *)arg1 ;
-(UIImage *)staticImage;
-(id)initWithFrame:(CGRect)arg1 layoutMode:(long long)arg2 ;
-(AVTUIAnimatingImageView *)imageViewsContainer;
-(void)setStaticImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionStaticViewToFront;
-(UIView *)liveView;
-(UIView *)staticView;
-(void)setLiveView:(UIView *)arg1 ;
-(void)transitionLiveViewToFront;
-(void)setStaticViewVisible:(BOOL)arg1 ;
-(UIView *)borderMaskView;
@end

