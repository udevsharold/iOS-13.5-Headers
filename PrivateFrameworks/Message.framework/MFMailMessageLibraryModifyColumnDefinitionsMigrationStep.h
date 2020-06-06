/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) EFSQLSchema * schema; 
-(EDPersistenceDatabaseConnection *)connection;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
-(EFSQLSchema *)schema;
-(BOOL)performMigrationStep;
-(id)initWithSQLiteConnection:(id)arg1 ;
-(id)messagesTableStubSchema;
-(id)mailboxesTableStubSchema;
-(id)serverMessagesTableSchema;
-(id)serverLabelsTableSchema;
-(id)localMessageActionsTableSchema;
-(id)actionMessagesTableSchema;
-(id)actionLabelsTableSchema;
-(id)actionFlagsTableSchema;
@end

