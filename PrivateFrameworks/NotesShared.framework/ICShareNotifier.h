/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICShareNotifier : NSObject
+(BOOL)shouldShowNotificationForNote:(id)arg1 ;
+(id)replicaIDsThatEditedTimestamp:(id)arg1 sinceTimestamp:(id)arg2 ;
+(id)participantsWithReplicaIDs:(id)arg1 inNote:(id)arg2 ;
+(void)showNotificationForNote:(id)arg1 editors:(id)arg2 ;
+(BOOL)shouldPreventNotificationsForRecordID:(id)arg1 ;
+(id)notificationTitleForEditors:(id)arg1 ;
+(void)showNotificationWithTitle:(id)arg1 message:(id)arg2 userInfo:(id)arg3 ;
+(id)displayableEditorNames:(id)arg1 ;
+(id)defaultsKeyForPreventingNotificationsForIdentifier:(id)arg1 ;
+(void)clearNotificationForRecordID:(id)arg1 ;
+(void)showNotificationIfNecessaryForCloudObject:(id)arg1 accountID:(id)arg2 ;
+(void)setShouldPreventNotifications:(BOOL)arg1 forRecordID:(id)arg2 ;
@end
