/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroAutoEditUtilities : NSObject
+(BOOL)hasRangeOfType:(unsigned long long)arg1 within:(int)arg2 ofEdge:(int)arg3 onClip:(id)arg4 frameRate:(int)arg5 ;
+(BOOL)hasVoiceOrFaceRangeNearEndForClip:(id)arg1 projectFrameRate:(int)arg2 ;
+(BOOL)hasVoiceOrFaceRangeNearStartForClip:(id)arg1 projectFrameRate:(int)arg2 ;
+(id)paddedRangeModelsOfType:(unsigned long long)arg1 clip:(id)arg2 projectFrameRate:(int)arg3 ;
+(int)endTimeForClip:(id)arg1 ;
+(BOOL)hasRangeOfType:(unsigned long long)arg1 overlappingRange:(id)arg2 clip:(id)arg3 frameRate:(int)arg4 ;
+(int)distanceToRange:(id)arg1 fromEdge:(int)arg2 onClip:(id)arg3 frameRate:(int)arg4 ;
+(double)correctDuration:(double)arg1 toBlueprint:(id)arg2 videoIdeal:(double)arg3 videoMin:(double)arg4 videoMax:(double)arg5 ;
+(int)maxDurationRespectingTrimmingForClip:(id)arg1 projectFrameRate:(int)arg2 blueprint:(id)arg3 ;
+(int)distanceToRangeOfType:(unsigned long long)arg1 fromEdge:(int)arg2 onClip:(id)arg3 frameRate:(int)arg4 ;
+(id)imageForVideoPHAsset:(id)arg1 startTime:(int)arg2 duration:(int)arg3 ;
+(id)imageForImagePHAsset:(id)arg1 ;
+(id)avAssetForPHAsset:(id)arg1 ;
+(int)minutesBetween:(id)arg1 and:(id)arg2 ;
+(BOOL)rangeModel:(id)arg1 isNearEdgeOfClip:(id)arg2 frameRate:(int)arg3 ;
+(id)correctRangeModelDuration:(id)arg1 forClip:(id)arg2 toBlueprint:(id)arg3 projectFrameRate:(int)arg4 videoIdeal:(double)arg5 videoMin:(double)arg6 videoMax:(double)arg7 ;
+(BOOL)titleClipDurationIsShort:(id)arg1 forFrameRate:(int)arg2 ;
@end

