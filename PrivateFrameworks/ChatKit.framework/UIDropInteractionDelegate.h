/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDropInteractionDelegate <NSObject>
@optional
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;

@end

