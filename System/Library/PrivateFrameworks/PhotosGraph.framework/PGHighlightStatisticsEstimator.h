/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGManager, NSDictionary, NSString;

@interface PGHighlightStatisticsEstimator : NSObject {

	PGManager* _manager;
	NSDictionary* _highlightEstimatesDictionary;

}

@property (retain) PGManager * manager;                                                  //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSDictionary * highlightEstimatesDictionary;              //@synthesize highlightEstimatesDictionary=_highlightEstimatesDictionary - In the implementation block
@property (nonatomic,readonly) NSString * highlightEstimatesDescription; 
-(id)initWithManager:(id)arg1 ;
-(PGManager *)manager;
-(void)setManager:(PGManager *)arg1 ;
-(NSDictionary *)highlightEstimatesDictionary;
-(NSString *)highlightEstimatesDescription;
-(id)_createHighlightEstimatesDictionary;
-(BOOL)_isUtilityAsset:(id)arg1 ;
-(unsigned long long)_numberOfUtilityAssetsForAssetCollection:(id)arg1 ;
-(id)_collectDetailsForTripsAndWeekends:(id)arg1 ;
-(id)_collectDetailsForAggregations:(id)arg1 ;
-(id)_highlightEstimatesDescriptionWithData:(id)arg1 ;
-(id)_stringDescriptionForTripWeekendDetails:(id)arg1 ;
-(id)_stringDescriptionForHomeWorkAggregations:(id)arg1 ;
-(id)_stringDescriptionForMomentsDetails:(id)arg1 ;
@end

