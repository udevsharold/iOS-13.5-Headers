/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNKFaceTimeInCallControlsDragControllerDelegate.h>
#import <libobjc.A.dylib/CNKFaceTimeInCallControlsViewControllerDelegate.h>
#import <libobjc.A.dylib/AVCEffectsDelegate.h>
#import <libobjc.A.dylib/CFXEffectBrowserContentPresenterDelegate.h>
#import <libobjc.A.dylib/CNKFaceTimeCameraViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXCameraViewControllerDelegate.h>

@class TUCall;

@interface CNKStagingAreaViewController : UIViewController <CNKFaceTimeInCallControlsDragControllerDelegate, CNKFaceTimeInCallControlsViewControllerDelegate, AVCEffectsDelegate, CFXEffectBrowserContentPresenterDelegate, CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate> {

	 participantLabel;
	 secondaryParticipantLabel;
	 localPreviewFrontView;
	 localPreviewBackView;
	 audioVisualizationView;
	 controlsViewController;
	 constraintController;
	 controlsDragController;
	 effectsEnabled;
	 avcEffects;
	 effectsCaptureInfo;
	 effectsViewController;
	 effectsBrowserViewController;
	 effectsLayoutController;
	 conversationController;
	 videoDeviceController;
	 numberFormatter;
	 scheduledUpdateTimer;
	 isWaitingToConnect;
	 hasJoined;
	 delegate;
	 stagingAreaDelegate;
	 call;
	 deviceOrientation;

}

@property (assign,nonatomic) BOOL effectsEnabled; 
@property (assign,nonatomic) BOOL hasJoined; 
@property (assign,__weak,nonatomic) id<CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; 
@property (assign,__weak,nonatomic) id<CNKStagingAreaViewControllerDelegate> stagingAreaDelegate; 
@property (retain,nonatomic) TUCall * call; 
@property (assign,nonatomic) long long deviceOrientation; 
-(long long)inCallControlsDragControllerShortestState:(id)arg1 ;
-(void)inCallControlsDragController:(id)arg1 willStartDragFrom:(long long)arg2 ;
-(void)inCallControlsDragController:(id)arg1 didStartDragTo:(long long)arg2 ;
-(void)inCallControlsDragController:(id)arg1 didEndDragAt:(long long)arg2 ;
-(void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2 ;
-(void)didCreateTableViewForInCallControlsViewController:(id)arg1 ;
-(void)resetEffectsState;
-(void)didCaptureVideoFrame:(id)arg1 ;
-(void)serverDidTimeout:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2 ;
-(BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1 ;
-(void)didSelectApp:(id)arg1 ;
-(void)cameraViewController:(id)arg1 didChangeEffectsState:(long long)arg2 ;
-(void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2 ;
-(void)cameraViewControllerPresentationRectWasDoubleTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CNKFaceTimeMultiwayConversationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNKFaceTimeMultiwayConversationViewControllerDelegate>)arg1 ;
-(void)setCall:(TUCall *)arg1 ;
-(TUCall *)call;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)deviceOrientation;
-(void)updateViewConstraints;
-(void)setDeviceOrientation:(long long)arg1 ;
-(BOOL)hasJoined;
-(void)setHasJoined:(BOOL)arg1 ;
-(BOOL)effectsEnabled;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(id)initWithActiveCall:(id)arg1 ;
-(void)toggleVideoMute;
-(void)hideEffectsBrowser;
-(id)initWithActiveCall:(id)arg1 hasJoined:(BOOL)arg2 ;
-(void)didTapJoinButton;
-(id<CNKStagingAreaViewControllerDelegate>)stagingAreaDelegate;
-(void)setStagingAreaDelegate:(id<CNKStagingAreaViewControllerDelegate>)arg1 ;
-(void)didTapLeaveButton;
-(void)didTapSwapLocalParticipantCamera;
@end

