/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKColorPickerDelegatePrivate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/_PKAllowDrawingWhilePresentingPopoverViewDelegate.h>

@protocol PKInlineColorPickerDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, PKInlineColorPickerContentsHiddenDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate;
@class NSArray, UIScrollView, UIView, PKColorPicker, UIColor, NSString;

@interface PKInlineColorPicker : UIView <UIScrollViewDelegate, PKColorPickerDelegatePrivate, UIPopoverPresentationControllerDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate> {

	BOOL _isUsedOnDarkBackground;
	BOOL _shouldEmboss;
	BOOL _didSelectColorUsingSpringLoadedSelection;
	unsigned long long _sizeState;
	unsigned long long _selectionState;
	id<PKInlineColorPickerDelegate> _delegate;
	unsigned long long _colorSet;
	NSArray* _colors;
	unsigned long long _selectedColorIndex;
	double _selectedColorAlpha;
	NSArray* _buttonItems;
	UIScrollView* _scrollView;
	UIView* _leftOverflowView;
	UIView* _rightOverflowView;
	PKColorPicker* _presentedColorPicker;
	UIColor* __pickerColor;
	UIColor* _selectedColorBeforeSpringLoadedSelection;
	UIColor* _aggd_initialColorOnPopoverOpen;
	long long _aggd_colorsChangedCount;
	id<_PKInlineColorPickerAllowDrawingWithPopoverDelegate> __allowDrawingWithPopoverDelegate;
	id<PKInlineColorPickerContentsHiddenDelegate> __contentsHiddenDelegate;
	id<PKInlineColorPickerSerialViewControllerTransitionDelegate> _serialViewControllerTransitionDelegate;

}

