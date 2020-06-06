/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor, UIImage;


@protocol UIPreviewActionItem_Internal <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long style; 
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color; 
@property (nonatomic,retain) UIImage * image; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(long long)style;
-(void)setStyle:(long long)arg1;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(id)_color;
-(void)_setColor:(id)arg1;
-(id)_effectiveColor;
-(id)_effectiveImage;

@end

