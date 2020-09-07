/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIMenuPopoverDelegate.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class NSMutableArray, UIControl, NSMapTable, NSArray, SKUIListViewElement, SKUIMenuPopoverController, NSString;

@interface SKUIHorizontalListView : SKUIViewReuseView <SKUIMenuPopoverDelegate, SKUIViewElementView> {

	NSMutableArray* _artworkRequestPassthroughViews;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _bigHitInsets;
	double _elementSpacing;
	UIControl* _focusedMenuButton;
	NSMapTable* _imageViewToImageResourceCacheKey;
	NSArray* _lines;
	SKUIListViewElement* _listElement;
	SKUIMenuPopoverController* _popoverController;
	BOOL _useBigHitTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForButton:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2 ;
+(id)_linesWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(double)_elementSpacingForViewElement:(id)arg1 ;
+(double)_lineSpacingForLineElements:(id)arg1 ;
+(id)_attributedStringForButtonText:(id)arg1 type:(long long)arg2 style:(id)arg3 context:(id)arg4 ;
+(double)_lineSpacingForViewElement:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(CGRect)hitRect;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_imageTapAction:(id)arg1 ;
-(void)_menuButtonAction:(id)arg1 ;
-(void)_destroyMenuPopover;
-(void)menuPopoverDidCancel:(id)arg1 ;
-(void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2 ;
-(void)menuPopover:(id)arg1 willRepositionToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)_viewElementForView:(id)arg1 ;
@end
