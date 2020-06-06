/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HSWiFiManager : NSObject <ICEnvironmentMonitorObserver> {

	SCPreferencesRef _wifiPreferences;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _wiFiEnabled;
	BOOL _wiFiAssociated;

}

@property (assign,getter=isWiFiEnabled,nonatomic) BOOL wiFiEnabled;                    //@synthesize wiFiEnabled=_wiFiEnabled - In the implementation block
@property (assign,getter=isWiFiAssociated,nonatomic) BOOL wiFiAssociated;              //@synthesize wiFiAssociated=_wiFiAssociated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWiFiManager;
-(id)init;
-(void)dealloc;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(BOOL)isWiFiEnabled;
-(BOOL)isWiFiAssociated;
-(id)_processIdentifier;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)_getWiFiEnabledFromPrefs;
-(BOOL)_getWiFiAssociated;
-(void)setWiFiEnabled:(BOOL)arg1 ;
-(void)setWiFiAssociated:(BOOL)arg1 ;
@end

