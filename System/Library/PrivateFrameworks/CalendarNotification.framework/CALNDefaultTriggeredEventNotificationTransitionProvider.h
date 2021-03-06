/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationTransitionProvider.h>

@protocol CALNTravelAdvisoryAuthority, CalDateProvider;
@class NSString;

@interface CALNDefaultTriggeredEventNotificationTransitionProvider : NSObject <CALNTriggeredEventNotificationTransitionProvider> {

	id<CALNTravelAdvisoryAuthority> _travelAdvisoryAuthority;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNTravelAdvisoryAuthority> travelAdvisoryAuthority;              //@synthesize travelAdvisoryAuthority=_travelAdvisoryAuthority - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                     //@synthesize dateProvider=_dateProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CalDateProvider>)dateProvider;
-(unsigned long long)_transitionForAlarmFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(unsigned long long)_transitionForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(unsigned long long)_transitionForTimeToLeaveRefreshTimerFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(BOOL)_shouldModifyForAlarmFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(unsigned long long)_transitionForAlarmFiredForNewAlarmID:(id)arg1 optionalOldAlarmID:(id)arg2 ;
-(unsigned long long)_transitionForAlarmFiredForNewAlarmID:(id)arg1 oldAlarmID:(id)arg2 ;
-(BOOL)_shouldRemoveNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(BOOL)_shouldAddNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(BOOL)_timeToLeaveStateAlreadyDisplayedBasedOnSourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(id<CALNTravelAdvisoryAuthority>)travelAdvisoryAuthority;
-(unsigned long long)transitionForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 trigger:(unsigned long long)arg4 ;
-(id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2 ;
@end

