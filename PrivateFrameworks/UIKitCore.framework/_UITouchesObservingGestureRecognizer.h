/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet;

@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer {

	NSSet* _touches;

}

@property (nonatomic,copy) NSSet * touches;              //@synthesize touches=_touches - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(NSSet *)touches;
-(BOOL)_wantsPartialTouchSequences;
-(void)setTouches:(NSSet *)arg1 ;
-(void)_updateTouchesFromEvent:(id)arg1 ;
-(BOOL)_allTouchesAreEndedOrCancelled:(id)arg1 ;
@end

