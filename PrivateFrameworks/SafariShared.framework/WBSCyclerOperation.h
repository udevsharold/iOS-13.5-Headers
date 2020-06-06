/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSCyclerOperation : NSObject {

	unsigned long long _numberOfRemainingAttempts;
	float _backoffRatio;
	BOOL _finished;
	BOOL _executing;
	/*^block*/id _block;
	double _nextBackoffTimeInterval;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (getter=isExecuting,nonatomic,readonly) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) double nextBackoffTimeInterval;                 //@synthesize nextBackoffTimeInterval=_nextBackoffTimeInterval - In the implementation block
-(id)init;
-(id)block;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setBlock:(id)arg1 ;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithMaximumNumberOfAttempts:(unsigned long long)arg1 backoffRatio:(float)arg2 ;
-(double)nextBackoffTimeInterval;
@end

