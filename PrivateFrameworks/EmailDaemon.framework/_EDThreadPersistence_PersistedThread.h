/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _EDThreadPersistence_ThreadMessages, _EDThreadPersistence_SQLHelper, EDMessagePersistence, EMThreadObjectID, NSArray, EMThread;

@interface _EDThreadPersistence_PersistedThread : NSObject {

	BOOL _didCreateTempMessagesView;
	_EDThreadPersistence_ThreadMessages* _messages;
	long long _threadDatabaseID;
	_EDThreadPersistence_SQLHelper* _sqlHelper;

}

@property (nonatomic,readonly) _EDThreadPersistence_ThreadMessages * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) long long threadDatabaseID;                                  //@synthesize threadDatabaseID=_threadDatabaseID - In the implementation block
@property (nonatomic,readonly) _EDThreadPersistence_SQLHelper * sqlHelper;                  //@synthesize sqlHelper=_sqlHelper - In the implementation block
@property (nonatomic,readonly) EDMessagePersistence * messagePersistence; 
@property (nonatomic,readonly) long long threadScopeDatabaseID; 
@property (nonatomic,readonly) EMThreadObjectID * threadObjectID; 
@property (nonatomic,readonly) NSArray * wrappedMessages; 
@property (nonatomic,readonly) EMThread * thread; 
-(id)debugDescription;
-(_EDThreadPersistence_ThreadMessages *)messages;
-(EMThread *)thread;
-(EDMessagePersistence *)messagePersistence;
-(EMThreadObjectID *)threadObjectID;
-(NSArray *)wrappedMessages;
-(long long)threadScopeDatabaseID;
-(_EDThreadPersistence_SQLHelper *)sqlHelper;
-(id)initWithMessages:(id)arg1 threadDatabaseID:(long long)arg2 ;
-(BOOL)addMailboxes;
-(BOOL)addSenders;
-(BOOL)addRecipientsForType:(unsigned long long)arg1 ;
-(id)updateNewestReadAndDisplayMessage;
-(long long)threadDatabaseID;
-(BOOL)updateNewestReadMessage:(id)arg1 ;
-(BOOL)updateDisplayMessageWithUnreadWrappedMessages:(id)arg1 ;
-(void)addKeyPathsForDisplayMessageChangeToKeyPaths:(id)arg1 ;
-(BOOL)setPriorityForDisplayMessageSender;
-(void)_ensureTempMessagesView;
-(id)_mailboxDatabaseIDsForWrappedMessages;
-(id)senderDatabaseIDsAndDates;
-(BOOL)addSenders:(id)arg1 ;
-(id)recipientDatabaseIDsAndDatesForRecipientType:(unsigned long long)arg1 ;
-(BOOL)addRecipients:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)dropTemporaryView;
@end

