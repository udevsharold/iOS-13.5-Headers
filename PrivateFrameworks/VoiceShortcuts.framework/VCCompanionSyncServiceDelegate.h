/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCCompanionSyncServiceDelegate
@required
-(void)companionSyncService:(id)arg1 outgoingSyncSession:(id)arg2 didUpdateProgress:(double)arg3;
-(void)companionSyncService:(id)arg1 outgoingSyncSessionDidFinishSendingChanges:(id)arg2;
-(void)companionSyncService:(id)arg1 didFinishSyncSession:(id)arg2 withError:(id)arg3;
-(void)companionSyncService:(id)arg1 didRejectSessionWithError:(id)arg2;
-(BOOL)companionSyncServiceShouldStartSession:(id)arg1;
-(long long)companionSyncService:(id)arg1 typeForSession:(id)arg2;

@end

