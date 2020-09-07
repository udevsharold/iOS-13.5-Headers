/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNAlarmEngineMonitor.h>
#import <libobjc.A.dylib/CADModule.h>

@class NSNotificationCenter, _EKAlarmEngine, NSString;

@interface CALNEKAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor, CADModule> {

	BOOL _active;
	NSNotificationCenter* _notificationCenter;
	_EKAlarmEngine* _alarmEngine;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) _EKAlarmEngine * alarmEngine;                           //@synthesize alarmEngine=_alarmEngine - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(void)activate;
-(void)deactivate;
-(_EKAlarmEngine *)alarmEngine;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)didRegisterForAlarms;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)didRegisterForBackgroundTaskAgentJobs;
-(void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeAlarmsFiredObserver:(id)arg1 ;
-(id)initWithAlarmEngine:(id)arg1 notificationCenter:(id)arg2 ;
@end
