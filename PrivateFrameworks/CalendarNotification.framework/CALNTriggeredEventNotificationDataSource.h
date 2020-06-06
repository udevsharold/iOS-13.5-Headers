/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNTriggeredEventNotificationDataSource
@property (assign,nonatomic,__weak) id<CALNTriggeredEventNotificationDataSourceDelegate> delegate; 
@required
-(id<CALNTriggeredEventNotificationDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 eventID:(id)arg2;
-(void)removeTimeToLeaveRefreshTimerForEventID:(id)arg1;
-(void)ceaseRouteMonitoringEventWithEventID:(id)arg1;
-(id)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(id)arg1 isProtectedDataAvailable:(BOOL)arg2;
-(BOOL)shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg1;
-(BOOL)shouldRemoveNotificationMetaDataWithEventID:(id)arg1;
-(BOOL)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;
-(id)notificationExpirationDateForEventID:(id)arg1 alarmID:(id)arg2;
-(void)acknowledgeEventWithSourceClientIdentifier:(id)arg1 shouldMarkAsHavingReceivedLocation:(BOOL)arg2;
-(void)snoozeEventWithSourceClientIdentifier:(id)arg1;
-(void)handleDirectionsActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3;
-(void)handleConferenceCallActionWithSourceClientIdentifier:(id)arg1;
-(void)handleMailOrganizerActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2;
-(id)eventObjectIDForEventID:(id)arg1;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 sourceClientIdentifier:(id)arg2;
-(void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1;
-(void)ceaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1;
-(void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 travelAdvisoryTimelinessPeriod:(unsigned long long)arg3;
-(void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(id)arg1;

@end

