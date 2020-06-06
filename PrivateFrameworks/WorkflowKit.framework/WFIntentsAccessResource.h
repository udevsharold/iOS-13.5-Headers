/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFIntentsAccessResource : WFAccessResource {

	NSString* _associatedAppIdentifier;

}
+(id)persistentIdentifierFromBundleIdentifier:(id)arg1 ;
+(id)bundleIdentifierFromPersistentIdentifier:(id)arg1 ;
+(BOOL)isSystemResource;
-(id)associatedAppIdentifier;
-(id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2 ;
-(id)initWithBundleIdentifierForDisplay:(id)arg1 ;
-(unsigned long long)globalLevelStatus;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
@end

