/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTrafficIncidentAlertUpdaterDelegate <NSObject>
@required
-(void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
-(void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(BOOL)arg3;
-(void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
-(void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 traffic:(id)arg3 forAlert:(id)arg4;
-(double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1;
-(double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;
-(double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;
-(BOOL)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1;

@end
