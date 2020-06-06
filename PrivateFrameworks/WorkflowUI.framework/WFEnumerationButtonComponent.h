/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class WFEnumerationParameter, WFVariableSubstitutableParameterState;

@interface WFEnumerationButtonComponent : CKCompositeComponent {

	BOOL _processing;
	WFEnumerationParameter* _parameter;
	WFVariableSubstitutableParameterState* _state;
	/*^block*/id _updateBlock;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;

}
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 ;
@end

