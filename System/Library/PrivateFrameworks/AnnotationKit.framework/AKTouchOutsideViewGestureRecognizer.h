/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableSet, UIView, NSString;

@interface AKTouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	NSMutableSet* mTargets;
	UIView* mWatchView;

}

@property (assign,nonatomic,__weak) UIView * watchView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)watchView;
-(void)setWatchView:(UIView *)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 watchView:(id)arg3 ;
@end
