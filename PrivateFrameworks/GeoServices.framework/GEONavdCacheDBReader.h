/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBReader.h>

@interface GEONavdCacheDBReader : GEODBReader {

	sqlite3_stmtRef _sqlReadAllEntries;
	sqlite3_stmtRef _sqlReadEntriesForHash;
	sqlite3_stmtRef _sqlReadKeysForHash;
	sqlite3_stmtRef _sqlReadNextTimerTimeStamp;
	sqlite3_stmtRef _sqlReadEntriesBeforeTimeStamp;
	sqlite3_stmtRef _sqlReadRowIdsOfEntriesBeforeTimeStamp;
	sqlite3_stmtRef _sqlReadEntryWithRowId;
	sqlite3_stmtRef _sqlCountEntries;

}
-(void)dealloc;
-(void)_openDB;
-(void)_cacheEntryForNextRefreshWithHandler:(/*^block*/id)arg1 ;
-(void)_cacheRowIdsOfEntriesBeforeTimeStamp:(double)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheKeysForHash:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheEntryWithRowId:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_cacheEntriesForHash:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_allCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(long long)_numberOfEntries;
-(void)_openDBIfNotAlreadyOpen;
-(void)_cacheEntriesBeforeTimeStamp:(double)arg1 withHandler:(/*^block*/id)arg2 ;
@end

