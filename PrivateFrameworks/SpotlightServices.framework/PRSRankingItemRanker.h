/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpotlightServices/SpotlightServices-Structs.h>
@class PRSQueryRankingConfiguration, NSString, NSMapTable;

@interface PRSRankingItemRanker : NSObject {

	PRSQueryRankingConfiguration* _rankingConfiguration;
	BOOL _isInternalDevice;
	BOOL _policyDisabled;
	BOOL _isCancelled;
	BOOL _isCJK;
	BOOL _hasPolicyPhraseMatch;
	BOOL _hasParsecPolicyPhraseMatch;
	BOOL _exact;
	float _lastIsSpaceFeature;
	NSString* _keyboardLanguage;
	NSString* _searchString;
	NSString* _userQueryString;
	unsigned long long _queryTermCount;
	NSMapTable* _bundleFeatures;
	double _experimentalWeight1;
	double _experimentalWeight2;
	NSString* _meContactIdentifier;
	double _currentTime;

}

@property (nonatomic,retain) NSString * keyboardLanguage;                  //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,retain) NSString * searchString;                      //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSString * userQueryString;                   //@synthesize userQueryString=_userQueryString - In the implementation block
@property (assign) unsigned long long queryTermCount;                      //@synthesize queryTermCount=_queryTermCount - In the implementation block
@property (assign) BOOL isInternalDevice;                                  //@synthesize isInternalDevice=_isInternalDevice - In the implementation block
@property (nonatomic,retain) NSMapTable * bundleFeatures;                  //@synthesize bundleFeatures=_bundleFeatures - In the implementation block
@property (assign,nonatomic) double experimentalWeight1;                   //@synthesize experimentalWeight1=_experimentalWeight1 - In the implementation block
@property (assign,nonatomic) double experimentalWeight2;                   //@synthesize experimentalWeight2=_experimentalWeight2 - In the implementation block
@property (nonatomic,retain) NSString * meContactIdentifier;               //@synthesize meContactIdentifier=_meContactIdentifier - In the implementation block
@property (assign,nonatomic) BOOL policyDisabled;                          //@synthesize policyDisabled=_policyDisabled - In the implementation block
@property (assign,nonatomic) float lastIsSpaceFeature;                     //@synthesize lastIsSpaceFeature=_lastIsSpaceFeature - In the implementation block
@property (assign) BOOL isCancelled;                                       //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign) BOOL isCJK;                                             //@synthesize isCJK=_isCJK - In the implementation block
@property (assign,nonatomic) double currentTime;                           //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) BOOL hasPolicyPhraseMatch;                    //@synthesize hasPolicyPhraseMatch=_hasPolicyPhraseMatch - In the implementation block
@property (assign,nonatomic) BOOL hasParsecPolicyPhraseMatch;              //@synthesize hasParsecPolicyPhraseMatch=_hasParsecPolicyPhraseMatch - In the implementation block
@property (assign,nonatomic) BOOL exact;                                   //@synthesize exact=_exact - In the implementation block
+(void)clearState;
+(id)phoneFavoritesCopy;
+(BOOL)isCJK;
+(id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1 ;
+(id)importantAttributesForBundle:(id)arg1 ;
+(id)importantAttributesForParsecBundle:(id)arg1 ;
+(void)setDockApps:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)isCancelled;
-(void)activate;
-(void)deactivate;
-(double)currentTime;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)setIsCancelled:(BOOL)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(void)setQueryTermCount:(unsigned long long)arg1 ;
-(unsigned long long)queryTermCount;
-(BOOL)isInternalDevice;
-(NSString *)meContactIdentifier;
-(void)setMeContactIdentifier:(NSString *)arg1 ;
-(void)setIsInternalDevice:(BOOL)arg1 ;
-(id)rankingConfiguration;
-(BOOL)wasItemCreatedWithinAWeek:(id)arg1 ;
-(void)prepareParsecResults:(id)arg1 inBundle:(id)arg2 ;
-(BOOL)hasParsecPolicyPhraseMatch;
-(float*)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2 ;
-(BOOL)isCJK;
-(id)initWithSearchString:(id)arg1 language:(id)arg2 isCJK:(BOOL)arg3 experimentalWeight1:(double)arg4 experimentalWeight2:(double)arg5 currentTime:(double)arg6 ;
-(id)initWithSearchString:(id)arg1 userQueryString:(id)arg2 language:(id)arg3 isCJK:(BOOL)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 currentTime:(double)arg7 ;
-(id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(BOOL)arg6 spotlightQuery:(id)arg7 userQuery:(id)arg8 whyQuery:(unsigned long long)arg9 isPeopleSearch:(BOOL)arg10 ;
-(NSMapTable *)bundleFeatures;
-(void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short*)arg2 relRankFeatureOut:(unsigned short*)arg3 ;
-(void)pickMostRecentDateForItem:(id)arg1 pastItems:(id*)arg2 futureItems:(id*)arg3 ;
-(void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2 ;
-(void)updateResultSetContext:(resultset_computation_ctx*)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3 ;
-(void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(resultset_computation_ctx*)arg2 uniqueScores:(id)arg3 ;
-(void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2 ;
-(void)populateLocalResultSetDateFeaturesForItems:(id)arg1 ;
-(void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2 ;
-(/*^block*/id)comparatorByJoiningComparator:(/*^block*/id)arg1 withPredicate:(id)arg2 ;
-(double)experimentalWeight1;
-(double)experimentalWeight2;
-(void)updateScoresForPreparedItems:(id)arg1 isCJK:(BOOL)arg2 clientBundle:(id)arg3 ;
-(void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2 ;
-(void)computePolicyFeaturesForBundleItems:(id)arg1 isCJK:(BOOL)arg2 ;
-(void)rerankItemsWithPolicyForBundleItems:(id)arg1 isCJK:(BOOL)arg2 ;
-(BOOL)policyDisabled;
-(void)setRenderEngagementFeaturesForItemAsShorts:(id)arg1 counts:(short)arg2 isRender:(BOOL)arg3 bundleDict:(id)arg4 ;
-(void)resetbundleFeaturesScratchBuf:(float*)arg1 ;
-(float)lastIsSpaceFeature;
-(id)initWithSearchString:(id)arg1 language:(id)arg2 currentTime:(double)arg3 ;
-(id)initWithSearchString:(id)arg1 userQueryString:(id)arg2 language:(id)arg3 currentTime:(double)arg4 ;
-(id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(BOOL)arg6 spotlightQuery:(id)arg7 ;
-(void)updateScoresForPreparedItems:(id)arg1 ;
-(void)setRenderEngagementFeaturesForItem:(id)arg1 counts:(id)arg2 isRender:(BOOL)arg3 bundleDict:(id)arg4 ;
-(void)prepareItems:(id)arg1 inBundle:(id)arg2 ;
-(NSString *)userQueryString;
-(void)setUserQueryString:(NSString *)arg1 ;
-(void)setBundleFeatures:(NSMapTable *)arg1 ;
-(void)setExperimentalWeight1:(double)arg1 ;
-(void)setExperimentalWeight2:(double)arg1 ;
-(void)setPolicyDisabled:(BOOL)arg1 ;
-(void)setLastIsSpaceFeature:(float)arg1 ;
-(void)setIsCJK:(BOOL)arg1 ;
-(BOOL)hasPolicyPhraseMatch;
-(void)setHasPolicyPhraseMatch:(BOOL)arg1 ;
-(void)setHasParsecPolicyPhraseMatch:(BOOL)arg1 ;
-(BOOL)exact;
-(void)setExact:(BOOL)arg1 ;
@end

