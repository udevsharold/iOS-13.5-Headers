/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSStatusTextViewControllerDelegate.h>

@protocol SBFAuthenticationStatusProvider;
@class CSStatusTextViewController, NSString, CSFixedFooterView;

@interface CSFixedFooterViewController : CSCoverSheetViewControllerBase <CSStatusTextViewControllerDelegate> {

	CSStatusTextViewController* _statusTextViewController;
	NSString* _cachedMesaFailureText;
	BOOL _temporaryMesaFailureTextActive;
	BOOL _authenticatedSinceFingerOn;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;

}

@property (nonatomic,retain) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;              //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,readonly) CSFixedFooterView * fixedFooterView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(void)updateCallToActionForReversingInteractiveTransition;
-(CSFixedFooterView *)fixedFooterView;
-(void)updateCallToActionForMesaMatchFailure;
-(void)coverSheetStatusTextViewControllerContentDidChange:(id)arg1 ;
-(void)_updateCallToActionTextAnimated:(BOOL)arg1 ;
-(void)_addStatusTextViewControllerIfNecessary;
@end

