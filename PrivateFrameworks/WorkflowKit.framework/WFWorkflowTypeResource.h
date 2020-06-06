/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFWorkflowReferencingResource.h>

@class WFWorkflow, NSString;

@interface WFWorkflowTypeResource : WFResource <WFWorkflowReferencingResource> {

	WFWorkflow* _workflow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) WFWorkflow * workflow;              //@synthesize workflow=_workflow - In the implementation block
+(BOOL)mustBeAvailableForDisplay;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)refreshAvailability;
-(BOOL)workflowTypesAreValid;
@end

