/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIHoverGestureRecognizer, NSHashTable, NSString;

@interface SBIndirectTouchLifecycleMonitor : NSObject <UIGestureRecognizerDelegate> {

	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	NSHashTable* _observers;

}

@property (nonatomic,retain) UIHoverGestureRecognizer * hoverGestureRecognizer;              //@synthesize hoverGestureRecognizer=_hoverGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg1 ;
-(UIHoverGestureRecognizer *)hoverGestureRecognizer;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)handleHoverEvent:(id)arg1 ;
-(id)initWithSystemGestureManager:(id)arg1 ;
@end
