/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, UNUserNotificationCenter, NSBundle, NSString;

@interface PowerUILPMNotifier : NSObject <UNUserNotificationCenterDelegate> {

	NSObject*<OS_dispatch_queue> _firstUseQueue;
	UNUserNotificationCenter* _userNotificationCenter;
	NSBundle* _bundle;
	int _bsmToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)autoDisabledNotificationRequest;
-(void)displayAutoDisabledNotification;
-(void)removeAutoDisabledNotification;
-(void)displayFirstUseNotification;
@end

