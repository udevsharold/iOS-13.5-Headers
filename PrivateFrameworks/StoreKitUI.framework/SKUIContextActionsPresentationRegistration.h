/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPreviewInteractionDelegate.h>

@class UIViewController, UIPreviewInteraction, NSTimer, SKUIContextActionsViewController, UIViewPropertyAnimator, UILongPressGestureRecognizer, NSString;

@interface SKUIContextActionsPresentationRegistration : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate> {

	BOOL _previewInteractionDidEnd;
	/*^block*/id _handler;
	UIViewController* _viewController;
	UIPreviewInteraction* _previewInteraction;
	NSTimer* _previewInteractionTimeout;
	SKUIContextActionsViewController* _orbContextActionsViewController;
	UIViewPropertyAnimator* _previewPhasePropertyAnimator;
	UIViewPropertyAnimator* _commitPhasePropertyAnimator;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,copy) id handler;                                                                        //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIPreviewInteraction * previewInteraction;                                       //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (assign,nonatomic) BOOL previewInteractionDidEnd;                                                   //@synthesize previewInteractionDidEnd=_previewInteractionDidEnd - In the implementation block
@property (nonatomic,retain) NSTimer * previewInteractionTimeout;                                             //@synthesize previewInteractionTimeout=_previewInteractionTimeout - In the implementation block
@property (nonatomic,retain) SKUIContextActionsViewController * orbContextActionsViewController;              //@synthesize orbContextActionsViewController=_orbContextActionsViewController - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * previewPhasePropertyAnimator;                           //@synthesize previewPhasePropertyAnimator=_previewPhasePropertyAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * commitPhasePropertyAnimator;                            //@synthesize commitPhasePropertyAnimator=_commitPhasePropertyAnimator - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                       //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIPreviewInteraction *)previewInteraction;
-(BOOL)previewInteractionShouldBegin:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setOrbContextActionsViewController:(SKUIContextActionsViewController *)arg1 ;
-(void)cleanupPreviewInteraction:(id)arg1 ;
-(void)setPreviewPhasePropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setCommitPhasePropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(BOOL)previewInteractionDidEnd;
-(void)setPreviewInteractionTimeout:(NSTimer *)arg1 ;
-(void)setPreviewInteractionDidEnd:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)previewPhasePropertyAnimator;
-(SKUIContextActionsViewController *)orbContextActionsViewController;
-(UIViewPropertyAnimator *)commitPhasePropertyAnimator;
-(NSTimer *)previewInteractionTimeout;
-(void)_presentFromGestureRecognizer:(id)arg1 ;
-(void)longPressGestureRecognizerTriggered:(id)arg1 ;
-(id)initWithViewController:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

