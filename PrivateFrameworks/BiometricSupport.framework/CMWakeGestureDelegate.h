/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMWakeGestureDelegate <NSObject>
@optional
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3 detectedAt:(unsigned long long)arg4;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 detectedAt:(unsigned long long)arg3;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 type:(long long)arg3 detectedAt:(unsigned long long)arg4;

@end

