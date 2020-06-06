/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NAFuture, NSString;

@interface HUPreloadedTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	NAFuture* _completionFuture;

}

@property (nonatomic,readonly) NAFuture * completionFuture;              //@synthesize completionFuture=_completionFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(NAFuture *)completionFuture;
@end

