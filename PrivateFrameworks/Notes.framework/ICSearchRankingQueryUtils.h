/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICSearchRankingQueryUtils : NSObject
+(id)spotlightPrefixRankingQueryDefinition;
+(id)spotlightSubstringRankingQueryDefinition;
+(id)spotlightMixedRankingQueryDefinition;
+(id)rankingQueryForDescriptor:(id)arg1 searchString:(id)arg2 ;
+(id)spotlightPrefixRankingQueryBitDictionary;
+(id)spotlightSubstringRankingQueryBitDictionary;
+(id)spotlightMixedRankingQueryBitDictionary;
+(long long)bitOfRankingQueryDescriptor:(id)arg1 inRankingQueryBitDictionary:(id)arg2 ;
+(id)rankingQueriesForSearchString:(id)arg1 withRankingQueryDefinition:(id)arg2 ;
@end

