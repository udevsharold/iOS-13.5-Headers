/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, BSInvalidatable;
@class NSObject, NSString;

@interface FigDisplaySleepAssertion : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _reason;
	id<BSInvalidatable> _idleTimerAssertion;
	long long _lastIdleTimerResetTime;

}
-(void)dealloc;
-(id)initWithReason:(id)arg1 queue:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(unsigned char)resetIdleTimer;
@end

