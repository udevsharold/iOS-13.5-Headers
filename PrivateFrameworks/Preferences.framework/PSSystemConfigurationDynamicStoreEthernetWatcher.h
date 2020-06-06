/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject {

	SCDynamicStoreRef _dynamicStore;
	CFRunLoopSourceRef _dynamicStoreSource;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerForEthernetAdapterNotifications;
-(id)ethernetNetworkInterfaces;
-(BOOL)isHiddenEthernetInterface:(SCNetworkInterfaceRef)arg1 ;
-(BOOL)hasEthernetNetworkInterfaces;
-(void)ethernetDynamicStoreDidChange;
@end

