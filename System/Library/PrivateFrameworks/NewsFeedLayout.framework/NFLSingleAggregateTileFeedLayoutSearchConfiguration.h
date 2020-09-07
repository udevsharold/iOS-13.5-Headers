/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedLayoutSearchConfiguration.h>

@class NSString, NSArray;

@interface NFLSingleAggregateTileFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration> {

	BOOL _showAccessoryText;
	Class _subBatchLayoutTilingOperationClass;
	Class _rankedLayoutGenerationOperationClass;
	long long _cellType;
	long long _rowSpan;

}

@property (nonatomic,retain) Class subBatchLayoutTilingOperationClass;                          //@synthesize subBatchLayoutTilingOperationClass=_subBatchLayoutTilingOperationClass - In the implementation block
@property (nonatomic,retain) Class rankedLayoutGenerationOperationClass;                        //@synthesize rankedLayoutGenerationOperationClass=_rankedLayoutGenerationOperationClass - In the implementation block
@property (assign,nonatomic) long long cellType;                                                //@synthesize cellType=_cellType - In the implementation block
@property (assign,nonatomic) long long rowSpan;                                                 //@synthesize rowSpan=_rowSpan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showAccessoryText;              //@synthesize showAccessoryText=_showAccessoryText - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredTileInfoBatchSize; 
@property (nonatomic,readonly) NSArray * allRowTypes; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)rowSpan;
-(long long)cellType;
-(void)setCellType:(long long)arg1 ;
-(void)setRowSpan:(long long)arg1 ;
-(void)setShowAccessoryText:(BOOL)arg1 ;
-(NSArray *)allRowTypes;
-(id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1 ;
-(BOOL)isShowingAccessoryText;
-(id)descriptionForRowType:(unsigned long long)arg1 ;
-(double)transitionRankFromNoneToRowType:(unsigned long long)arg1 ;
-(double)transitionRankFromRowTypeToNone:(unsigned long long)arg1 ;
-(double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2 ;
-(unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1 ;
-(Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1 ;
-(SCD_Struct_NF7)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2 ;
-(Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1 ;
-(unsigned long long)preferredTileInfoBatchSize;
-(BOOL)supportsTileInfoType:(unsigned long long)arg1 ;
-(Class)subBatchLayoutTilingOperationClass;
-(Class)rankedLayoutGenerationOperationClass;
-(id)initWithSubBatchLayoutTilingOperationClass:(Class)arg1 rankedLayoutGenerationOperationClass:(Class)arg2 cellType:(long long)arg3 rowSpan:(long long)arg4 ;
-(void)setSubBatchLayoutTilingOperationClass:(Class)arg1 ;
-(void)setRankedLayoutGenerationOperationClass:(Class)arg1 ;
@end
