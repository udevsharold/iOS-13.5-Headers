/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTIndexBasedTaskScheduler <NSObject>
@required
-(void)cancelAllTasks;
-(void)cancelTask:(/*^block*/id)arg1;
-(void)scheduleTask:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2;
-(void)taskReady:(/*^block*/id)arg1 forIndex:(unsigned long long)arg2;

@end

