/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DOCViewServiceErrorViewDelegate.h>

@protocol DOCViewServiceErrorViewControllerDelegate;
@class DOCViewServiceErrorView, NSString;

@interface DOCViewServiceErrorViewController : UIViewController <DOCViewServiceErrorViewDelegate> {

	DOCViewServiceErrorView* _errorView;
	id<DOCViewServiceErrorViewControllerDelegate> _delegate;

}

@property (__weak) id<DOCViewServiceErrorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * errorTitle; 
@property (nonatomic,retain) NSString * errorSubtitle; 
-(id<DOCViewServiceErrorViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DOCViewServiceErrorViewControllerDelegate>)arg1 ;
-(void)loadView;
-(NSString *)errorTitle;
-(void)setErrorTitle:(NSString *)arg1 ;
-(void)setErrorSubtitle:(NSString *)arg1 ;
-(void)didTapTryAgainInErrorView:(id)arg1 ;
-(NSString *)errorSubtitle;
@end

