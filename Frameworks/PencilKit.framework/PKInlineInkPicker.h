/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/PKInlineColorPickerDelegate.h>
#import <libobjc.A.dylib/PKInlineColorPickerSerialViewControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PKInkAttributesPickerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKInlineColorPickerContentsHiddenDelegate.h>
#import <libobjc.A.dylib/_PKInlineColorPickerAllowDrawingWithPopoverDelegate.h>
#import <libobjc.A.dylib/_PKAllowDrawingWhilePresentingPopoverViewDelegate.h>
#import <UIKit/UIPencilInteractionDelegate.h>
#import <libobjc.A.dylib/_PKToolIndicatorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, PKInlineInkPickerDelegate;
@class NSArray, PKInlineColorPicker, UIView, NSMutableDictionary, _PKAllowDrawingWhilePresentingPopoverView, PKInkAttributesPicker, PKInk, NSObject, UIPencilInteraction, _PKToolIndicator, UILayoutGuide, UIColor, NSString;

@interface PKInlineInkPicker : UIControl <PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate, PKInkAttributesPickerDelegate, UIPopoverPresentationControllerDelegate, PKInlineColorPickerContentsHiddenDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate, UIPencilInteractionDelegate, _PKToolIndicatorDelegate> {

	BOOL _shouldAnimateRuler;
	BOOL _shouldEmboss;
	BOOL _forceCompactLayout;
	BOOL _isUsedOnDarkBackground;
	BOOL _contentsHidden;
	BOOL _rulerEnabled;
	BOOL _pencilGestureSupportEnabled;
	NSArray* _inkIdentifiers;
	unsigned long long _selectedInkIndex;
	unsigned long long _previousDrawingToolIndex;
	unsigned long long _previousToolIndex;
	NSArray* _toolButtonItems;
	PKInlineColorPicker* _colorPicker;
	UIView* _backgroundView;
	UIView* _separatorView;
	UIView* _clippingView;
	NSMutableDictionary* __inkForIdentifierDict;
	_PKAllowDrawingWhilePresentingPopoverView* __allowDrawingWhilePresentingPopoverView;
	PKInkAttributesPicker* _presentedInkAttributesPicker;
	PKInk* _aggd_initialInkOnPopoverOpen;
	NSObject*<OS_dispatch_queue> _serialViewControllerTransitionQueue;
	NSObject*<OS_dispatch_semaphore> _serialViewControllerTransitionSemaphore;
	UIPencilInteraction* _pencilInteraction;
	_PKToolIndicator* _contentsHiddenToolIndicator;
	id<PKInlineInkPickerDelegate> _delegate;
	unsigned long long _sizeState;
	unsigned long long _selectionState;
	UILayoutGuide* _backgroundViewLayoutGuide;
	NSArray* _allowedTools;
	unsigned long long _attributeSet;

}

