/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGUserDefaults : NSObject
+(void)initialize;
+(unsigned long long)maximumNumberOfVisibleItems;
+(unsigned long long)minimumNumberOfCuratedAssetsForInterestingMoments;
+(unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+(BOOL)isMemoriesNotificationDisabled;
+(BOOL)isMemoriesLivingOnFeedbackEnabled;
+(BOOL)suppressGraphLiveUpdate;
+(id)extendedCurationOptions;
+(void)setExtendedCurationOptions:(id)arg1 ;
+(unsigned long long)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
+(double)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
+(unsigned long long)maximumNumberOfTextFeaturesPerEvent;
+(BOOL)boundTextFeaturesPerEvent;
+(void)_registerDefaults;
+(BOOL)isShowingHolidayCalendarEvents;
+(BOOL)isAlwaysShowingHolidayCalendarEvents;
+(BOOL)isAutonamingDisabled;
+(BOOL)isAutonamingSignalPropertiesIngestAllowed;
+(BOOL)isAutonamingFilteredOutInferencesIngestAllowed;
+(BOOL)isRelationshipInferenceDisabled;
+(BOOL)isRelationshipSignalPropertiesIngestAllowed;
+(BOOL)isRelationshipFilteredOutInferencesIngestAllowed;
+(BOOL)isPublicEventsEnabled;
+(BOOL)incrementalHighlightEnrichmentIsEnabled;
+(BOOL)peopleSuggestionLearningIsEnabled;
+(BOOL)onThisDayHighlightKeyAssetRotationIsEnabled;
+(BOOL)isBehavioralCurationEnabled;
+(unsigned long long)maximumNumberOfVisibleRegularItems;
+(unsigned long long)minimumNumberOfVisibleItems;
@end
