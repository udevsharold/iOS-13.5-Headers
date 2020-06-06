/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface ICSecurityInfo : NSObject {

	BOOL _hasLoadedDeviceClassCUnlocked;
	BOOL _isDeviceClassCUnlocked;
	BOOL _hasLoadedContentProtectionEnabled;
	BOOL _isContentProtectionEnabled;
	int _firstUnlockNotificationToken;
	NSMutableArray* _pendingFirstUnlockBlocks;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (getter=isContentProtectionEnabled,nonatomic,readonly) BOOL contentProtectionEnabled;              //@synthesize isContentProtectionEnabled=_isContentProtectionEnabled - In the implementation block
@property (getter=isDeviceUnlocked,nonatomic,readonly) BOOL deviceUnlocked; 
@property (getter=isDeviceClassCUnlocked,nonatomic,readonly) BOOL deviceClassCUnlocked;                      //@synthesize isDeviceClassCUnlocked=_isDeviceClassCUnlocked - In the implementation block
+(id)sharedSecurityInfo;
-(id)init;
-(void)dealloc;
-(BOOL)isDeviceUnlocked;
-(void)performBlockAfterFirstUnlock:(/*^block*/id)arg1 ;
-(BOOL)isContentProtectionEnabled;
-(BOOL)isDeviceClassCUnlocked;
-(void)_getContentProtectionEnabled:(BOOL*)arg1 isDeviceClassCUnlocked:(BOOL*)arg2 ;
-(void)_loadContentProtectionEnabled:(BOOL)arg1 isDeviceClassCUnlocked:(BOOL)arg2 ;
-(void)_processFirstUnlockNotification;
@end

