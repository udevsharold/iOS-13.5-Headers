/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class VUIConfirmationAnimatedTransitioning, NSString;

@interface VUIConfirmationTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate> {

	VUIConfirmationAnimatedTransitioning* _presentTransition;
	VUIConfirmationAnimatedTransitioning* _dismissTransition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end

