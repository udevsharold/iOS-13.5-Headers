/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
-(id)init;
-(id)_daemonConnection;
-(BOOL)setupAssistantNeedsToRun;
-(void)ensureSilentLoginUpgrade;
-(void)ensureShortLivedTokenUpgrade;
-(id)backupMetadata;
-(void)observeFinishSetupTriggers;
-(void)performSilentICDPUpgrade;
-(void)deferDataMigratorExit;
-(void)cancelDataMigratorDeferredExit;
@end

