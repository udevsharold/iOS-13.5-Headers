/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface VSTimeoutCondition : NSObject {

	BOOL _shouldStop;
	double _timeoutValue;
	NSCondition* _refreshTimeoutCondition;

}

@property (nonatomic,retain) NSCondition * refreshTimeoutCondition;              //@synthesize refreshTimeoutCondition=_refreshTimeoutCondition - In the implementation block
@property (assign,nonatomic) BOOL shouldStop;                                    //@synthesize shouldStop=_shouldStop - In the implementation block
@property (assign,nonatomic) double timeoutValue;                                //@synthesize timeoutValue=_timeoutValue - In the implementation block
-(void)stop;
-(BOOL)wait;
-(void)refresh;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(void)setTimeoutValue:(double)arg1 ;
-(double)timeoutValue;
-(id)initWithTimeoutValue:(double)arg1 ;
-(NSCondition *)refreshTimeoutCondition;
-(BOOL)_waitForTimeInterval:(double)arg1 ;
-(void)setRefreshTimeoutCondition:(NSCondition *)arg1 ;
@end

