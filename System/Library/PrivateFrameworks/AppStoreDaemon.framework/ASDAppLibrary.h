/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, ASDNotificationCenter, NSString;

@interface ASDAppLibrary : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;
	ASDNotificationCenter* _notificationCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
+(long long)launchApp:(id)arg1 ;
+(long long)launchApp:(id)arg1 onPairedDevice:(id)arg2 ;
+(void)launchApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(/*^block*/id)arg3 ;
+(long long)launchMessagesExtensionForApp:(id)arg1 ;
+(void)launchMessagesExtensionForApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(void)uninstallApp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 notificationCenter:(id)arg2 ;
@end
