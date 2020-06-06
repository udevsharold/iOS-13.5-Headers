/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCIDRSchedulerStream : NSObject {

	unsigned _keyFrameInterval;
	unsigned _framerate;
	unsigned _weightFactor;
	unsigned _framePosition;
	unsigned _framesPerIdrPeriod;

}

@property (assign,nonatomic) unsigned keyFrameInterval;                //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) unsigned framerate;                       //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) unsigned weightFactor;                    //@synthesize weightFactor=_weightFactor - In the implementation block
@property (assign,nonatomic) unsigned framePosition;                   //@synthesize framePosition=_framePosition - In the implementation block
@property (assign,nonatomic) unsigned framesPerIdrPeriod;              //@synthesize framesPerIdrPeriod=_framesPerIdrPeriod - In the implementation block
+(id)schedulerStreamWithKeyFrameInterval:(unsigned)arg1 framerate:(unsigned)arg2 weightFactor:(unsigned)arg3 ;
-(id)description;
-(unsigned)framePosition;
-(void)setFramePosition:(unsigned)arg1 ;
-(unsigned)framerate;
-(void)setFramerate:(unsigned)arg1 ;
-(unsigned)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned)arg1 ;
-(unsigned)weightFactor;
-(void)setWeightFactor:(unsigned)arg1 ;
-(unsigned)framesPerIdrPeriod;
-(id)initWithKeyFrameInterval:(unsigned)arg1 framerate:(unsigned)arg2 weightFactor:(unsigned)arg3 ;
-(long long)compareWeightFactor:(id)arg1 ;
-(void)setFramesPerIdrPeriod:(unsigned)arg1 ;
@end

