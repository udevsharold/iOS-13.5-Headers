/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetDebugging.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryObserving.h>
#import <libobjc.A.dylib/WGWidgetListViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/WGMajorListViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>
#import <libobjc.A.dylib/WGWidgetIconAnimationExtraViewsProviding.h>

@protocol WGWidgetGroupViewControllerDelegate;
@class WGWidgetDiscoveryController, WGCarouselListViewController, UILabel, UIControl, NSString, UIScrollView, UIViewController, UIView, NSArray;

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetListViewControllerDelegatePrivate, WGMajorListViewControllerDelegate, WGWidgetExtensionVisibilityProviding, WGWidgetIconAnimationExtraViewsProviding> {

	WGWidgetDiscoveryController* _discoveryController;
	WGCarouselListViewController* _majorColumnListViewController;
	unsigned long long _lastWidgetCount;
	WGWidgetListSettings _listSettings;
	UILabel* _debugLabel;
	BOOL _shouldBlurContent;
	id<WGWidgetGroupViewControllerDelegate> _delegate;
	unsigned long long _location;
	UIControl* _editButton;
	UIEdgeInsets _contentOccludingInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WGWidgetGroupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) UIScrollView * majorScrollView; 
@property (nonatomic,readonly) unsigned long long widgetCount; 
@property (assign,nonatomic) BOOL shouldBlurContent;                                               //@synthesize shouldBlurContent=_shouldBlurContent - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentOccludingInset;                                   //@synthesize contentOccludingInset=_contentOccludingInset - In the implementation block
@property (nonatomic,retain) UIViewController * headerContentViewController; 
@property (getter=isHeaderVisible,nonatomic,readonly) BOOL headerVisible; 
@property (assign,nonatomic) WGWidgetListSettings listSettings;                                    //@synthesize listSettings=_listSettings - In the implementation block
@property (nonatomic,retain) UIControl * editButton;                                               //@synthesize editButton=_editButton - In the implementation block
@property (assign,getter=isEditingIcons,nonatomic) BOOL editingIcons; 
@property (nonatomic,readonly) UIView * extraViewsContainer; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
-(id<WGWidgetGroupViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WGWidgetGroupViewControllerDelegate>)arg1 ;
-(unsigned long long)location;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController *)headerContentViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setLegibilitySettings:(id)arg1 ;
-(UIControl *)editButton;
-(void)setEditButton:(UIControl *)arg1 ;
-(UIView *)extraViewsContainer;
-(NSArray *)extraViews;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(void)setEditingIcons:(BOOL)arg1 ;
-(WGWidgetListSettings)listSettings;
-(void)setHeaderContentViewController:(UIViewController *)arg1 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEditingIcons;
-(id)initWithWidgetDiscoveryController:(id)arg1 listSettings:(WGWidgetListSettings)arg2 ;
-(void)setListSettings:(WGWidgetListSettings)arg1 ;
-(CGSize)widgetListViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(UIEdgeInsets)widgetListViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2 ;
-(unsigned long long)widgetCount;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(BOOL)shouldBlurContent;
-(void)majorListViewControllerDidChangeHeaderVisibility:(id)arg1 ;
-(BOOL)isHeaderVisible;
-(void)editViewWillAppear:(id)arg1 ;
-(void)editViewDidAppear:(id)arg1 ;
-(void)editViewWillDisappear:(id)arg1 ;
-(void)editViewDidDisappear:(id)arg1 ;
-(id)_scrollViewForListViewController:(id)arg1 ;
-(void)_loadWidgetListViewController;
-(void)invalidateVisibleWidgets;
-(long long)_layoutModeForSize:(CGSize)arg1 ;
-(UIEdgeInsets)contentOccludingInset;
-(UIScrollView *)majorScrollView;
-(long long)_activeLayoutMode;
-(void)setContentOccludingInset:(UIEdgeInsets)arg1 ;
-(void)presentEditViewWithCompletion:(/*^block*/id)arg1 ;
@end

