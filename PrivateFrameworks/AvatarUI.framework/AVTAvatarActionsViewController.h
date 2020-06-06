/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVTAvatarActionsModelDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/AVTFaceTrackingManagerDelegate.h>
#import <libobjc.A.dylib/AVTUIControllerPresentationDelegate.h>

@protocol AVTAvatarActionsViewControllerDelegate, AVTAvatarActionsViewControllerLayout;
@class UIStackView, AVTImageTransitioningContainerView, AVTAvatarActionButton, AVTAvatarActionsModel, AVTViewSessionProvider, AVTViewSession, UIImageView, UITapGestureRecognizer, AVTUIEnvironment, AVTAvatarEditorViewController, NSString;

@interface AVTAvatarActionsViewController : UIViewController <AVTAvatarActionsModelDelegate, UINavigationControllerDelegate, AVTFaceTrackingManagerDelegate, AVTUIControllerPresentationDelegate> {

	BOOL _isAnimating;
	BOOL _allowFacetracking;
	id<AVTAvatarActionsViewControllerDelegate> _delegate;
	id<AVTAvatarActionsViewControllerLayout> _currentLayout;
	UIStackView* _buttonsView;
	AVTImageTransitioningContainerView* _avatarContainer;
	AVTAvatarActionButton* _editButton;
	AVTAvatarActionButton* _duplicateButton;
	AVTAvatarActionButton* _deleteButton;
	AVTAvatarActionsModel* _actionsModel;
	AVTViewSessionProvider* _sessionProvider;
	AVTViewSession* _avtViewSession;
	/*^block*/id _postSessionDidBecomeActiveHandler;
	UIImageView* _transitionImageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	AVTUIEnvironment* _environment;
	AVTAvatarEditorViewController* _editorViewController;

}

@property (nonatomic,retain) UIStackView * buttonsView;                                                //@synthesize buttonsView=_buttonsView - In the implementation block
@property (nonatomic,retain) AVTImageTransitioningContainerView * avatarContainer;                     //@synthesize avatarContainer=_avatarContainer - In the implementation block
@property (nonatomic,retain) AVTAvatarActionButton * editButton;                                       //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) AVTAvatarActionButton * duplicateButton;                                  //@synthesize duplicateButton=_duplicateButton - In the implementation block
@property (nonatomic,retain) AVTAvatarActionButton * deleteButton;                                     //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) AVTAvatarActionsModel * actionsModel;                                     //@synthesize actionsModel=_actionsModel - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * sessionProvider;                               //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,retain) AVTViewSession * avtViewSession;                                          //@synthesize avtViewSession=_avtViewSession - In the implementation block
@property (nonatomic,retain) id<AVTAvatarActionsViewControllerLayout> currentLayout;                   //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,copy) id postSessionDidBecomeActiveHandler;                                       //@synthesize postSessionDidBecomeActiveHandler=_postSessionDidBecomeActiveHandler - In the implementation block
@property (nonatomic,retain) UIImageView * transitionImageView;                                        //@synthesize transitionImageView=_transitionImageView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                            //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                                         //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) BOOL allowFacetracking;                                                   //@synthesize allowFacetracking=_allowFacetracking - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                         //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic,__weak) AVTAvatarEditorViewController * editorViewController;              //@synthesize editorViewController=_editorViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarActionsViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AVTAvatarActionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarActionsViewControllerDelegate>)arg1 ;
-(AVTUIEnvironment *)environment;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)isAnimating;
-(void)setDeleteButton:(AVTAvatarActionButton *)arg1 ;
-(AVTAvatarActionButton *)deleteButton;
-(id<AVTAvatarActionsViewControllerLayout>)currentLayout;
-(void)setCurrentLayout:(id<AVTAvatarActionsViewControllerLayout>)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(AVTAvatarActionButton *)editButton;
-(void)setEditButton:(AVTAvatarActionButton *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)layoutViewFromModel:(id)arg1 ;
-(void)applyLayout:(id)arg1 ;
-(double)duplicateScaleDuration;
-(double)duplicateScaleDelay;
-(double)deleteMoveInDuration;
-(double)deleteMoveInDelay;
-(AVTAvatarActionsModel *)actionsModel;
-(void)setActionsModel:(AVTAvatarActionsModel *)arg1 ;
-(UIStackView *)buttonsView;
-(void)setButtonsView:(UIStackView *)arg1 ;
-(AVTAvatarActionButton *)duplicateButton;
-(void)setDuplicateButton:(AVTAvatarActionButton *)arg1 ;
-(void)didTapAvatarView:(id)arg1 ;
-(void)setIsAnimating:(BOOL)arg1 ;
-(AVTViewSessionProvider *)sessionProvider;
-(void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)controllerPresentationWillObstructView:(id)arg1 ;
-(AVTViewSession *)avtViewSession;
-(void)setAvtViewSession:(AVTViewSession *)arg1 ;
-(void)beginUsingAVTViewFromSession:(id)arg1 ;
-(void)actionsModelDidUpdateInlineActionButtons:(id)arg1 ;
-(void)actionsModel:(id)arg1 didDuplicateToRecord:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)actionsModel:(id)arg1 recordUpdateForDeletingRecord:(id)arg2 ;
-(void)actionsModelDidFinish:(id)arg1 ;
-(void)actionsModel:(id)arg1 didDeleteRecord:(id)arg2 withRecordUpdate:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)actionsModel:(id)arg1 shouldDeleteRecord:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)presentEditorViewController:(id)arg1 forActionsModel:(id)arg2 isCreate:(BOOL)arg3 ;
-(void)actionsModel:(id)arg1 didAddRecord:(id)arg2 ;
-(void)actionsModel:(id)arg1 didEditRecord:(id)arg2 ;
-(void)actionsModel:(id)arg1 didCancelEditingRecord:(id)arg2 ;
-(void)dismissEditorViewController:(id)arg1 forActionsModel:(id)arg2 wasCreate:(BOOL)arg3 didEdit:(BOOL)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithAVTViewSessionProvider:(id)arg1 actionsModel:(id)arg2 environment:(id)arg3 ;
-(BOOL)allowFacetracking;
-(void)setAvatarContainer:(AVTImageTransitioningContainerView *)arg1 ;
-(AVTImageTransitioningContainerView *)avatarContainer;
-(void)didTapDone:(id)arg1 ;
-(void)rebuildLayout;
-(void)beginAVTViewSessionWithDidBeginBlock:(/*^block*/id)arg1 ;
-(id)postSessionDidBecomeActiveHandler;
-(void)setPostSessionDidBecomeActiveHandler:(id)arg1 ;
-(void)configureUserInfoLabel;
-(void)configureAVTViewSession:(id)arg1 withAvatarRecord:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(UIImageView *)transitionImageView;
-(void)setTransitionImageView:(UIImageView *)arg1 ;
-(void)setEditorViewController:(AVTAvatarEditorViewController *)arg1 ;
-(void)createTransitionImageViewIfNeeded;
-(void)performTransitionAfterDuplicateToRecord:(id)arg1 previousRecordImage:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)performTransitionAfterDeleteToRecord:(id)arg1 fromLeft:(BOOL)arg2 previousRecordImage:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(AVTAvatarEditorViewController *)editorViewController;
-(long long)interfaceOrientationForFaceTrackingManager:(id)arg1 ;
-(void)setAllowFacetracking:(BOOL)arg1 ;
-(void)performEdit;
@end

