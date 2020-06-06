/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)log;
-(EDPersistenceDatabaseConnection *)connection;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
-(BOOL)performMigrationStep;
-(id)_serverMessagesTableDefinition;
-(id)_serverMessagesMessageIndexDefinition;
-(id)_serverLabelsTableDefinition;
-(id)_localMessageActionsTableDefinition;
-(id)_localMessageActionsMailboxRowIDIndexDefinition;
-(id)_actionMessagesTableDefinition;
-(id)_actionMessagesActionIndexDefinition;
-(id)_actionMessagesMessageIndexDefinition;
-(id)_actionMessagesDestinationMessageIndexDefinition;
-(id)_actionLabelsTableDefinition;
-(id)_actionLabelsActionIndexDefinition;
-(id)_actionLabelsLabelIndexDefinition;
-(id)_actionFlagsTableDefinition;
-(id)_actionFlagsActionIndexDefinition;
-(BOOL)_populateServerMessages;
-(id)_offlineCacheOperations;
-(id)initWithSQLiteConnection:(id)arg1 ;
@end

