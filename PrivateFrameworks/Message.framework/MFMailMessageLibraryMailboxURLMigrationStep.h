/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _sqliteConnection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * sqliteConnection;              //@synthesize sqliteConnection=_sqliteConnection - In the implementation block
-(BOOL)performMigrationStep;
-(id)initWithSQLiteConnection:(id)arg1 ;
-(BOOL)_renameMailboxDataFolders:(sqlite3Ref)arg1 ;
-(BOOL)_renameMailboxURLsForMailAccount:(id)arg1 inSQLiteDB:(sqlite3Ref)arg2 ;
-(void)_purgeFoldersMatchingPatterns:(id)arg1 ;
-(BOOL)_updateMailboxURLsInSQLitedb:(sqlite3Ref)arg1 withOldURLToNewURLMap:(id)arg2 ;
-(EDPersistenceDatabaseConnection *)sqliteConnection;
-(void)setSqliteConnection:(EDPersistenceDatabaseConnection *)arg1 ;
@end

