/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIMotionDetection.h>

@class NSArray;

@interface HMISparseOpticalFlowMotionDetection : HMIMotionDetection {

	NSArray* _motionVectors;
	CGSize _size;

}

@property (readonly) NSArray * motionVectors;              //@synthesize motionVectors=_motionVectors - In the implementation block
@property (readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)classMotionScoreMap;
-(id)classPaddingMap;
-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4 ;
-(NSArray *)motionVectors;
-(float)scoreForSubBoundingBox:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4 ;
-(id)initWithBoundingBox:(CGRect)arg1 size:(CGSize)arg2 motionVectors:(id)arg3 ;
@end

