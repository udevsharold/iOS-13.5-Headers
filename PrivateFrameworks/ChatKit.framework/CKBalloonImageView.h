/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSString;

@interface CKBalloonImageView : UIView {

	BOOL _imageHidden;
	UIImage* _image;
	NSString* _stickerAccessibilityDescription;

}

@property (nonatomic,retain) UIImage * image;                                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL imageHidden;                                        //@synthesize imageHidden=_imageHidden - In the implementation block
@property (nonatomic,retain) NSString * stickerAccessibilityDescription;              //@synthesize stickerAccessibilityDescription=_stickerAccessibilityDescription - In the implementation block
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setStickerAccessibilityDescription:(NSString *)arg1 ;
-(void)setImageHidden:(BOOL)arg1 ;
-(BOOL)imageHidden;
-(NSString *)stickerAccessibilityDescription;
@end

