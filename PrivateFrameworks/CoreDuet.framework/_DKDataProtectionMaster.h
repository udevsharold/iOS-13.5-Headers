/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _DKDataProtectionMaster : NSObject {

	NSMutableDictionary* _handlers;
	BOOL _deviceFormatedForContentProtection;
	NSMutableDictionary* _availableState;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _notifyToken;
	BOOL _notifyEnabled;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(BOOL)isDataAvailableForClassA;
-(BOOL)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(BOOL)deviceIsPasswordConfigured;
-(BOOL)deviceIsLocked;
-(id)registerStateChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterStateChangeHandler:(id)arg1 ;
@end

