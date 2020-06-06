/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFRunWorkflowViewControllerDelegate <NSObject>
@optional
-(void)workflowViewControllerRequestsActionDrawer:(id)arg1;
-(BOOL)isDrawerAvailableForWorkflowViewController:(id)arg1;
-(void)workflowViewControllerRequestsDismissal:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)workflowViewControllerWillRun:(id)arg1 continueHandler:(/*^block*/id)arg2;
-(void)workflowViewControllerDidRun:(id)arg1 withOutput:(id)arg2 error:(id)arg3 cancelled:(BOOL)arg4 continueHandler:(/*^block*/id)arg5;
-(BOOL)workflowViewController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)workflowViewController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)runWorkflowToolbarForWorkflowViewController:(id)arg1;

@end

