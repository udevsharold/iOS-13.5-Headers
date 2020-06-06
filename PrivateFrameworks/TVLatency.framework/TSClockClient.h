/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSClockClient <NSObject>
@optional
-(void)didResetClock:(id)arg1;
-(void)didChangeClockMasterForClock:(id)arg1;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg1;
-(void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1;
-(void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
-(void)didProcessSync:(id)arg1;
-(void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;

@end

