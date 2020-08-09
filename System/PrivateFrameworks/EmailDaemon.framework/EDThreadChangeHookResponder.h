/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDThreadChangeHookResponder <NSObject>
@optional
-(void)persistenceIsAddingThreadWithObjectID:(id)arg1 journaled:(BOOL)arg2 generationWindow:(id)arg3;
-(void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 generationWindow:(id)arg3;
-(void)persistenceIsDeletingThreadWithObjectID:(id)arg1 generationWindow:(id)arg2;
-(void)persistenceDidFinishThreadUpdates;
-(void)persistenceWillResetThreadScope:(id)arg1 denyBlock:(/*^block*/id)arg2;

@end
