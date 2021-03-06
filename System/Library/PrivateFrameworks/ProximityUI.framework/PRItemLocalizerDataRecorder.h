/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PRItemLocalizerDataRecorder
@optional
-(void)start;
-(void)stopAndDiscard;
-(void)recordProximityMeasurement:(id)arg1;
-(void)recordPoseMeasurement:(id)arg1;
-(void)recordEstimatorInput:(id)arg1;
-(void)recordTargetEstimates:(id)arg1;
-(void)recordRangeEstimate:(id)arg1;
-(void)recordTargetMovingStateChanged:(BOOL)arg1 atTime:(double)arg2;
-(void)recordCustomData:(id)arg1 forKey:(id)arg2;
-(id)stopAndSave;

@end

