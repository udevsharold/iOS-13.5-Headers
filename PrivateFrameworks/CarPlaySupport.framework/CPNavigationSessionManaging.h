/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:04 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPNavigationSessionManaging <NSObject>
@required
-(void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2;
-(void)finishTrip;
-(void)cancelTrip;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
-(void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;
-(void)updateTripTravelEstimates:(id)arg1;

@end

