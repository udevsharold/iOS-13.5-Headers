/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SULockoutView : UIView {

	UIImageView* _backgroundImageView;
	UILabel* _bodyLabel;
	UIImageView* _glowImageView;
	UIImageView* _imageView;
	long long _layoutPreset;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * glowImage; 
@property (assign,nonatomic) long long layoutPreset;                 //@synthesize layoutPreset=_layoutPreset - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(id)_imageView;
-(id)_titleLabel;
-(id)_newLabel;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)_bodyLabel;
-(long long)layoutPreset;
-(void)_layoutForSlowNetwork;
-(UIImage *)glowImage;
-(void)setGlowImage:(UIImage *)arg1 ;
-(void)setLayoutPreset:(long long)arg1 ;
@end

