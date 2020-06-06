/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar {

	CalDiagNotificationCollectionSync* _notificationCollectionSyncDiagnostics;

}

@property (nonatomic,retain) CalDiagNotificationCollectionSync * notificationCollectionSyncDiagnostics;              //@synthesize notificationCollectionSyncDiagnostics=_notificationCollectionSyncDiagnostics - In the implementation block
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)_removeCalendarItemWithURL:(id)arg1 ;
-(BOOL)shouldCalendarBeHidden;
-(BOOL)isNotification;
-(BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(id)allItemURLs;
-(Class)appSpecificCalendarItemClass;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(void*)_copyNotificationWithExternalID:(id)arg1 ;
-(void*)_copyNotificationWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(BOOL)_handleInviteNotification:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(void)_handleInviteReply:(id)arg1 withResource:(id)arg2 owningNotification:(id)arg3 uid:(id)arg4 ;
-(BOOL)_handleResourceChanged:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(CalDiagNotificationCollectionSync *)notificationCollectionSyncDiagnostics;
-(void*)_copyCalendarForReplyItem:(id)arg1 ;
-(void*)_copyCalItemFromAnyCalendarWithExternalID:(id)arg1 ;
-(void*)_createResourceChange:(id)arg1 withType:(unsigned)arg2 forNotification:(void*)arg3 withRecurrenceID:(id)arg4 ;
-(void*)_createResourceChange:(id)arg1 withType:(unsigned)arg2 forNotification:(void*)arg3 ;
-(id)_changedAttributesFromCalendarChanges:(id)arg1 ;
-(void)setNotificationCollectionSyncDiagnostics:(CalDiagNotificationCollectionSync *)arg1 ;
@end

