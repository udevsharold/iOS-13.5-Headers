/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@interface WFTableTemplateParameter : WFParameter {

	Class _contentItemClass;

}

@property (nonatomic,readonly) Class contentItemClass;                                     //@synthesize contentItemClass=_contentItemClass - In the implementation block
@property (nonatomic,copy,readonly) id additionalRowSerializedRepresentation; 
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(Class)contentItemClass;
-(id)defaultSerializedRepresentation;
-(BOOL)supportsImportQuestions;
-(id)additionalRowSerializedRepresentation;
@end
