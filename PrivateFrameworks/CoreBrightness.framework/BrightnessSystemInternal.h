/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_os_log;
@class BLControl, NSXPCListener, NSMutableDictionary, NSObject, NSString;

@interface BrightnessSystemInternal : NSObject <NSXPCListenerDelegate> {

	BLControl* bl;
	/*^block*/id _callback;
	float _cachedSlider;
	NSXPCListener* _listener;
	NSMutableDictionary* _clients;
	NSMutableDictionary* _clientsProps;
	NSMutableDictionary* _ownedProps;
	NSMutableDictionary* _combinableProps;
	NSObject*<OS_os_log> _logHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)clientConnectedWithExpObj:(id)arg1 ;
-(void)clientDisconnectedWithExpObj:(id)arg1 ;
-(void)undoOwnedPropertiesForClient:(id)arg1 ;
-(void)undoCombinablePropertiesForClient:(id)arg1 ;
-(void)notifyClientsForProperty:(id)arg1 key:(id)arg2 ;
-(void)setOwnedProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3 ;
-(BOOL)isACombinableProperty:(id)arg1 ;
-(BOOL)setCombinableProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3 ;
-(id)newAggregatedPropertyForCombinablePropertiesForKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 client:(id)arg2 ;
-(void)destroyServer;
-(void)setNotificationProperties:(id)arg1 forClient:(id)arg2 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3 ;
-(BOOL)isAlsSupported;
@end

