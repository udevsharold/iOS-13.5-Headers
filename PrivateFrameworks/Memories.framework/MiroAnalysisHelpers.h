/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/VEiOSSharedObject.h>

@interface MiroAnalysisHelpers : VEiOSSharedObject
+(int)timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2 ;
+(id)buildTransientAggregateRangeTreeWithPersistentRanges:(id)arg1 masterSceneType:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(void)cancelAllAnalysisRequests;
-(void)dispatchFullOutOfProcessAnalysisForAssets:(id)arg1 ;
-(void)analyzeUsingClientSideAnalyzerWithAsset:(id)arg1 performedAnalysisTypes:(unsigned long long)arg2 ranges:(id)arg3 options:(unsigned long long)arg4 relatedSortedAssets:(id)arg5 cancelGroup:(id)arg6 progressHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
@end

