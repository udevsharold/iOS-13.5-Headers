/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SKUIFloatingOverlayView : UIView {

	UIEdgeInsets _contentInset;
	UIView* _contentView;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) UIView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
@end

