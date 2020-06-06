/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CKDatabase;

@interface VCCKVoiceShortcutFetcher : NSObject {

	BOOL _completed;
	NSObject*<OS_dispatch_queue> _queue;
	CKDatabase* _database;
	long long _qualityOfService;
	/*^block*/id _recordHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                      //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy,readonly) id recordHandler;                           //@synthesize recordHandler=_recordHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL completed;                                    //@synthesize completed=_completed - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addOperation:(id)arg1 ;
-(void)start;
-(long long)qualityOfService;
-(CKDatabase *)database;
-(BOOL)completed;
-(id)completionHandler;
-(void)setCompleted:(BOOL)arg1 ;
-(void)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithRecordHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchRecordZones;
-(void)fetchRecordsFromZone:(id)arg1 ;
-(id)recordHandler;
@end

