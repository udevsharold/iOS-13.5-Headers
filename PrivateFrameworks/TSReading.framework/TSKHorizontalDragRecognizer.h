/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIScrollView;

@interface TSKHorizontalDragRecognizer : UIGestureRecognizer {

	CGPoint mStartPoint;
	UIScrollView* mContainingScrollView;

}

@property (assign,nonatomic) UIScrollView * containingScrollView; 
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)setContainingScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)containingScrollView;
@end

