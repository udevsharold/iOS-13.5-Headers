/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDTaskServer <_HKXPCExportable>
@optional
+(Class)configurationClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;

@required
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)taskUUID;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
