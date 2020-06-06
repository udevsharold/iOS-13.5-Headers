/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UIImage;

@interface HUNamedWallpaperCell : UICollectionViewCell {

	long long _contentMode;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) UIImage * image; 
@property (assign,nonatomic) long long contentMode;                //@synthesize contentMode=_contentMode - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(long long)contentMode;
@end

