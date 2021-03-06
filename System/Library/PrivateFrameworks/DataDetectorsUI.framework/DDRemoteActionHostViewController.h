/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;
@interface DDRemoteActionHostViewController : _UIRemoteViewController {

	id<DDRemoteActionHostViewControllerDelegate> _delegate;

}

@property (__weak) id<DDRemoteActionHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DDRemoteActionHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DDRemoteActionHostViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

