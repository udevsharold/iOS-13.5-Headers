/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UISearchBar;

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {

	UISearchBar* _transitioningSearchBar;

}
-(void)cancel;
-(void)complete;
-(void)animate;
-(void)prepare;
-(int)transition;
@end

