/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFFileRecordDescriptor.h>

@interface WFWorkflowFileDescriptor : WFFileRecordDescriptor {

	BOOL _performMigration;

}

@property (nonatomic,readonly) BOOL performMigration;              //@synthesize performMigration=_performMigration - In the implementation block
-(BOOL)performMigration;
-(id)initWithFile:(id)arg1 name:(id)arg2 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3 ;
-(id)initWithFile:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3 sourceAppIdentifier:(id)arg4 ;
@end

