/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/QLPreviewScrollViewZoomDelegate.h>

@class QLPreviewScrollView, UIView, UITapGestureRecognizer, NSString;

@interface QLScrollableContentItemViewController : QLItemViewController <QLPreviewScrollViewZoomDelegate> {

	QLPreviewScrollView* _scrollView;
	UIView* _contentView;
	UITapGestureRecognizer* _doubleTapGesture;
	BOOL _isVisible;
	BOOL _shouldFit;

}

@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL shouldFit;                        //@synthesize shouldFit=_shouldFit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)imageSize;
-(id)scrollView;
-(void)_doubleTapRecognized:(id)arg1 ;
-(BOOL)canPinchToDismiss;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(id)parallaxView;
-(BOOL)supportsScrollingUpAndDownUsingKeyCommands;
-(void)setShouldFit:(BOOL)arg1 ;
-(void)didEndZoomingAtScale:(double)arg1 ;
-(void)willBeginZooming;
-(BOOL)previewScrollViewShouldResizeContentBasedOnPeripheryInsets:(id)arg1 ;
-(BOOL)shouldFit;
-(double)previewScrollView:(id)arg1 extraMinimumZoomForMinimumZoomScale:(double)arg2 maximumZoomScale:(double)arg3 ;
-(void)previewScrollViewWillBeginZooming:(id)arg1 ;
-(void)previewScrollView:(id)arg1 didEndZoomingAtScale:(double)arg2 ;
-(void)_updateScrollViewZoomUpdate:(CGSize)arg1 ;
-(BOOL)shouldLayoutContentBasedOnPeripheryInsets;
@end

