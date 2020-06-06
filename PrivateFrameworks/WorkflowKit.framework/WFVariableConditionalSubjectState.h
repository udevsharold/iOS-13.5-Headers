/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class WFContentProperty, WFVariableParameterState, WFVariable;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState {

	WFContentProperty* _effectiveContentProperty;
	WFVariableParameterState* _variableState;

}

@property (nonatomic,readonly) WFVariableParameterState * variableState;                  //@synthesize variableState=_variableState - In the implementation block
@property (nonatomic,readonly) WFContentProperty * effectiveContentProperty;              //@synthesize effectiveContentProperty=_effectiveContentProperty - In the implementation block
@property (nonatomic,readonly) WFVariable * variable; 
+(id)subjectType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(WFVariable *)variable;
-(id)initWithVariable:(id)arg1 ;
-(long long)contentType;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)getContentWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEnumeration;
-(void)getEnumerationPossibleStatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)localizedLabelForEnumerationPossibleState:(id)arg1 ;
-(id)containedVariables;
-(id)unitType;
-(unsigned long long)displayableTimeUnits;
-(id)supportedComparisonOperators;
-(unsigned long long)comparableTimeUnits;
-(BOOL)isCaseInsensitive;
-(BOOL)isIrrational;
-(unsigned long long)tense;
-(id)initWithVariableState:(id)arg1 ;
-(Class)contentClassProvidingContentProperty;
-(WFContentProperty *)effectiveContentProperty;
-(WFVariableParameterState *)variableState;
@end

