/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALNNotificationRecord, NSString, BSServiceConnectionEndpoint;

@interface CALNNotificationRecordResponse : NSObject {

	CALNNotificationRecord* _notificationRecord;
	NSString* _actionIdentifier;
	NSString* _originIdentifier;
	BSServiceConnectionEndpoint* _targetConnectionEndpoint;

}

@property (nonatomic,readonly) CALNNotificationRecord * notificationRecord;                         //@synthesize notificationRecord=_notificationRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                                    //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * originIdentifier;                                    //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionEndpoint * targetConnectionEndpoint;              //@synthesize targetConnectionEndpoint=_targetConnectionEndpoint - In the implementation block
+(id)responseWithNotificationRecord:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 ;
-(id)description;
-(BSServiceConnectionEndpoint *)targetConnectionEndpoint;
-(NSString *)actionIdentifier;
-(NSString *)originIdentifier;
-(CALNNotificationRecord *)notificationRecord;
-(id)initWithNotificationRecord:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 ;
@end

