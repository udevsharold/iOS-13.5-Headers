/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFWorkflowEditingDelegate <NSObject>
@required
-(void)workflow:(id)arg1 reloadActions:(id)arg2;
-(void)workflow:(id)arg1 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg2;
-(void)workflow:(id)arg1 removeAction:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3;
-(void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3;

@end

