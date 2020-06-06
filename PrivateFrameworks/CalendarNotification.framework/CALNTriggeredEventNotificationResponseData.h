/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class EKTravelEngineHypothesis, NSDate;

@interface CALNTriggeredEventNotificationResponseData : NSObject <NSSecureCoding> {

	EKTravelEngineHypothesis* _hypothesis;
	NSDate* _lastFireTimeOfAlertOffsetFromTravelTime;

}

@property (nonatomic,readonly) EKTravelEngineHypothesis * hypothesis;                              //@synthesize hypothesis=_hypothesis - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;              //@synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EKTravelEngineHypothesis *)hypothesis;
-(id)initWithHypothesis:(id)arg1 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg2 ;
-(NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
@end

