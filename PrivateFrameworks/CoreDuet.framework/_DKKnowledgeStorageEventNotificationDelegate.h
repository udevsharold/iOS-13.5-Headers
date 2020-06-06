/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeStorageEventNotificationDelegate
@optional
-(void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
-(void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;

@end

