/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFDrawerPaneContainerDelegate.h>

@protocol WFDrawerControllerDelegate;
@class NSArray, NSMapTable, UIViewController, NSString, WFDrawerPaneContainer;

@interface WFDrawerController : UIViewController <WFDrawerPaneContainerDelegate> {

	BOOL _inTransition;
	id<WFDrawerControllerDelegate> _delegate;
	NSArray* _viewControllers;
	double _bottomInset;
	NSArray* _paneContainers;
	NSMapTable* _paneContainersByViewControllers;
	UIViewController* _initializationViewController;
	NSString* _drawerGroup;
	unsigned long long _previousVisibilityOfCoveredPaneContainer;

}

@property (nonatomic,readonly) NSArray * paneContainers;                                                 //@synthesize paneContainers=_paneContainers - In the implementation block
@property (nonatomic,readonly) WFDrawerPaneContainer * topPaneContainer; 
@property (nonatomic,readonly) NSMapTable * paneContainersByViewControllers;                             //@synthesize paneContainersByViewControllers=_paneContainersByViewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * initializationViewController;                          //@synthesize initializationViewController=_initializationViewController - In the implementation block
@property (nonatomic,readonly) NSString * drawerGroup;                                                   //@synthesize drawerGroup=_drawerGroup - In the implementation block
@property (nonatomic,readonly) unsigned long long previousVisibilityOfCoveredPaneContainer;              //@synthesize previousVisibilityOfCoveredPaneContainer=_previousVisibilityOfCoveredPaneContainer - In the implementation block
@property (nonatomic,readonly) BOOL inTransition;                                                        //@synthesize inTransition=_inTransition - In the implementation block
@property (assign,nonatomic,__weak) id<WFDrawerControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * viewControllers;                                                //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * topViewController; 
@property (nonatomic,readonly) unsigned long long visibility; 
@property (assign,nonatomic) BOOL userInteractionEnabled; 
@property (assign,nonatomic) double bottomInset;                                                         //@synthesize bottomInset=_bottomInset - In the implementation block
@property (nonatomic,readonly) CGRect drawerRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<WFDrawerControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDrawerControllerDelegate>)arg1 ;
-(unsigned long long)visibility;
-(void)loadView;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)userInteractionEnabled;
-(UIViewController *)topViewController;
-(NSArray *)viewControllers;
-(BOOL)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(double)bottomInset;
-(void)setBottomInset:(double)arg1 ;
-(BOOL)inTransition;
-(void)drawerPaneContainer:(id)arg1 willTransitionToVisibility:(unsigned long long)arg2 ;
-(void)drawerPaneContainer:(id)arg1 didTransitionToVisibility:(unsigned long long)arg2 ;
-(double)bottomInsetForPaneContainer:(id)arg1 ;
-(id)scrollViewOccludingDrawerPaneInsideContainer:(id)arg1 ;
-(BOOL)pushViewController:(id)arg1 withVisibility:(unsigned long long)arg2 dimming:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(BOOL)popViewControllerToVisibility:(unsigned long long)arg1 dimming:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)drawerPaneWithViewController:(id)arg1 ;
-(id)mutablePaneControllers;
-(WFDrawerPaneContainer *)topPaneContainer;
-(id)coveredPaneContainer;
-(id)paneContainerForViewController:(id)arg1 ;
-(CGRect)drawerRect;
-(void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(double)heightForVisibility:(unsigned long long)arg1 ;
-(NSArray *)paneContainers;
-(NSMapTable *)paneContainersByViewControllers;
-(UIViewController *)initializationViewController;
-(NSString *)drawerGroup;
-(unsigned long long)previousVisibilityOfCoveredPaneContainer;
@end

