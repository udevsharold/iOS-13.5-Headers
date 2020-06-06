/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIContextMenuInteractionDelegate <NSObject>
@optional
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
-(id)targetedPreviewForDismissingContextMenuInteraction:(id)arg1;
-(void)contextMenuInteractionWillPresent:(id)arg1;
-(void)contextMenuInteractionDidEnd:(id)arg1;

@required
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;

@end

