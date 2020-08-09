/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class UILabel, UIImageView, UIColor, NSString, UIImage;

@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout {

	UILabel* _artistNameLabel;
	UILabel* _categoryLabel;
	UIImageView* _iconHighlightImageView;
	UILabel* _itemCountLabel;
	CGSize _maxImageSize;
	UILabel* _priceLabel;
	UIColor* _primaryTextColor;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	UIImageView* _videoHighlightImageView;
	UIImageView* _videoImageView;
	UIImageView* _videoPlayButtonImageView;
	CGSize _videoSize;
	unsigned long long _visibleFields;

}

@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSString * itemCountString; 
@property (nonatomic,copy) NSString * price; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) CGSize videoSize;                              //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,retain) UIImage * videoThumbnailImage; 
@property (assign,nonatomic) CGSize maxImageSize;                           //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (assign,nonatomic) unsigned long long visibleFields;              //@synthesize visibleFields=_visibleFields - In the implementation block
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setItemCountString:(NSString *)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)_newDefaultLabel;
-(NSString *)itemCountString;
-(void)setVisibleFields:(unsigned long long)arg1 ;
-(unsigned long long)visibleFields;
-(void)setItemOffer:(id)arg1 ;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(UIImage *)videoThumbnailImage;
-(void)setVideoThumbnailImage:(UIImage *)arg1 ;
-(void)_reloadHighlight;
-(void)setMaxImageSize:(CGSize)arg1 ;
-(void)setVideoSize:(CGSize)arg1 ;
-(CGSize)cellSizeForImageOfSize:(CGSize)arg1 ;
-(void)_layoutFieldsHorizontal;
-(void)_layoutFieldsVertical;
-(void)_reloadPriceLabel;
-(void)_removeHighlightViews;
-(CGSize)maxImageSize;
-(CGSize)videoSize;
@end
