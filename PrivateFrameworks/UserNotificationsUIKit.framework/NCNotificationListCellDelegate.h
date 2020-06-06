/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationListCellDelegate <NSObject>
@optional
-(void)notificationListCell:(id)arg1 didMoveToNewXPosition:(double)arg2;
-(BOOL)notificationListCellShouldPerformClipping:(id)arg1;

@required
-(void)willTearDownNotificationListCell:(id)arg1;
-(void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
-(void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellRequestsPresentingManagementView:(id)arg1 withPresentingView:(id)arg2 completion:(/*^block*/id)arg3;
-(void)notificationListCellRequestsDismissAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellDidRevealCellActions:(id)arg1;
-(BOOL)notificationListCell:(id)arg1 shouldPanHorizontallyWithTouch:(id)arg2;
-(void)notificationListCellDidSignificantUserInteraction:(id)arg1;
-(id)notificationListCellRequestsSectionSettings:(id)arg1 sectionIdentifier:(id)arg2;

@end

