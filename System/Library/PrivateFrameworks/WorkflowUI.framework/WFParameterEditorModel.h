/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFParameterState;
@class WFParameter, NSError, WFGradient;

@interface WFParameterEditorModel : NSObject {

	WFParameter* _parameter;
	id<WFParameterState> _state;
	NSError* _resourceError;
	WFGradient* _buttonGradient;

}

@property (nonatomic,readonly) WFParameter * parameter;                  //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * resourceError;                  //@synthesize resourceError=_resourceError - In the implementation block
@property (nonatomic,readonly) WFGradient * buttonGradient;              //@synthesize buttonGradient=_buttonGradient - In the implementation block
-(id<WFParameterState>)state;
-(WFParameter *)parameter;
-(NSError *)resourceError;
-(id)initWithParameter:(id)arg1 state:(id)arg2 ;
-(id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2 ;
-(WFGradient *)buttonGradient;
@end

