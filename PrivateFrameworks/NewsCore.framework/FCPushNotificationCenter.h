/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPushNotificationHandling.h>

@class FCCKPrivateDatabase, NSMapTable, NSString;

@interface FCPushNotificationCenter : NSObject <FCPushNotificationHandling> {

	BOOL _syncingEnabled;
	FCCKPrivateDatabase* _privateDatabase;
	NSMapTable* _recordZoneObservers;

}

@property (nonatomic,retain) FCCKPrivateDatabase * privateDatabase;                    //@synthesize privateDatabase=_privateDatabase - In the implementation block
@property (nonatomic,retain) NSMapTable * recordZoneObservers;                         //@synthesize recordZoneObservers=_recordZoneObservers - In the implementation block
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled;              //@synthesize syncingEnabled=_syncingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isSyncingEnabled;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(FCCKPrivateDatabase *)privateDatabase;
-(void)removeRecordZoneObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 forChangesToRecordZoneID:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enableSyncing;
-(void)disableSyncing;
-(void)prepareForUse;
-(NSMapTable *)recordZoneObservers;
-(void)_handlePrivateDatabaseNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)serverChangeTokenKey;
-(void)_fetchChangesForRecordZoneIDs:(id)arg1 ;
-(void)_deleteLocalDataForRecordZoneIDs:(id)arg1 ;
-(void)_saveDatabaseServerChangeToken:(id)arg1 ;
-(void)handleRemoteNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithPrivateDatabase:(id)arg1 storeDirectory:(id)arg2 ;
-(void)setPrivateDatabase:(FCCKPrivateDatabase *)arg1 ;
-(void)setRecordZoneObservers:(NSMapTable *)arg1 ;
@end