@property (assign,nonatomic) unsigned long long selectedColorIndex;                                                                                    //@synthesize selectedColorIndex=_selectedColorIndex - In the implementation block
@property (assign,nonatomic) double selectedColorAlpha;                                                                                                //@synthesize selectedColorAlpha=_selectedColorAlpha - In the implementation block
@property (nonatomic,retain) NSArray * buttonItems;                                                                                                    //@synthesize buttonItems=_buttonItems - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * leftOverflowView;                                                                                                //@synthesize leftOverflowView=_leftOverflowView - In the implementation block
@property (nonatomic,retain) UIView * rightOverflowView;                                                                                               //@synthesize rightOverflowView=_rightOverflowView - In the implementation block
@property (assign,nonatomic) BOOL shouldEmboss;                                                                                                        //@synthesize shouldEmboss=_shouldEmboss - In the implementation block
@property (nonatomic,retain) PKColorPicker * presentedColorPicker;                                                                                     //@synthesize presentedColorPicker=_presentedColorPicker - In the implementation block
@property (nonatomic,retain) UIColor * _pickerColor;                                                                                                   //@synthesize _pickerColor=__pickerColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedColorBeforeSpringLoadedSelection;                                                                       //@synthesize selectedColorBeforeSpringLoadedSelection=_selectedColorBeforeSpringLoadedSelection - In the implementation block
@property (assign,nonatomic) BOOL didSelectColorUsingSpringLoadedSelection;                                                                            //@synthesize didSelectColorUsingSpringLoadedSelection=_didSelectColorUsingSpringLoadedSelection - In the implementation block
@property (nonatomic,retain) UIColor * aggd_initialColorOnPopoverOpen;                                                                                 //@synthesize aggd_initialColorOnPopoverOpen=_aggd_initialColorOnPopoverOpen - In the implementation block
@property (assign,nonatomic) long long aggd_colorsChangedCount;                                                                                        //@synthesize aggd_colorsChangedCount=_aggd_colorsChangedCount - In the implementation block
@property (assign,nonatomic,__weak) id<_PKInlineColorPickerAllowDrawingWithPopoverDelegate> _allowDrawingWithPopoverDelegate;                          //@synthesize _allowDrawingWithPopoverDelegate=__allowDrawingWithPopoverDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKInlineColorPickerContentsHiddenDelegate> _contentsHiddenDelegate;                                             //@synthesize _contentsHiddenDelegate=__contentsHiddenDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKInlineColorPickerSerialViewControllerTransitionDelegate> serialViewControllerTransitionDelegate;              //@synthesize serialViewControllerTransitionDelegate=_serialViewControllerTransitionDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long sizeState;                                                                                             //@synthesize sizeState=_sizeState - In the implementation block
@property (assign,nonatomic) unsigned long long selectionState;                                                                                        //@synthesize selectionState=_selectionState - In the implementation block
@property (assign,nonatomic,__weak) id<PKInlineColorPickerDelegate> delegate;                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long colorSet;                                                                                              //@synthesize colorSet=_colorSet - In the implementation block
@property (nonatomic,retain) NSArray * colors;                                                                                                         //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
@property (assign,nonatomic) BOOL isUsedOnDarkBackground;                                                                                              //@synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKInlineColorPickerDelegate>)delegate;
-(void)setDelegate:(id<PKInlineColorPickerDelegate>)arg1 ;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setColors:(NSArray *)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(unsigned long long)selectionState;
-(void)setSelectionState:(unsigned long long)arg1 ;
-(NSArray *)colors;
-(NSArray *)buttonItems;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(BOOL)isUsedOnDarkBackground;
-(void)setIsUsedOnDarkBackground:(BOOL)arg1 ;
-(void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg1 ;
-(void)colorPickerDidChangeSelectedColor:(id)arg1 ;
-(id)_representableColorForColor:(id)arg1 ;
-(void)_colorPickerUserDidTouchUpInside:(id)arg1 ;
-(unsigned long long)sizeState;
-(void)setSizeState:(unsigned long long)arg1 ;
-(void)setLeftOverflowView:(UIView *)arg1 ;
-(UIView *)leftOverflowView;
-(void)setRightOverflowView:(UIView *)arg1 ;
-(UIView *)rightOverflowView;
-(void)_forceSetColorSet:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3 ;
-(long long)defaultColorIndex;
-(id)colorForIndex:(long long)arg1 ;
-(unsigned long long)selectedColorIndex;
-(double)selectedColorAlpha;
-(void)showOverflowViewsIfNeeded;
-(id<_PKInlineColorPickerAllowDrawingWithPopoverDelegate>)_allowDrawingWithPopoverDelegate;
-(long long)colorPickerButtonIndex;
-(UIColor *)_pickerColor;
-(void)setSelectedColorIndex:(unsigned long long)arg1 ;
-(unsigned long long)colorIndexMatchingColor:(id)arg1 ;
-(void)set_pickerColor:(UIColor *)arg1 ;
-(void)setSelectedColorAlpha:(double)arg1 ;
-(unsigned long long)colorSet;
-(id)colorsForColorSet:(unsigned long long)arg1 ;
-(BOOL)shouldEmboss;
-(id)createColorPickerButtonShouldEmboss:(BOOL)arg1 ;
-(id)createColorButtonItemWithColor:(id)arg1 shouldEmboss:(BOOL)arg2 ;
-(void)setButtonItems:(NSArray *)arg1 ;
-(id<PKInlineColorPickerContentsHiddenDelegate>)_contentsHiddenDelegate;
-(id)_effectiveViewControllerForPopoverPresentation;
-(BOOL)_isInkPickerContentsHidden;
-(id)_effectiveBarButtonItemForPopoverPresentation;
-(CGRect)_effectiveRectForPopoverPresentation;
-(id<PKInlineColorPickerSerialViewControllerTransitionDelegate>)serialViewControllerTransitionDelegate;
-(void)setPresentedColorPicker:(PKColorPicker *)arg1 ;
-(void)setAggd_colorsChangedCount:(long long)arg1 ;
-(void)setAggd_initialColorOnPopoverOpen:(UIColor *)arg1 ;
-(PKColorPicker *)presentedColorPicker;
-(UIColor *)aggd_initialColorOnPopoverOpen;
-(long long)aggd_colorsChangedCount;
-(void)_colorPickerWillDismiss:(id)arg1 ;
-(void)_dismissColorPickerPopover:(BOOL)arg1 ;
-(void)_presentColorPickerPopover:(BOOL)arg1 ;
-(void)notifyDelegateDidSelectColorInCompactChooseToolState;
-(void)notifyDelegateDidSelectColor:(BOOL)arg1 ;
-(void)_selectColorWithButton:(id)arg1 ;
-(void)setDidSelectColorUsingSpringLoadedSelection:(BOOL)arg1 ;
-(void)setSelectedColorBeforeSpringLoadedSelection:(UIColor *)arg1 ;
-(BOOL)didSelectColorUsingSpringLoadedSelection;
-(UIColor *)selectedColorBeforeSpringLoadedSelection;
-(void)_axHandleLongPressOnColorButtonForLargeTextHUD:(id)arg1 ;
-(void)colorButtonTapHandler:(id)arg1 ;
-(void)springLoadingGestureHandler:(id)arg1 ;
-(id)_axLabelForColorButton:(id)arg1 ;
-(id)initWithEmbossing:(BOOL)arg1 ;
-(void)setColorSet:(unsigned long long)arg1 ;
-(void)_toggleColorPickerPopoverPresentation:(BOOL)arg1 ;
-(void)setShouldEmboss:(BOOL)arg1 ;
-(void)set_allowDrawingWithPopoverDelegate:(id<_PKInlineColorPickerAllowDrawingWithPopoverDelegate>)arg1 ;
-(void)set_contentsHiddenDelegate:(id<PKInlineColorPickerContentsHiddenDelegate>)arg1 ;
-(void)setSerialViewControllerTransitionDelegate:(id<PKInlineColorPickerSerialViewControllerTransitionDelegate>)arg1 ;
@end

