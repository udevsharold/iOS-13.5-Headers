/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSEnumerator, NSString;

@interface PGRecentEditSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedAssets;
	NSEnumerator* _suggestedAssetEnumerator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestion;
-(id)suggestedAssetsInAssets:(id)arg1 ;
-(id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2 ;
-(id)editedAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(id)compositionControllerForAsset:(id)arg1 ;
@end

