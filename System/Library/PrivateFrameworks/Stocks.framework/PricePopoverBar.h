/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImage, UIImageView, UIColor;

@interface PricePopoverBar : UIView {

	UILabel* _priceLabel;
	UILabel* _percentChangeLabel;
	UIImage* _backgroundImage;
	UIImageView* _priceChangeSignView;
	UIImageView* _percentChangeSignView;
	UIColor* _imageMaskColor;

}

@property (nonatomic,retain) UIColor * imageMaskColor;              //@synthesize imageMaskColor=_imageMaskColor - In the implementation block
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)imageMaskColor;
-(void)setPriceString:(id)arg1 ;
-(id)initWithBackgroundImage:(id)arg1 ;
-(void)setPercentChange:(id)arg1 ;
-(void)setImageMaskColor:(UIColor *)arg1 ;
-(void)setChangeImage:(id)arg1 ;
@end

