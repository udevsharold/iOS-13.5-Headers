/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol PKPassPersonalizationTermsViewControllerDelegate;
@class UITextView, NSString;

@interface PKPassPersonalizationTermsViewController : UIViewController {

	UITextView* _textView;
	NSString* _termsAndConditions;
	id<PKPassPersonalizationTermsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSString * termsAndConditions;                                              //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (assign,nonatomic) id<PKPassPersonalizationTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PKPassPersonalizationTermsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPassPersonalizationTermsViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)termsAndConditions;
-(void)setTermsAndConditions:(NSString *)arg1 ;
-(id)initWithTermsAndConditions:(id)arg1 ;
-(void)_declineButtonPressed:(id)arg1 ;
-(void)_acceptButtonPressed:(id)arg1 ;
-(void)_applyTermsAndConditions;
@end

