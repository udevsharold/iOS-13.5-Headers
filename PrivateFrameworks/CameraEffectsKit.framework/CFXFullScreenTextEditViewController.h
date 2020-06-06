/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXEffectEditorViewDelegate.h>

@protocol CFXFullScreenTextEditViewControllerDelegate;
@class CFXEffect, CFXEffectEditorView, UIView, NSString;

@interface CFXFullScreenTextEditViewController : UIViewController <CFXEffectEditorViewDelegate> {

	BOOL _effectWasRemoved;
	BOOL _isRunningAnimation;
	BOOL _insertingEffect;
	CFXEffect* _textEffect;
	CFXEffect* _workingEffect;
	CFXEffectEditorView* _effectEditor;
	id<CFXFullScreenTextEditViewControllerDelegate> _delegate;
	UIView* _dimmingView;
	CGRect _effectEditorFrameRelativeToScreen;

}

@property (nonatomic,retain) CFXEffect * workingEffect;                                                      //@synthesize workingEffect=_workingEffect - In the implementation block
@property (nonatomic,retain) CFXEffectEditorView * effectEditor;                                             //@synthesize effectEditor=_effectEditor - In the implementation block
@property (nonatomic,__weak,readonly) id<CFXFullScreenTextEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL effectWasRemoved;                                                          //@synthesize effectWasRemoved=_effectWasRemoved - In the implementation block
@property (assign,nonatomic) CGRect effectEditorFrameRelativeToScreen;                                       //@synthesize effectEditorFrameRelativeToScreen=_effectEditorFrameRelativeToScreen - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                           //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) BOOL isRunningAnimation;                                                        //@synthesize isRunningAnimation=_isRunningAnimation - In the implementation block
@property (assign,nonatomic) BOOL insertingEffect;                                                           //@synthesize insertingEffect=_insertingEffect - In the implementation block
@property (nonatomic,readonly) CFXEffect * textEffect;                                                       //@synthesize textEffect=_textEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)displayFullScreenTextEditorForEffect:(id)arg1 inViewController:(id)arg2 delegate:(id)arg3 cameraViewWindowFrame:(CGRect)arg4 insertingEffect:(BOOL)arg5 ;
+(BOOL)isFullScreenTextEditorPresented;
+(void)notifyCameraViewWindowFrameChanged:(CGRect)arg1 ;
+(id)CFX_fadeTimingParameters;
+(void)removeFullScreenTextEditor;
-(void)dealloc;
-(id<CFXFullScreenTextEditViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIView *)dimmingView;
-(void)keyboardDidHide:(id)arg1 ;
-(CFXEffectEditorView *)effectEditor;
-(void)setEffectEditor:(CFXEffectEditorView *)arg1 ;
-(id)initWithTextEffect:(id)arg1 CGSize:(CGRect)arg2 insertingEffect:(BOOL)arg3 delegate:(id)arg4 ;
-(void)setEffectEditorFrameRelativeToScreen:(CGRect)arg1 ;
-(CGRect)effectEditorFrameRelativeToScreen;
-(CFXEffect *)textEffect;
-(void)didTappedEmptyDimmedArea:(id)arg1 ;
-(void)configureWorkingEffect;
-(BOOL)insertingEffect;
-(CFXEffect *)workingEffect;
-(void)CFX_animateWithDuration:(double)arg1 animatingIn:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)scaleTextToFitTextEditingBounds:(BOOL)arg1 ;
-(BOOL)isRunningAnimation;
-(BOOL)effectWasRemoved;
-(void)setEffectWasRemoved:(BOOL)arg1 ;
-(void)setIsRunningAnimation:(BOOL)arg1 ;
-(id)effectEditorView:(id)arg1 effectAtPoint:(CGPoint)arg2 ;
-(BOOL)effectEditorView:(id)arg1 isEffectAtPoint:(CGPoint)arg2 effect:(id)arg3 ;
-(CGRect)effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 includeTracking:(BOOL)arg4 adjustForMinimumHitTestArea:(BOOL)arg5 ;
-(id)effectEditorView:(id)arg1 viewInfoForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(CGPoint)effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(void)effectEditorViewDidBeginEditing:(id)arg1 ;
-(CGPoint)effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(CGPoint)arg3 relativeToBounds:(CGRect)arg4 ;
-(void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(CGAffineTransform)arg3 relativeToBounds:(CGRect)arg4 ;
-(BOOL)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2 ;
-(id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 displayScale:(double)arg4 ;
-(id)effectEditorView:(id)arg1 textForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3 ;
-(void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(BOOL)arg3 ;
-(void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2 ;
-(BOOL)effectEditorView:(id)arg1 shouldDisableEditingAnimationForEffect:(id)arg2 ;
-(double)effectEditorView:(id)arg1 durationForBeginEditingAnimationForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 willBeginAnimationBeforeEditingEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didStartBeginEditingAnimationForEffect:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)effectEditorView:(id)arg1 didCompleteBeginEditingAnimationForEffect:(id)arg2 ;
-(id)effectEditorView:(id)arg1 beginEditingAnimationFromFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(id)effectEditorView:(id)arg1 beginEditingAnimationToFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(double)effectEditorView:(id)arg1 durationForEndEditingAnimationForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 willBeginAnimationAfterEditingEffect:(id)arg2 ;
-(id)effectEditorView:(id)arg1 endEditingAnimationFromFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(id)effectEditorView:(id)arg1 endEditingAnimationToFrameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(void)effectEditorView:(id)arg1 didStartEndEditingAnimationForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didCompleteEndEditingAnimationForEffect:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)effectEditorViewIsTrackingEffect:(id)arg1 ;
-(id)effectEditorView:(id)arg1 trackingTransformWithEffectFrame:(id)arg2 trackingTransformWithObjectTransform:(id)arg3 fractionComplete:(double)arg4 ;
-(void)effectEditorViewDidEndEditing:(id)arg1 ;
-(unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2 ;
-(BOOL)effectEditorViewShouldPreviewEditEffect:(id)arg1 ;
-(void)setWorkingEffect:(CFXEffect *)arg1 ;
-(void)setInsertingEffect:(BOOL)arg1 ;
@end

