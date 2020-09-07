/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WFActionDocumentationViewDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@protocol WFActionDescriptionViewControllerDelegate;
@class WFActionDescriptionTitleView, UIButton, UIScrollView, WFActionDocumentationView, UIVisualEffectView, WFAction, NSString, WFActionDrawerState;

@interface WFActionDescriptionViewController : UIViewController <UIScrollViewDelegate, WFActionDocumentationViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	id<WFActionDescriptionViewControllerDelegate> _delegate;
	WFActionDescriptionTitleView* _titleView;
	UIButton* _dismissButton;
	UIScrollView* _scrollView;
	WFActionDocumentationView* _documentationView;
	UIVisualEffectView* _blurView;

}

@property (nonatomic,readonly) WFActionDescriptionTitleView * titleView;                                 //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                                 //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) WFActionDocumentationView * documentationView;                            //@synthesize documentationView=_documentationView - In the implementation block
@property (assign,nonatomic,__weak) UIVisualEffectView * blurView;                                       //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDescriptionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) WFAction * action; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(id)init;
-(id<WFActionDescriptionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFActionDescriptionViewControllerDelegate>)arg1 ;
-(WFActionDrawerState *)state;
-(WFAction *)action;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setAction:(WFAction *)arg1 ;
-(WFActionDescriptionTitleView *)titleView;
-(UIButton *)dismissButton;
-(UIScrollView *)scrollView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionDocumentationViewDidSelectAddToWorkflowWithAction:(id)arg1 ;
-(WFActionDocumentationView *)documentationView;
@end
