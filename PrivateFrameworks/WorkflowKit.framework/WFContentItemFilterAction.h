/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFContentItemAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class WFContentQuery, NSString;

@interface WFContentItemFilterAction : WFContentItemAction <WFDynamicEnumerationDataSource>

@property (nonatomic,readonly) WFContentQuery * query; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(WFContentQuery *)query;
-(id)keywords;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(BOOL)inputRequired;
-(id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(BOOL)canHandleInputOfContentClasses:(id)arg1 withSupportedClasses:(id)arg2 ;
-(id)parameterSummary;
-(id)inputParameterKey;
-(id)parameterDefinitions;
-(id)descriptionDictionary;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(unsigned long long)parameterCollapsingBehavior;
-(id)tableTemplate;
-(id)localizedParameterSummaryStringForFind;
-(id)localizedParameterSummaryStringForFindWithFilterConditions;
-(id)localizedParameterSummaryStringForFilter;
-(id)localizedParameterSummaryStringForFilterWithFilterConditions;
-(void)runAsynchronouslyWithInput:(id)arg1 query:(id)arg2 ;
@end
