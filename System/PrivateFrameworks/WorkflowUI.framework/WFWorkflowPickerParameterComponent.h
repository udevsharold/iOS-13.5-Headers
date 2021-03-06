/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFParameterComponent.h>

@protocol WFComponentNavigationContext, WFVariableProvider;
@class WFParameter, WFVariableSubstitutableParameterState;

@interface WFWorkflowPickerParameterComponent : WFParameterComponent {

	BOOL _processing;
	WFParameter* _parameter;
	/*^block*/id _updateBlock;
	WFVariableSubstitutableParameterState* _state;
	id<WFComponentNavigationContext> _navigationContext;
	id<WFVariableProvider> _variableProvider;

}

@property (nonatomic,readonly) WFVariableSubstitutableParameterState * state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,readonly) id<WFVariableProvider> variableProvider;                                //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic) BOOL processing;                                                          //@synthesize processing=_processing - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
-(WFVariableSubstitutableParameterState *)state;
-(/*^block*/id)updateBlock;
-(id)parameter;
-(void)setProcessing:(BOOL)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(id<WFComponentNavigationContext>)navigationContext;
-(BOOL)processing;
@end

