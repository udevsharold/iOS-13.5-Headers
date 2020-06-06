/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFVariableConfigurationResponderDelegate <NSObject>
@optional
-(void)variableResponderDidBeginEditing:(id)arg1;
-(void)variableResponderWillEndEditing:(id)arg1;
-(void)variableResponderDidEndEditing:(id)arg1;
-(void)variableResponderDidReturnToKeyboard:(id)arg1;

@required
-(BOOL)variableResponderHasText:(id)arg1;
-(void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2;
-(void)variableResponderDidRevealAction:(id)arg1;
-(void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2;
-(void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(/*^block*/id)arg4 commitHandler:(/*^block*/id)arg5;

@end

