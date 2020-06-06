/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, NSMutableDictionary, NSDictionary;

@interface CEKLightingFrameCache : NSObject {

	NSIndexSet* __availableAbsoluteAngles;
	NSMutableDictionary* __foregroundFramesByAvailableAngle;
	NSDictionary* __backgroundFrameMapsByLightingType;

}

@property (nonatomic,readonly) NSIndexSet * _availableAbsoluteAngles;                              //@synthesize _availableAbsoluteAngles=__availableAbsoluteAngles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _foregroundFramesByAvailableAngle;              //@synthesize _foregroundFramesByAvailableAngle=__foregroundFramesByAvailableAngle - In the implementation block
@property (nonatomic,retain) NSDictionary * _backgroundFrameMapsByLightingType;                    //@synthesize _backgroundFrameMapsByLightingType=__backgroundFrameMapsByLightingType - In the implementation block
@property (nonatomic,readonly) unsigned long long angleCount; 
-(id)init;
-(unsigned long long)angleCount;
-(BOOL)_needsForegroundFrames;
-(NSIndexSet *)_availableAbsoluteAngles;
-(id)_renderForegroundFramesForAbsoluteAngles:(id)arg1 scale:(double)arg2 ;
-(void)set_foregroundFramesByAvailableAngle:(NSMutableDictionary *)arg1 ;
-(id)_renderBackgroundFramesForAbsoluteAngles:(id)arg1 lightingType:(long long)arg2 scale:(double)arg3 ;
-(void)set_backgroundFrameMapsByLightingType:(NSDictionary *)arg1 ;
-(long long)angleOfAvailableFrameForAngle:(long long)arg1 ;
-(NSMutableDictionary *)_foregroundFramesByAvailableAngle;
-(id)_appearanceForLightingType:(long long)arg1 ;
-(id)_renderFrameForAngle:(long long)arg1 scale:(double)arg2 components:(long long)arg3 appearance:(id)arg4 ;
-(NSDictionary *)_backgroundFrameMapsByLightingType;
-(void)preloadForegroundFrames;
-(void)preloadBackgroundFrames;
-(id)foregroundFrameForAngle:(long long)arg1 ;
-(id)backgroundFrameForAngle:(long long)arg1 lightingType:(long long)arg2 ;
-(BOOL)_needsBackgroundFrame;
@end

