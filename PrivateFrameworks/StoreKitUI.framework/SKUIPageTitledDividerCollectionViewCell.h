/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class SKUIButtonViewElement, UIButton, NSNumber, UILabel, UIView, NSString;

@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView> {

	double _buttonContentHorizontalPadding;
	SKUIButtonViewElement* _buttonViewElement;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _contentInset;
	UIButton* _dividerButton;
	NSNumber* _dividerButtonImageRequestIdentifier;
	UILabel* _dividerLabel;
	UIEdgeInsets _imageVerticalPadding;
	UIEdgeInsets _internalHorizontalMargins;
	UIView* _leftLine;
	UIView* _rightLine;
	UIEdgeInsets _titleVerticalPadding;
	double _topEdgeInset;

}

@property (assign,nonatomic) double topEdgeInset;                   //@synthesize topEdgeInset=_topEdgeInset - In the implementation block
@property (nonatomic,copy) NSString * dividerTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2 ;
+(UIEdgeInsets)_imageVerticalPaddingForViewElement:(id)arg1 ;
+(id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3 ;
+(UIEdgeInsets)_titleVerticalPaddingForViewElement:(id)arg1 ;
+(UIEdgeInsets)_contentEdgeInsetsForViewElement:(id)arg1 ;
+(double)viewElementInsetDividerHeight:(id)arg1 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 dividerTitle:(id)arg2 context:(id)arg3 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id*)arg2 context:(id)arg3 ;
-(NSString *)dividerTitle;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)setDividerTitle:(NSString *)arg1 ;
-(void)setTopEdgeInset:(double)arg1 ;
-(double)topEdgeInset;
@end

