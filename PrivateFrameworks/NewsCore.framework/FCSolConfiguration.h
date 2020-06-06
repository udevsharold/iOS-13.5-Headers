/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCSolConfiguration : NSObject {

	unsigned long long _maxArticleCombos;
	unsigned long long _heuristicSampleSize;
	unsigned long long _searchBranchMultiplier;
	double _searchBranchDecay;
	double _searchTimeLimit;
	double _tagSizeCoeff;
	double _tagFavoritedCoeff;
	double _tagAutoFavoritedCoeff;
	double _tagGroupableCoeff;
	double _tagArticleScoreCoeff;
	double _tagPersonalizationCoeff;
	double _tagSpecificityCoeff;
	double _optionalTagSpecificityScore;
	long long _heuristicOption;

}

@property (nonatomic,readonly) unsigned long long maxArticleCombos;                    //@synthesize maxArticleCombos=_maxArticleCombos - In the implementation block
@property (nonatomic,readonly) unsigned long long heuristicSampleSize;                 //@synthesize heuristicSampleSize=_heuristicSampleSize - In the implementation block
@property (nonatomic,readonly) unsigned long long searchBranchMultiplier;              //@synthesize searchBranchMultiplier=_searchBranchMultiplier - In the implementation block
@property (nonatomic,readonly) double searchBranchDecay;                               //@synthesize searchBranchDecay=_searchBranchDecay - In the implementation block
@property (nonatomic,readonly) double searchTimeLimit;                                 //@synthesize searchTimeLimit=_searchTimeLimit - In the implementation block
@property (nonatomic,readonly) double tagSizeCoeff;                                    //@synthesize tagSizeCoeff=_tagSizeCoeff - In the implementation block
@property (nonatomic,readonly) double tagFavoritedCoeff;                               //@synthesize tagFavoritedCoeff=_tagFavoritedCoeff - In the implementation block
@property (nonatomic,readonly) double tagAutoFavoritedCoeff;                           //@synthesize tagAutoFavoritedCoeff=_tagAutoFavoritedCoeff - In the implementation block
@property (nonatomic,readonly) double tagGroupableCoeff;                               //@synthesize tagGroupableCoeff=_tagGroupableCoeff - In the implementation block
@property (nonatomic,readonly) double tagArticleScoreCoeff;                            //@synthesize tagArticleScoreCoeff=_tagArticleScoreCoeff - In the implementation block
@property (nonatomic,readonly) double tagPersonalizationCoeff;                         //@synthesize tagPersonalizationCoeff=_tagPersonalizationCoeff - In the implementation block
@property (nonatomic,readonly) double tagSpecificityCoeff;                             //@synthesize tagSpecificityCoeff=_tagSpecificityCoeff - In the implementation block
@property (nonatomic,readonly) double optionalTagSpecificityScore;                     //@synthesize optionalTagSpecificityScore=_optionalTagSpecificityScore - In the implementation block
@property (nonatomic,readonly) long long heuristicOption;                              //@synthesize heuristicOption=_heuristicOption - In the implementation block
+(id)configurationWithTreatment:(id)arg1 deviceIsiPad:(BOOL)arg2 ;
-(double)optionalTagSpecificityScore;
-(id)initWithHeuristicSampleSize:(unsigned long long)arg1 searchBranchMultiplier:(unsigned long long)arg2 searchBranchDecay:(double)arg3 searchTimeLimit:(double)arg4 tagSizeCoeff:(double)arg5 tagFavoritedCoeff:(double)arg6 tagAutoFavoritedCoeff:(double)arg7 tagGroupableCoeff:(double)arg8 tagArticleScoreCoeff:(double)arg9 tagPersonalizationCoeff:(double)arg10 tagSpecificityCoeff:(double)arg11 optionalTagSpecificityScore:(double)arg12 heuristicOption:(long long)arg13 ;
-(double)searchTimeLimit;
-(unsigned long long)maxArticleCombos;
-(unsigned long long)heuristicSampleSize;
-(unsigned long long)searchBranchMultiplier;
-(double)searchBranchDecay;
-(double)tagSizeCoeff;
-(double)tagFavoritedCoeff;
-(double)tagAutoFavoritedCoeff;
-(double)tagGroupableCoeff;
-(double)tagArticleScoreCoeff;
-(double)tagPersonalizationCoeff;
-(double)tagSpecificityCoeff;
-(long long)heuristicOption;
@end

