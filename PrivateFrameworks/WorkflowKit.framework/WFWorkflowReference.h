/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDatabaseObjectDescriptor.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, WFWorkflowIcon;

@interface WFWorkflowReference : WFDatabaseObjectDescriptor <WFNaming> {

	BOOL _isDeleted;
	NSString* _name;
	NSString* _subtitle;
	NSString* _actionsDescription;
	NSString* _associatedAppBundleIdentifier;
	WFWorkflowIcon* _icon;

}

@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,copy,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionsDescription;                         //@synthesize actionsDescription=_actionsDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) WFWorkflowIcon * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL isDeleted;                                             //@synthesize isDeleted=_isDeleted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)workflowReferenceConsumingSingleUseToken:(id)arg1 error:(id*)arg2 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subtitle;
-(WFWorkflowIcon *)icon;
-(BOOL)isDeleted;
-(NSString *)associatedAppBundleIdentifier;
-(id)eventDictionary;
-(id)generateSingleUseToken;
-(id)speakableString;
-(NSString *)wfName;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 subtitle:(id)arg3 actionsDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 icon:(id)arg6 isDeleted:(BOOL)arg7 ;
-(id)externalURLForRunningWithSource:(id)arg1 ;
-(id)externalURLForViewing;
-(NSString *)actionsDescription;
-(void)donateRunInteraction;
-(void)deleteAssociatedInteractions;
@end

