/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSQLiteConnection.h>

@class NSString;

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection {

	BOOL _protectedDatabaseAttached;
	NSString* _protectedDatabasePath;
	NSString* _protectedDatabaseName;

}

@property (nonatomic,retain) NSString * protectedDatabasePath;              //@synthesize protectedDatabasePath=_protectedDatabasePath - In the implementation block
@property (nonatomic,retain) NSString * protectedDatabaseName;              //@synthesize protectedDatabaseName=_protectedDatabaseName - In the implementation block
@property (nonatomic,readonly) BOOL protectedDatabaseAttached;              //@synthesize protectedDatabaseAttached=_protectedDatabaseAttached - In the implementation block
-(BOOL)protectedDatabaseAttached;
-(NSString *)protectedDatabaseName;
-(NSString *)protectedDatabasePath;
-(void)setProtectedDatabaseName:(NSString *)arg1 ;
-(id)_vfsModuleName;
-(id)initWithUnprotectedDatabaseFileName:(id)arg1 protectedDatabaseFileName:(id)arg2 inDirectory:(id)arg3 protectedDatabaseName:(id)arg4 errorCode:(int*)arg5 ;
-(int)attachProtectedDatabase;
-(void)dettachProtectedDatabase;
-(void)setProtectedDatabasePath:(NSString *)arg1 ;
@end

