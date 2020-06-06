/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSString;

@interface _ATXInternalNotification : NSObject {

	NSString* _notificationName;
	id _token;
	opaque_pthread_mutex_t _lock;

}
+(void)postData:(id)arg1 forNotificationNamed:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)registerForNotifications:(/*^block*/id)arg1 ;
-(id)initWithNotificationName:(id)arg1 ;
@end
