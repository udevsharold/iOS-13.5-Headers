/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITableViewCell, UIImageView;

@interface UITableViewCellEditControl : UIControl {

	UITableViewCell* _cell;
	UIImageView* _imageView;
	UIImageView* _shadowView;
	double _focalY;
	double _focalHeight;
	unsigned _style : 2;
	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _reserved : 27;

}

@property (assign,getter=isRotated,nonatomic) BOOL rotated; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
@property (nonatomic,readonly) BOOL wantsImageShadow; 
-(CGSize)defaultSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_updateImageView;
-(void)setSelected:(BOOL)arg1 ;
-(id)_shadowImage;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)isRotating;
-(id)_currentImage;
-(id)_renderedImage;
-(void)setRotated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)adjustLayoutForFocalRect:(CGRect)arg1 ;
-(void)setRotated:(BOOL)arg1 ;
-(BOOL)isRotated;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(void)_multiselectColorChanged;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)_toggleRotate;
-(id)_deleteImage;
-(id)_insertImage;
-(id)_multiSelectNotSelectedImage;
-(id)_multiSelectSelectedImage;
-(void)_createImageViewIfNeccessary;
-(BOOL)wantsImageShadow;
-(void)_toggleRotateAnimationDidStop;
@end

