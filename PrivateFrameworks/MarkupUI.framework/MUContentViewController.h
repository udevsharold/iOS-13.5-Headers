/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol MUContentViewControllerDelegate;
@class AKController;

@interface MUContentViewController : UIViewController {

	id<MUContentViewControllerDelegate> _delegate;
	AKController* _annotationController;

}

@property (__weak) id<MUContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) AKController * annotationController;                       //@synthesize annotationController=_annotationController - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<MUContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MUContentViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AKController *)annotationController;
-(void)setAnnotationController:(AKController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
@end

