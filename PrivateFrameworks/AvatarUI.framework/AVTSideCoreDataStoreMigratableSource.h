/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTStoreBackendMigratableSource.h>

@protocol AVTCoreDataPersistentStoreLocalConfiguration;
@class AVTCoreEnvironment, NSString;

@interface AVTSideCoreDataStoreMigratableSource : NSObject <AVTStoreBackendMigratableSource> {

	id<AVTCoreDataPersistentStoreLocalConfiguration> _configuration;
	AVTCoreEnvironment* _environment;

}

@property (nonatomic,readonly) id<AVTCoreDataPersistentStoreLocalConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;                                            //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVTCoreEnvironment *)environment;
-(id<AVTCoreDataPersistentStoreLocalConfiguration>)configuration;
-(BOOL)migrationNeeded;
-(id)initWithConfiguration:(id)arg1 environment:(id)arg2 ;
-(id)createSourceBackend;
-(BOOL)finalizeMigration:(id*)arg1 ;
-(id)migratedRecordFromRecord:(id)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3 ;
@end

