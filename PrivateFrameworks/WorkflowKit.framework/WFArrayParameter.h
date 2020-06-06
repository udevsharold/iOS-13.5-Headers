/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSSet;

@interface WFArrayParameter : WFParameter {

	BOOL _supportsVariables;
	NSSet* _allowedValueTypes;

}

@property (nonatomic,readonly) BOOL supportsVariables;                 //@synthesize supportsVariables=_supportsVariables - In the implementation block
@property (nonatomic,readonly) NSSet * allowedValueTypes;              //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSupportedVariableTypes;
-(NSSet *)allowedValueTypes;
-(Class)stateClass;
-(id)defaultSerializedRepresentation;
-(BOOL)supportsVariables;
@end
