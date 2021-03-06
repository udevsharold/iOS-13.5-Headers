/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler;
@class NSSet, MTAlarmManager;

@interface MTNextAlarmManager : NSObject {

	NSSet* _nextAlarms;
	/*^block*/id _updateHandler;
	id<NAScheduler> _serializer;
	MTAlarmManager* _alarmManager;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                 //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NSSet * nextAlarms;                         //@synthesize nextAlarms=_nextAlarms - In the implementation block
@property (nonatomic,retain) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,copy) id updateHandler;                             //@synthesize updateHandler=_updateHandler - In the implementation block
-(id)init;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTAlarmManager *)alarmManager;
-(void)setNextAlarms:(NSSet *)arg1 ;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(void)calculateNextAlarms;
-(void)_handleAlarmsDidChange;
-(NSSet *)nextAlarms;
@end

