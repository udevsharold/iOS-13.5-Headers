/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistant/BYDeviceMigrationManager.h>

@interface BYSourceDeviceMigration : BYDeviceMigrationManager
+(id)createDeviceTransferTask:(id)arg1 ;
-(void)startDeviceTransferTask;
-(void)cancelDeviceTransferTask;
-(BOOL)requiresProcessAssertion;
-(id)sourceDeviceTransferTask;
-(void)updateFileTransferSession:(id)arg1 ;
@end

