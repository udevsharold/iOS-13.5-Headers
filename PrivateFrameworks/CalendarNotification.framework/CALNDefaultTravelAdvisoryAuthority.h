/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNTravelAdvisoryAuthority.h>

@class NSString;

@interface CALNDefaultTravelAdvisoryAuthority : NSObject <CALNTravelAdvisoryAuthority>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double minimumAllowableTravelTime; 
@property (nonatomic,readonly) double maximumAllowableTravelTime; 
+(id)sharedInstance;
-(BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1 ;
-(double)maximumAllowableTravelTime;
-(double)minimumAllowableTravelTime;
-(BOOL)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1 ;
@end

