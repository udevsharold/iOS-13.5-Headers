/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADSourceInterface.h>

@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetSourcesWithFaultedProperties:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetLocalSource:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetLocalBirthdaySource:(/*^block*/id)arg1 ;
-(void)CADSourceGetConstraints:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADSourceGetNotificationCollection:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADSourceRefresh:(id)arg1 isUserRequested:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADRemoveCalendarItemsOlderThanDate:(id)arg1 ofType:(int)arg2 inSource:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADSourceGetGrantedDelegatesList:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADSourceUpdateGrantedDelegatePermission:(id)arg1 sourceID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADSourceGetManagedConfigurationAccountAccess:(id)arg1 reply:(/*^block*/id)arg2 ;
-(int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 entityType:(int)arg3 withBlock:(/*^block*/id)arg4 ;
@end

