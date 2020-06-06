/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNSharedCalendarInvitationNotificationDataSource, CALNNotificationManager, CALNCalendarIconIdentifierProvider, CALNSourceEventRepresentationProvider;
@class NSString, NSArray;

@interface CALNSharedCalendarInvitationNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNSharedCalendarInvitationNotificationDataSource> _dataSource;
	id<CALNNotificationManager> _notificationManager;
	id<CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
	id<CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;

}

@property (nonatomic,readonly) id<CALNSharedCalendarInvitationNotificationDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<CALNNotificationManager> notificationManager;                                   //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;                            //@synthesize iconIdentifierProvider=_iconIdentifierProvider - In the implementation block
@property (nonatomic,readonly) id<CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;              //@synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
+(id)declineActionIdentifier;
+(id)reportJunkActionIdentifier;
+(id)joinActionIdentifier;
+(id)categoryIdentifierWithoutReportJunk;
+(id)categoryIdentifierWithReportJunk;
-(id<CALNSharedCalendarInvitationNotificationDataSource>)dataSource;
-(NSArray *)categories;
-(NSString *)sourceIdentifier;
-(id<CALNNotificationManager>)notificationManager;
-(void)didReceiveResponse:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id)contentForNotificationWithInfo:(id)arg1 ;
-(id<CALNCalendarIconIdentifierProvider>)iconIdentifierProvider;
-(id<CALNSourceEventRepresentationProvider>)sourceEventRepresentationProvider;
-(void)refreshNotifications:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4 ;
@end

