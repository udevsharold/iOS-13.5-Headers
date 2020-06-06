/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSString, NSObject, NSDate;

@interface IMTimer : NSObject {

	id _timer;
	id _target;
	NSDictionary* _userInfo;
	NSString* _name;
	double _timeInterval;
	NSObject*<OS_dispatch_queue> _queue;
	SEL _selector;
	BOOL _wakeDevice;
	BOOL _useCurrentRunLoop;

}

@property (nonatomic,retain,readonly) id userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain,readonly) NSDate * fireDate; 
-(void)dealloc;
-(void)invalidate;
-(id)userInfo;
-(NSDate *)fireDate;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7 ;
-(id)_initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7 queue:(id)arg8 ;
-(void)_reschedulePCPersistentTimer;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 ;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 queue:(id)arg7 ;
-(void)setFireTimeInterval:(double)arg1 ;
@end
