/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface EDAssetDownloadScheduler : NSObject {

	NSString* _identifier;
	NSString* _lastFailureIntervalKey;
	/*^block*/id _handler;
	long long _regularInterval;
	long long _failureInterval;
	long long _backOffFactor;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * _identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * _lastFailureIntervalKey;                 //@synthesize lastFailureIntervalKey=_lastFailureIntervalKey - In the implementation block
@property (nonatomic,copy) id _handler;                                        //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long _regularInterval;                       //@synthesize regularInterval=_regularInterval - In the implementation block
@property (assign,nonatomic) long long _failureInterval;                       //@synthesize failureInterval=_failureInterval - In the implementation block
@property (assign,nonatomic) long long _backOffFactor;                         //@synthesize backOffFactor=_backOffFactor - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id activityHandlerBlock; 
-(id)_handler;
-(NSObject*<OS_dispatch_queue>)_queue;
-(NSString *)_identifier;
-(void)set_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithIdentifier:(id)arg1 regularInterval:(long long)arg2 failureInterval:(long long)arg3 backOffFactor:(long long)arg4 handler:(/*^block*/id)arg5 ;
-(NSString *)_lastFailureIntervalKey;
-(long long)_regularInterval;
-(id)_xpcCriteriaForInterval:(long long)arg1 ;
-(long long)_nextFailureInterval;
-(long long)_failureInterval;
-(long long)_backOffFactor;
-(id)initWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_rescheduleAfterSuccessActivity:(id)arg1 ;
-(void)_rescheduleAfterFailureActivity:(id)arg1 ;
-(void)_stopSchedulingActivity:(id)arg1 ;
-(id)activityHandlerBlock;
-(void)set_identifier:(NSString *)arg1 ;
-(void)set_lastFailureIntervalKey:(NSString *)arg1 ;
-(void)set_handler:(id)arg1 ;
-(void)set_regularInterval:(long long)arg1 ;
-(void)set_failureInterval:(long long)arg1 ;
-(void)set_backOffFactor:(long long)arg1 ;
@end

