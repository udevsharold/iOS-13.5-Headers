/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AAUIDeviceLocatorService : NSObject {

	unsigned long long _lastKnownState;
	BOOL _hasAttemptedToFetchState;
	BOOL _wantsToEnable;
	NSObject*<OS_dispatch_queue> _stateUpdateQueue;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_updateStateAndNotify:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)enableInContext:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isChangingState;
-(BOOL)isStateKnown;
-(void)refreshCurrentState:(/*^block*/id)arg1 ;
-(void)enableInContext:(unsigned long long)arg1 ;
-(void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 ;
-(void)setShouldEnable:(BOOL)arg1 ;
-(BOOL)shouldEnable;
@end

