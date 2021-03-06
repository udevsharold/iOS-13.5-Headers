/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextRangeAdjustmentInteractionDelegate <NSObject>
@required
-(CGRect*)startEdge;
-(CGRect*)endEdge;
-(void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(CGPoint)arg2;
-(void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(CGPoint)arg2 withTouchPoint:(CGPoint)arg3;
-(void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(CGPoint)arg2;
-(void)textRangeAdjustmentInteractionWasCancelled:(id)arg1;

@end

