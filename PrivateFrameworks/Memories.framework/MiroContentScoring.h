/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroContentScoring : NSObject
+(int)isPortrait;
+(int)hasSmile;
+(int)isLandscape;
+(int)posterAsset;
+(int)liveValueForKey:(id)arg1 ;
+(int)videoBaseScore;
+(int)videoIsSloMo;
+(int)videoIsTimelapse;
+(int)videoHasVoiceRange;
+(int)videoHasFaceRange;
+(int)videoCloseToIdealDuration;
+(int)videoCloseToIdealPadding;
+(int)videoWithinBlueprintRange;
+(int)videoNotWithinBlueprintRange;
+(int)videoDurationTooShort;
+(int)sloMoHasUserDefinedRange;
+(int)nonPhotoAssetScore;
+(int)assetResolutionTooSmall;
+(int)imageBaseScore;
+(int)imageIsPanorama;
+(int)imageIsLandscapePanorama;
+(int)imageIsPortraitPanorama;
+(int)imageHDR;
+(int)imageNonHDRofPair;
+(int)imageIsBlurry;
+(int)imageIsBurst;
+(int)burstAutoPick;
+(int)burstUserPick;
+(int)burstRepresentativePick;
+(int)photoIsFavorite;
+(int)photoIsHidden;
+(int)photoIsUserEdited;
+(int)userAlbumPick;
+(int)assetWasShared;
+(int)assetWasUserAdded;
+(int)assetWasUserRemoved;
+(int)hasWink;
+(int)hasBlink;
+(int)hasCloseUpFace;
+(int)assetWithTheGreatestNumberOfDesirableRanges;
+(int)numberOfDesirableRangesToBoostScore;
+(int)multipleDesirableRangesBoost;
+(int)clusterBestVideo;
+(int)clusterBestBurst;
+(int)clusterBestVideoFoundCounterweight;
+(int)clusterBest;
+(int)clusterSecond;
+(int)clusterThird;
+(int)clusterFourth;
+(int)clusterFifth;
+(int)clusterOther;
+(int)minTheoriticalScore;
+(int)maxTheoriticalScore;
@end

