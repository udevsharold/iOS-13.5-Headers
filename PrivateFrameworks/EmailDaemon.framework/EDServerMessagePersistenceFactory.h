/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistenceDatabase, EDGmailLabelPersistence;

@interface EDServerMessagePersistenceFactory : NSObject {

	EDPersistenceDatabase* _database;
	EDGmailLabelPersistence* _gmailLabelPersistence;

}

@property (nonatomic,readonly) EDPersistenceDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDGmailLabelPersistence * gmailLabelPersistence;              //@synthesize gmailLabelPersistence=_gmailLabelPersistence - In the implementation block
-(id)init;
-(EDPersistenceDatabase *)database;
-(EDGmailLabelPersistence *)gmailLabelPersistence;
-(id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 ;
-(id)serverMessagePersistenceForMailboxURL:(id)arg1 ;
@end

