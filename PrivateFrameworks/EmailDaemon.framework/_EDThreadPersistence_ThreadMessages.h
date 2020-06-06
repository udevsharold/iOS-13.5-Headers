/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EMThread, EDMessagePersistence, EMThreadObjectID, NSArray, _EDThreadPersistence_SQLHelper;

@interface _EDThreadPersistence_ThreadMessages : NSObject {

	EMThread* _thread;
	EDMessagePersistence* _messagePersistence;
	long long _threadScopeDatabaseID;
	EMThreadObjectID* _threadObjectID;
	NSArray* _wrappedMessages;
	_EDThreadPersistence_SQLHelper* _sqlHelper;

}

@property (nonatomic,readonly) _EDThreadPersistence_SQLHelper * sqlHelper;              //@synthesize sqlHelper=_sqlHelper - In the implementation block
@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;               //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) long long threadScopeDatabaseID;                         //@synthesize threadScopeDatabaseID=_threadScopeDatabaseID - In the implementation block
@property (nonatomic,readonly) EMThreadObjectID * threadObjectID;                       //@synthesize threadObjectID=_threadObjectID - In the implementation block
@property (nonatomic,readonly) NSArray * wrappedMessages;                               //@synthesize wrappedMessages=_wrappedMessages - In the implementation block
@property (nonatomic,readonly) EMThread * thread; 
-(id)debugDescription;
-(EMThread *)thread;
-(EDMessagePersistence *)messagePersistence;
-(BOOL)addThreadReplacingExisting:(BOOL)arg1 journaled:(BOOL)arg2 ;
-(EMThreadObjectID *)threadObjectID;
-(id)updateThreadTableWithJournaled:(BOOL)arg1 ;
-(NSArray *)wrappedMessages;
-(long long)threadScopeDatabaseID;
-(id)_threadQuery;
-(_EDThreadPersistence_SQLHelper *)sqlHelper;
-(id)_displayWrappedMessageWithNewestReadWrappedMessage:(id*)arg1 ;
-(id)_iterateNewestUnreadWrappedMessagesInWrappedMessages:(id)arg1 iteratorBlock:(/*^block*/id)arg2 ;
-(id)initWithSQLHelper:(id)arg1 messagePersistence:(id)arg2 threadScopeDatabaseID:(long long)arg3 threadObjectID:(id)arg4 wrappedMessages:(id)arg5 ;
-(id)_newestUnreadWrappedMessagesWithNewestReadWrappedMessage:(id*)arg1 ;
@end

