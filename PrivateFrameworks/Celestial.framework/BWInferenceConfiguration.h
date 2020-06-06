/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BWInferenceConfiguration : NSObject {

	int _inferenceType;
	unsigned _priority;
	float _maximumFramesPerSecond;
	NSDictionary* _tuningParameters;

}

@property (nonatomic,readonly) int inferenceType;                        //@synthesize inferenceType=_inferenceType - In the implementation block
@property (assign,nonatomic) unsigned priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) float maximumFramesPerSecond;               //@synthesize maximumFramesPerSecond=_maximumFramesPerSecond - In the implementation block
@property (nonatomic,copy) NSDictionary * tuningParameters;              //@synthesize tuningParameters=_tuningParameters - In the implementation block
-(void)dealloc;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(NSDictionary *)tuningParameters;
-(float)maximumFramesPerSecond;
-(int)inferenceType;
-(void)setTuningParameters:(NSDictionary *)arg1 ;
-(id)initWithInferenceType:(int)arg1 ;
-(void)setMaximumFramesPerSecond:(float)arg1 ;
@end

