/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult {

	NSDictionary* _groupingResultsByStrategyIdentifier;

}

@property (nonatomic,retain,readonly) NSDictionary * groupingResultsByStrategyIdentifier;              //@synthesize groupingResultsByStrategyIdentifier=_groupingResultsByStrategyIdentifier - In the implementation block
-(void)dealloc;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4 ;
-(NSDictionary *)groupingResultsByStrategyIdentifier;
@end

