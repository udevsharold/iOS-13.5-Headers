/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {

	BOOL _dropsStillBracketFramesToMaintainConsistentFrameRate;
	BOOL _dropsStartupFramesWithUnstableAE;
	BOOL _preservesMotionDataFromDroppedFrames;
	SCD_Struct_BW2 _lastEmittedPTS;
	SCD_Struct_BW2 _lastEmittedStreamingFrameDuration;
	int _activeBracketSequenceRate;
	BWMotionDataPreserver* _motionDataPreserver;
	long long _frameCount;
	BOOL _aeStableAfterStartStreaming;
	int _aeStableTimeoutFrameCount;
	int _ltmStableTimeoutFrameCount;
	int _numFramesSinceAEBecameStable;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)arg1 ;
-(void)setDropsStartupFramesWithUnstableAE:(BOOL)arg1 ;
-(void)setPreservesMotionDataFromDroppedFrames:(BOOL)arg1 ;
-(BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
-(BOOL)dropsStartupFramesWithUnstableAE;
-(BOOL)preservesMotionDataFromDroppedFrames;
@end
