/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ADTimeProfiler;

@interface ADExecutorParameters : NSObject {

	BOOL _powerMeasureMode;
	unsigned long long _orientationPreferences;
	NSString* _intermediatesOutputPath;
	unsigned long long _stepsToSkip;
	ADTimeProfiler* _timeProfiler;

}

@property (assign,nonatomic) unsigned long long orientationPreferences;              //@synthesize orientationPreferences=_orientationPreferences - In the implementation block
@property (nonatomic,copy) NSString * intermediatesOutputPath;                       //@synthesize intermediatesOutputPath=_intermediatesOutputPath - In the implementation block
@property (assign,nonatomic) BOOL powerMeasureMode;                                  //@synthesize powerMeasureMode=_powerMeasureMode - In the implementation block
@property (assign,nonatomic) unsigned long long stepsToSkip;                         //@synthesize stepsToSkip=_stepsToSkip - In the implementation block
@property (nonatomic,retain) ADTimeProfiler * timeProfiler;                          //@synthesize timeProfiler=_timeProfiler - In the implementation block
-(id)init;
-(unsigned long long)orientationPreferences;
-(void)setOrientationPreferences:(unsigned long long)arg1 ;
-(NSString *)intermediatesOutputPath;
-(void)setIntermediatesOutputPath:(NSString *)arg1 ;
-(BOOL)powerMeasureMode;
-(void)setPowerMeasureMode:(BOOL)arg1 ;
-(unsigned long long)stepsToSkip;
-(void)setStepsToSkip:(unsigned long long)arg1 ;
-(ADTimeProfiler *)timeProfiler;
-(void)setTimeProfiler:(ADTimeProfiler *)arg1 ;
@end

