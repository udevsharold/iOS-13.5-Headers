/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIColor;

@interface SKUIProductPagePlaceholderView : UIView {

	UIImageView* _imageView;
	UILabel* _label;
	UIColor* _textColor;

}

@property (nonatomic,retain) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIColor *)textColor;
-(id)initWithPlaceholderString:(id)arg1 isPad:(BOOL)arg2 ;
@end

