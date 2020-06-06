/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/ICCollapsibleBaseView.h>

@class UIImage, UIColor, UIImageView;

@interface ICCollapsibleImageView : ICCollapsibleBaseView {

	UIImage* _image;
	UIColor* _tintColor;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                  //@synthesize tintColor=_tintColor - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)performSetup;
@end