@property (nonatomic,retain) NSArray * inkIdentifiers;                                                                         //@synthesize inkIdentifiers=_inkIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedInkIndex;                                                            //@synthesize selectedInkIndex=_selectedInkIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long previousDrawingToolIndex;                                                    //@synthesize previousDrawingToolIndex=_previousDrawingToolIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long previousToolIndex;                                                           //@synthesize previousToolIndex=_previousToolIndex - In the implementation block
@property (nonatomic,retain) NSArray * toolButtonItems;                                                                        //@synthesize toolButtonItems=_toolButtonItems - In the implementation block
@property (nonatomic,retain) PKInlineColorPicker * colorPicker;                                                                //@synthesize colorPicker=_colorPicker - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                                                           //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                                                                            //@synthesize clippingView=_clippingView - In the implementation block
@property (assign,nonatomic) BOOL shouldEmboss;                                                                                //@synthesize shouldEmboss=_shouldEmboss - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _inkForIdentifierDict;                                                      //@synthesize _inkForIdentifierDict=__inkForIdentifierDict - In the implementation block
@property (nonatomic,retain) _PKAllowDrawingWhilePresentingPopoverView * _allowDrawingWhilePresentingPopoverView;              //@synthesize _allowDrawingWhilePresentingPopoverView=__allowDrawingWhilePresentingPopoverView - In the implementation block
@property (nonatomic,retain) PKInkAttributesPicker * presentedInkAttributesPicker;                                             //@synthesize presentedInkAttributesPicker=_presentedInkAttributesPicker - In the implementation block
@property (nonatomic,retain) PKInk * aggd_initialInkOnPopoverOpen;                                                             //@synthesize aggd_initialInkOnPopoverOpen=_aggd_initialInkOnPopoverOpen - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialViewControllerTransitionQueue;                                 //@synthesize serialViewControllerTransitionQueue=_serialViewControllerTransitionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> serialViewControllerTransitionSemaphore;                         //@synthesize serialViewControllerTransitionSemaphore=_serialViewControllerTransitionSemaphore - In the implementation block
@property (nonatomic,retain) UIPencilInteraction * pencilInteraction;                                                          //@synthesize pencilInteraction=_pencilInteraction - In the implementation block
@property (nonatomic,retain) _PKToolIndicator * contentsHiddenToolIndicator;                                                   //@synthesize contentsHiddenToolIndicator=_contentsHiddenToolIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<PKInlineInkPickerDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long sizeState;                                                                     //@synthesize sizeState=_sizeState - In the implementation block
@property (assign,nonatomic) unsigned long long selectionState;                                                                //@synthesize selectionState=_selectionState - In the implementation block
@property (assign,nonatomic) BOOL forceCompactLayout;                                                                          //@synthesize forceCompactLayout=_forceCompactLayout - In the implementation block
@property (nonatomic,copy) UIColor * selectedColor; 
@property (nonatomic,copy) NSString * selectedInkIdentifier; 
@property (nonatomic,readonly) UILayoutGuide * backgroundViewLayoutGuide;                                                      //@synthesize backgroundViewLayoutGuide=_backgroundViewLayoutGuide - In the implementation block
@property (assign,nonatomic) BOOL isUsedOnDarkBackground;                                                                      //@synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground - In the implementation block
@property (assign,nonatomic) unsigned long long colorSet; 
@property (assign,nonatomic) BOOL contentsHidden;                                                                              //@synthesize contentsHidden=_contentsHidden - In the implementation block
@property (nonatomic,readonly) CGRect _extentRect; 
@property (assign,nonatomic) BOOL rulerEnabled;                                                                                //@synthesize rulerEnabled=_rulerEnabled - In the implementation block
@property (nonatomic,retain) NSArray * allowedTools;                                                                           //@synthesize allowedTools=_allowedTools - In the implementation block
@property (assign,nonatomic) BOOL pencilGestureSupportEnabled;                                                                 //@synthesize pencilGestureSupportEnabled=_pencilGestureSupportEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long attributeSet;                                                                  //@synthesize attributeSet=_attributeSet - In the implementation block
@property (nonatomic,copy) PKInk * selectedInk; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageNamed:(id)arg1 ;
+(id)defaultInkForAttributeSet:(unsigned long long)arg1 ;
+(BOOL)_axLargerTextSizesEnabled;
+(BOOL)inkIdentifierHasMutableAttributes:(id)arg1 ;
+(double)spacingForToolIndex:(unsigned long long)arg1 sizeState:(unsigned long long)arg2 ;
+(id)_defaultInkForIdentifier:(id)arg1 attributeSet:(unsigned long long)arg2 ;
+(id)_defaultCriticallyDampedSpringAnimator;
+(id)sharedImageNameCache;
+(double)_outputForResistanceFunction:(double)arg1 factor:(double)arg2 ;
+(id)_sharedPencilUserDefaults;
-(id<PKInlineInkPickerDelegate>)delegate;
-(void)setDelegate:(id<PKInlineInkPickerDelegate>)arg1 ;
-(unsigned long long)attributeSet;
-(void)_commonInit;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)separatorView;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(unsigned long long)selectionState;
-(void)setSelectionState:(unsigned long long)arg1 ;
-(void)pencilInteractionDidTap:(id)arg1 ;
-(BOOL)contentsHidden;
-(void)setContentsHidden:(BOOL)arg1 ;
-(void)setAttributeSet:(unsigned long long)arg1 ;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(void)setContentsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)toggleRuler;
-(BOOL)isUsedOnDarkBackground;
-(void)setIsUsedOnDarkBackground:(BOOL)arg1 ;
-(BOOL)rulerEnabled;
-(void)setRulerEnabled:(BOOL)arg1 ;
-(void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg1 ;
-(PKInk *)selectedInk;
-(void)inkAttributesPickerDidChangeSelectedInk:(id)arg1 ;
-(UIPencilInteraction *)pencilInteraction;
-(unsigned long long)sizeState;
-(void)setSizeState:(unsigned long long)arg1 ;
-(void)setSelectedInk:(PKInk *)arg1 ;
-(void)setSelectedInk:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3 ;
-(void)_inlineColorPickerUpdateFrameForAllowDrawingPassthroughView:(id)arg1 ;
-(unsigned long long)colorSet;
-(BOOL)shouldEmboss;
-(BOOL)_colorPickerIsInkPickerContentsHidden:(id)arg1 ;
-(id)_colorPickerBarButtonItemForContentsHiddenColorPickerPresentation:(id)arg1 ;
-(CGRect)_colorPickerRectForContentsHiddenColorPickerPresentation:(id)arg1 ;
-(id)viewControllerForPopoverPresentationFromColorPicker:(id)arg1 ;
-(id)_effectiveViewControllerForPopoverPresentation;
-(void)_inlineColorPickerSetupAllowDrawingPassthroughViewIfNeeded:(id)arg1 ;
-(id)_inlineColorPickerAllowDrawingPassthroughView:(id)arg1 ;
-(id)_queueForSerialViewControllerTransitionFromColorPicker:(id)arg1 ;
-(void)_inlineColorPickerTeardownAllowDrawingPassthroughView:(id)arg1 ;
-(void)colorPickerDidSelectColor:(id)arg1 colorChanged:(BOOL)arg2 ;
-(void)colorPickerColorTappedInCompactChooseToolState:(id)arg1 ;
-(id)_semaphoreForSerialViewControllerTransitionFromColorPicker:(id)arg1 ;
-(id)initWithEmbossing:(BOOL)arg1 ;
-(void)setColorSet:(unsigned long long)arg1 ;
-(void)setShouldEmboss:(BOOL)arg1 ;
-(void)toolIndicator:(id)arg1 willPresent:(BOOL)arg2 animated:(BOOL)arg3 ;
-(CGRect)toolIndicatorCenteringRect:(id)arg1 ;
-(void)_forceSetAttributeSet:(unsigned long long)arg1 ;
-(void)_loadToolbarItems;
-(PKInlineColorPicker *)colorPicker;
-(NSArray *)toolButtonItems;
-(_PKToolIndicator *)contentsHiddenToolIndicator;
-(void)setSelectedInkIdentifier:(NSString *)arg1 ;
-(UILayoutGuide *)backgroundViewLayoutGuide;
-(NSArray *)inkIdentifiers;
-(id)createToolButtonItemWithInkIdentifier:(id)arg1 shouldEmboss:(BOOL)arg2 ;
-(CGSize)minimumSizeForSizeState:(unsigned long long)arg1 selectionState:(unsigned long long)arg2 ;
-(_PKAllowDrawingWhilePresentingPopoverView *)_allowDrawingWhilePresentingPopoverView;
-(void)set_allowDrawingWhilePresentingPopoverView:(_PKAllowDrawingWhilePresentingPopoverView *)arg1 ;
-(void)_updateFrameForAllowDrawingWhilePresentingPopoverView;
-(id)_toolButtonContainingPoint:(CGPoint)arg1 ;
-(void)_layoutUpdateSizeAndSelectionState;
-(id)_layoutCalculateUncenteredSubviewFrames;
-(id)colorForInkIdentifier:(id)arg1 ;
-(double)_layoutYOffsetForToolIndex:(long long)arg1 ;
-(double)_layoutAlphaForToolIndex:(long long)arg1 ;
-(BOOL)_layoutButtonSelectedForToolIndex:(long long)arg1 ;
-(CGRect)_layoutCenteredFrameForToolIndex:(long long)arg1 uncenteredFrames:(id)arg2 centeringTransform:(CGAffineTransform)arg3 ;
-(unsigned long long)selectedInkIndex;
-(id)_layoutSeparatorViewColorEmbossed:(BOOL)arg1 isUsedOnDarkBackground:(BOOL)arg2 ;
-(unsigned long long)sizeStateForWidth:(double)arg1 ;
-(void)_setSizeStateNoLayout:(unsigned long long)arg1 ;
-(unsigned long long)selectionStateForSizeState:(unsigned long long)arg1 previousSelectionState:(unsigned long long)arg2 ;
-(NSString *)selectedInkIdentifier;
-(void)_setSelectionStateNoLayout:(unsigned long long)arg1 ;
-(NSMutableDictionary *)_inkForIdentifierDict;
-(BOOL)isDrawingToolIdentifier:(id)arg1 ;
-(void)_updateSelectedInkIndex:(unsigned long long)arg1 ;
-(void)_updateSubviewsWithInk:(id)arg1 animated:(BOOL)arg2 ;
-(PKInkAttributesPicker *)presentedInkAttributesPicker;
-(void)setSelectedColor:(id)arg1 animated:(BOOL)arg2 ;
-(id)inkIdentifierForIndex:(unsigned long long)arg1 ;
-(void)setSelectedInkIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isDrawingToolIndex:(unsigned long long)arg1 ;
-(void)_reloadToolbarItems;
-(BOOL)forceCompactLayout;
-(double)cachedToolButtonWidthForSizeState:(unsigned long long)arg1 ;
-(unsigned long long)previousDrawingToolIndex;
-(id)lastDrawingToolInk;
-(void)notifyToolSelected:(BOOL)arg1 ;
-(BOOL)_shouldEnablePencilGestures;
-(void)_resetUIOnPencilDoubleTapTimerEnded;
-(void)_dismissInkAttributesPicker:(/*^block*/id)arg1 ;
-(id)_inkForTogglingEraserAndLastDrawingToolOnPencilDoubleTap;
-(id)_inkForSwitchingToPreviousToolOnPencilDoubleTap;
-(unsigned long long)previousToolIndex;
-(void)_setupAllowDrawingWhilePresentingPopoverViewIfNecessaryWithDelegate:(id)arg1 ;
-(id)_allowDrawingWhilePresentingPopoverViewPassthroughArray;
-(NSObject*<OS_dispatch_queue>)serialViewControllerTransitionQueue;
-(void)setAggd_initialInkOnPopoverOpen:(PKInk *)arg1 ;
-(void)setPresentedInkAttributesPicker:(PKInkAttributesPicker *)arg1 ;
-(void)_teardownAllowDrawingWhilePresentingPopoverView;
-(PKInk *)aggd_initialInkOnPopoverOpen;
-(double)offsetForToolIndex:(unsigned long long)arg1 pressed:(BOOL)arg2 ;
-(void)_showInkAttributesPickerFromView:(id)arg1 frame:(CGRect)arg2 displayMode:(unsigned long long)arg3 shouldHideArrow:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)toolTapped:(id)arg1 ;
-(void)_animateRulerToggled:(id)arg1 ;
-(void)userDidTouchTool:(id)arg1 ;
-(void)_axHandleLongPressForLargeTextHUD:(id)arg1 ;
-(void)resetToDrawingToolWithAnimation:(BOOL)arg1 ;
-(void)updateSelectedToolColor:(id)arg1 ;
-(void)notifyColorSelected:(id)arg1 didChange:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)serialViewControllerTransitionSemaphore;
-(id)_axLabelForToolButton:(id)arg1 ;
-(void)selectColorPickerColor:(id)arg1 ;
-(void)setForceCompactLayout:(BOOL)arg1 ;
-(void)setAllowedTools:(NSArray *)arg1 ;
-(CGRect)_extentRect;
-(CGRect)_frameForNonDrawingToolAtIndex:(long long)arg1 ;
-(id)minimizedImageForInk:(id)arg1 small:(BOOL)arg2 ;
-(void)setInkIdentifiers:(NSArray *)arg1 ;
-(void)setToolButtonItems:(NSArray *)arg1 ;
-(void)setColorPicker:(PKInlineColorPicker *)arg1 ;
-(void)set_inkForIdentifierDict:(NSMutableDictionary *)arg1 ;
-(void)setSerialViewControllerTransitionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSerialViewControllerTransitionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setPencilInteraction:(UIPencilInteraction *)arg1 ;
-(void)setContentsHiddenToolIndicator:(_PKToolIndicator *)arg1 ;
-(NSArray *)allowedTools;
-(BOOL)pencilGestureSupportEnabled;
-(void)setPencilGestureSupportEnabled:(BOOL)arg1 ;
@end

