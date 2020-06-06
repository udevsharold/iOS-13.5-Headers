/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImageView;

@interface _PKCheckerGridView : UIView {

	double _gridSize;
	UIColor* _colorA;
	UIColor* _colorB;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double gridSize;                      //@synthesize gridSize=_gridSize - In the implementation block
@property (nonatomic,retain) UIColor * colorA;                     //@synthesize colorA=_colorA - In the implementation block
@property (nonatomic,retain) UIColor * colorB;                     //@synthesize colorB=_colorB - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIColor *)colorB;
-(void)setColorB:(UIColor *)arg1 ;
-(UIColor *)colorA;
-(void)setColorA:(UIColor *)arg1 ;
-(id)gridTileImage;
-(double)gridSize;
-(void)setGridSize:(double)arg1 ;
@end

