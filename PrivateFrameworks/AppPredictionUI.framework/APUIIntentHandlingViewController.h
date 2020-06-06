/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRKCardPresentationDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControllerDelegate.h>
#import <libobjc.A.dylib/APUIWFLIntentControllerDelegate.h>

@protocol APUIIntentHandlingViewControllerDelegate, CRKCardViewControlling;
@class INIntent, APUIWFLIntentController, CRKCardPresentation, UIViewController, UIActivityIndicatorView, ATXAction, NSString;

@interface APUIIntentHandlingViewController : UIViewController <CRKCardPresentationDelegate, CRKCardViewControllerDelegate, APUIWFLIntentControllerDelegate> {

	BOOL _intentIsDirty;
	BOOL _suppressSpinner;
	INIntent* _intent;
	long long _executionContext;
	id<APUIIntentHandlingViewControllerDelegate> _delegate;
	APUIWFLIntentController* _wfIntentController;
	CRKCardPresentation* _cardPresentation;
	UIViewController*<CRKCardViewControlling> _currentCardViewController;
	double _preferredPlatterContentHeight;
	UIActivityIndicatorView* _activityIndicatorView;
	ATXAction* _atxAction;

}

@property (nonatomic,retain) INIntent * intent;                                                                //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) APUIWFLIntentController * wfIntentController;                                     //@synthesize wfIntentController=_wfIntentController - In the implementation block
@property (assign,nonatomic) BOOL intentIsDirty;                                                               //@synthesize intentIsDirty=_intentIsDirty - In the implementation block
@property (nonatomic,retain) CRKCardPresentation * cardPresentation;                                           //@synthesize cardPresentation=_cardPresentation - In the implementation block
@property (nonatomic,retain) UIViewController*<CRKCardViewControlling> currentCardViewController;              //@synthesize currentCardViewController=_currentCardViewController - In the implementation block
@property (assign,nonatomic) double preferredPlatterContentHeight;                                             //@synthesize preferredPlatterContentHeight=_preferredPlatterContentHeight - In the implementation block
@property (assign,nonatomic) BOOL suppressSpinner;                                                             //@synthesize suppressSpinner=_suppressSpinner - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                                  //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) ATXAction * atxAction;                                                            //@synthesize atxAction=_atxAction - In the implementation block
@property (assign,nonatomic) long long executionContext;                                                       //@synthesize executionContext=_executionContext - In the implementation block
@property (assign,nonatomic,__weak) id<APUIIntentHandlingViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
-(id<APUIIntentHandlingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<APUIIntentHandlingViewControllerDelegate>)arg1 ;
-(INIntent *)intent;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setIntent:(INIntent *)arg1 ;
-(long long)executionContext;
-(void)setExecutionContext:(long long)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)initWithIntent:(id)arg1 ;
-(void)setAtxAction:(ATXAction *)arg1 ;
-(ATXAction *)atxAction;
-(void)launchAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cardViewControllerDidLoad:(id)arg1 ;
-(void)cardViewControllerBoundsDidChange:(id)arg1 ;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(void)confirmationGranted:(BOOL)arg1 ;
-(CRKCardPresentation *)cardPresentation;
-(void)setCardPresentation:(CRKCardPresentation *)arg1 ;
-(UIViewController*<CRKCardViewControlling>)currentCardViewController;
-(void)setCurrentCardViewController:(UIViewController*<CRKCardViewControlling>)arg1 ;
-(BOOL)intentController:(id)arg1 shouldRequireConfirmationForIntent:(id)arg2 intentResponse:(id)arg3 ;
-(void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3 ;
-(void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(/*^block*/id)arg3 ;
-(void)intentController:(id)arg1 didHandleInteraction:(id)arg2 ;
-(void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3 ;
-(void)intentControllerDidFailAuthorizationCheck:(id)arg1 ;
-(void)_setupProgressIndicator;
-(void)setPreferredPlatterContentHeight:(double)arg1 ;
-(void)setPreferredPlatterContentHeight:(double)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)beginRunningIntent;
-(APUIWFLIntentController *)wfIntentController;
-(id)titleForConfirmAction;
-(void)_installChildViewController:(id)arg1 ;
-(void)_createOrUpdateCardViewControllerForInteraction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_contentForCardRequestWithInteraction:(id)arg1 ;
-(unsigned long long)_cardFormatForContentRequest:(id)arg1 ;
-(void)_constructCardViewControllerForInteraction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateCardViewControllerForInteraction:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setWfIntentController:(APUIWFLIntentController *)arg1 ;
-(BOOL)intentIsDirty;
-(void)setIntentIsDirty:(BOOL)arg1 ;
-(double)preferredPlatterContentHeight;
-(BOOL)suppressSpinner;
-(void)setSuppressSpinner:(BOOL)arg1 ;
@end

