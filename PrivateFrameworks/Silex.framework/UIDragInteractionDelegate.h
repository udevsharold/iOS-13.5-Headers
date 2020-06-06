/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDragInteractionDelegate <NSObject>
@optional
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
-(void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;

@required
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;

@end

