/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation {

	/*^block*/id _aggregateZonePCSCompletionBlock;
	NSArray* _sourceZoneIDs;
	CKRecordZone* _targetZone;

}

@property (nonatomic,copy) NSArray * sourceZoneIDs;                         //@synthesize sourceZoneIDs=_sourceZoneIDs - In the implementation block
@property (nonatomic,copy) CKRecordZone * targetZone;                       //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,copy) id aggregateZonePCSCompletionBlock;              //@synthesize aggregateZonePCSCompletionBlock=_aggregateZonePCSCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(NSArray *)sourceZoneIDs;
-(void)setSourceZoneIDs:(NSArray *)arg1 ;
-(CKRecordZone *)targetZone;
-(void)setTargetZone:(CKRecordZone *)arg1 ;
-(id)aggregateZonePCSCompletionBlock;
-(void)setAggregateZonePCSCompletionBlock:(id)arg1 ;
-(id)initWithSourceZoneIDs:(id)arg1 targetZone:(id)arg2 ;
@end

