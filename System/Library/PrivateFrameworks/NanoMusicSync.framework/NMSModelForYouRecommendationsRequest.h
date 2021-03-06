/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPModelForYouRecommendationsRequest.h>

@class NSArray, NSDictionary;

@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest {

	BOOL _nms_useCachedDataOnly;
	NSArray* _nms_cachedRecommendationsArray;
	NSDictionary* _nms_cachedStoreItemMetadataResults;

}

@property (assign,nonatomic) BOOL nms_useCachedDataOnly;                                     //@synthesize nms_useCachedDataOnly=_nms_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) NSArray * nms_cachedRecommendationsArray;                       //@synthesize nms_cachedRecommendationsArray=_nms_cachedRecommendationsArray - In the implementation block
@property (nonatomic,retain) NSDictionary * nms_cachedStoreItemMetadataResults;              //@synthesize nms_cachedStoreItemMetadataResults=_nms_cachedStoreItemMetadataResults - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(NSArray *)nms_cachedRecommendationsArray;
-(NSDictionary *)nms_cachedStoreItemMetadataResults;
-(void)setNms_useCachedDataOnly:(BOOL)arg1 ;
-(void)setNms_cachedRecommendationsArray:(NSArray *)arg1 ;
-(void)setNms_cachedStoreItemMetadataResults:(NSDictionary *)arg1 ;
-(BOOL)nms_useCachedDataOnly;
@end

