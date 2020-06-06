/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface DESRecordSet : NSObject {

	/*^block*/id _dataFetcher;
	NSDictionary* _nativeRecords;
	NSDictionary* _nativeRecordInfo;
	NSArray* _coreDuetEvents;
	NSDictionary* _predicate;

}

@property (nonatomic,copy,readonly) NSDictionary * nativeRecords;                 //@synthesize nativeRecords=_nativeRecords - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * nativeRecordInfo;              //@synthesize nativeRecordInfo=_nativeRecordInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * coreDuetEvents;                     //@synthesize coreDuetEvents=_coreDuetEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSDictionary * predicate;                          //@synthesize predicate=_predicate - In the implementation block
+(void)initialize;
-(unsigned long long)count;
-(NSDictionary *)predicate;
-(id)_initWithNativeRecords:(id)arg1 nativeRecordInfo:(id)arg2 coreDuetEvents:(id)arg3 predicate:(id)arg4 dataFetcher:(/*^block*/id)arg5 ;
-(id)nativeRecordInfoForRecordUUID:(id)arg1 ;
-(id)nativeRecordDataForRecordUUID:(id)arg1 error:(id*)arg2 ;
-(id)_anyNativeRecordUUID;
-(id)filteredRecordSetWithJSONPredicate:(id)arg1 ;
-(NSDictionary *)nativeRecords;
-(NSDictionary *)nativeRecordInfo;
-(NSArray *)coreDuetEvents;
@end

