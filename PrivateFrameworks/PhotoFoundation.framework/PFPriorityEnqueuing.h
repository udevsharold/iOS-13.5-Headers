/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFPriorityEnqueuing
@required
-(void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3;
-(void)enqueueWithPriority:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(void)enqueueEmptyNotification:(/*^block*/id)arg1;
-(unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
-(void)suspendScheduling;
-(void)resumeScheduling;

@end

