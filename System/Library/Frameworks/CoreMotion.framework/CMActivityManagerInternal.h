/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	/*^block*/id fActivityHandler;
	NSObject*<OS_dispatch_queue> fPrivateQueue;
	BOOL fSubscribedToMotionState;
	NSObject*<OS_dispatch_semaphore> fSidebandOverrideSemaphore;
	NSObject*<OS_dispatch_queue> fSidebandOverrideQueue;
	BOOL fSidebandOverrideWaiting;
	long long fSidebandOverrideResult;
	NSObject*<OS_dispatch_semaphore> fMotionStateSimSemaphore;
	NSObject*<OS_dispatch_queue> fMotionStateSimQueue;
	BOOL fMotionStateSimWaiting;
	long long fMotionStateSimResult;
	long long fMotionStateYouthSimResult;

}
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(void)connect;
-(void)startActivityUpdatesWithHandlerPrivate:(/*^block*/id)arg1 ;
-(void)stopActivityUpdatesPrivate;
-(void)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(void)simulateMotionState:(BOOL)arg1 withState:(long long)arg2 ;
-(void)simulateMotionStateYouthWithState:(long long)arg1 ;
@end

