/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSRequest.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSProcessIdentity, RBSTerminateContext, NSString;

@interface RBSTerminateRequest : RBSRequest <BSXPCSecureCoding, NSCopying> {

	BOOL _targetsAllManagedProcesses;
	int _pid;
	RBSProcessIdentity* _processIdentity;
	RBSTerminateContext* _context;

}

@property (nonatomic,readonly) BOOL targetsAllManagedProcesses;               //@synthesize targetsAllManagedProcesses=_targetsAllManagedProcesses - In the implementation block
@property (nonatomic,readonly) int pid;                                       //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) RBSProcessIdentity * processIdentity;              //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,readonly) RBSTerminateContext * context;                 //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RBSTerminateContext *)context;
-(int)pid;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(RBSProcessIdentity *)processIdentity;
-(BOOL)execute:(out id*)arg1 error:(out id*)arg2 ;
-(id)initWithProcessIdentity:(id)arg1 context:(id)arg2 ;
-(id)initWithProcessIdentifier:(id)arg1 context:(id)arg2 ;
-(id)initForAllManagedWithReason:(id)arg1 ;
-(BOOL)execute:(out id*)arg1 ;
-(BOOL)targetsAllManagedProcesses;
-(void)setProcessIdentity:(RBSProcessIdentity *)arg1 ;
@end

