/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _alarmID;
	BOOL _isOffsetFromTravelTimeStart;
	NSDate* _lastFireTimeOfAlertOffsetFromTravelTime;
	EKTravelEngineHypothesis* _hypothesis;
	BOOL _hasDisplayedLeaveByMessage;
	BOOL _hasDisplayedLeaveNowMessage;
	BOOL _hasDisplayedRunningLateMessage;
	NSDate* _lastTimeNotificationAdded;

}

@property (nonatomic,copy,readonly) NSString * alarmID;                                            //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) BOOL isOffsetFromTravelTimeStart;                                   //@synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;              //@synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime - In the implementation block
@property (nonatomic,copy,readonly) EKTravelEngineHypothesis * hypothesis;                         //@synthesize hypothesis=_hypothesis - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayedLeaveByMessage;                                    //@synthesize hasDisplayedLeaveByMessage=_hasDisplayedLeaveByMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayedLeaveNowMessage;                                   //@synthesize hasDisplayedLeaveNowMessage=_hasDisplayedLeaveNowMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayedRunningLateMessage;                                //@synthesize hasDisplayedRunningLateMessage=_hasDisplayedRunningLateMessage - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastTimeNotificationAdded;                            //@synthesize lastTimeNotificationAdded=_lastTimeNotificationAdded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)alarmID;
-(EKTravelEngineHypothesis *)hypothesis;
-(NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
-(BOOL)isOffsetFromTravelTimeStart;
-(NSDate *)lastTimeNotificationAdded;
-(BOOL)hasDisplayedLeaveNowMessage;
-(BOOL)hasDisplayedLeaveByMessage;
-(BOOL)hasDisplayedRunningLateMessage;
-(id)_initWithAlarmID:(id)arg1 isOffsetFromTravelTimeStart:(BOOL)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 hypothesis:(id)arg4 hasDisplayedLeaveByMessage:(BOOL)arg5 hasDisplayedLeaveNowMessage:(BOOL)arg6 hasDisplayedRunningLateMessage:(BOOL)arg7 lastTimeNotificationAdded:(id)arg8 ;
-(BOOL)isEqualToNotificationData:(id)arg1 ;
@end

