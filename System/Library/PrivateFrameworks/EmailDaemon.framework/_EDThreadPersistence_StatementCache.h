/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDPersistenceDatabaseConnection, NSMutableDictionary;

@interface _EDThreadPersistence_StatementCache : NSObject {

	EDPersistenceDatabaseConnection* _connection;
	NSMutableDictionary* _preparedStatements;

}

@property (nonatomic,readonly) NSMutableDictionary * preparedStatements;                  //@synthesize preparedStatements=_preparedStatements - In the implementation block
@property (nonatomic,readonly) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(EDPersistenceDatabaseConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(id)preparedStatementForQueryString:(id)arg1 ;
-(NSMutableDictionary *)preparedStatements;
@end

