/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PDFViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface NewsArticles.PDFReplicaViewController : UIViewController <PDFViewDelegate, UIGestureRecognizerDelegate> {

	 identifier;
	 delegate;
	 contentBackgroundColor;
	 styler;
	 eventHandler;
	 pdfView;
	 coverViewManager;
	 loadingIndicatorProvider;
	 pinchRecognizer;
	 loadingStateMachine;

}
-(void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)handlePinchGesture;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
