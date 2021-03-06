/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EMObjectID, EDInMemoryThreadQueryHandler, EDPrecomputedThreadQueryHandler, EDThreadMigrator;

@interface _EDThreadQueryUnderlyingHandlers : NSObject {

	EMObjectID* _inMemoryObservationID;
	EMObjectID* _precomputedObservationID;
	EDInMemoryThreadQueryHandler* _inMemoryQueryHandler;
	EDPrecomputedThreadQueryHandler* _precomputedQueryHandler;
	EDThreadMigrator* _threadMigrator;

}

@property (nonatomic,retain) EMObjectID * inMemoryObservationID;                                     //@synthesize inMemoryObservationID=_inMemoryObservationID - In the implementation block
@property (nonatomic,retain) EMObjectID * precomputedObservationID;                                  //@synthesize precomputedObservationID=_precomputedObservationID - In the implementation block
@property (nonatomic,retain) EDInMemoryThreadQueryHandler * inMemoryQueryHandler;                    //@synthesize inMemoryQueryHandler=_inMemoryQueryHandler - In the implementation block
@property (nonatomic,retain) EDPrecomputedThreadQueryHandler * precomputedQueryHandler;              //@synthesize precomputedQueryHandler=_precomputedQueryHandler - In the implementation block
@property (nonatomic,retain) EDThreadMigrator * threadMigrator;                                      //@synthesize threadMigrator=_threadMigrator - In the implementation block
-(EMObjectID *)inMemoryObservationID;
-(EMObjectID *)precomputedObservationID;
-(BOOL)_isCurrentObservationToken:(id)arg1 ;
-(void)setInMemoryObservationID:(EMObjectID *)arg1 ;
-(void)setPrecomputedObservationID:(EMObjectID *)arg1 ;
-(EDInMemoryThreadQueryHandler *)inMemoryQueryHandler;
-(void)setInMemoryQueryHandler:(EDInMemoryThreadQueryHandler *)arg1 ;
-(EDPrecomputedThreadQueryHandler *)precomputedQueryHandler;
-(void)setPrecomputedQueryHandler:(EDPrecomputedThreadQueryHandler *)arg1 ;
-(EDThreadMigrator *)threadMigrator;
-(void)setThreadMigrator:(EDThreadMigrator *)arg1 ;
@end

