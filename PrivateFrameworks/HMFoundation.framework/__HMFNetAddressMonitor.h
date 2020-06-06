/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFNetMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFNetAddress;

@interface __HMFNetAddressMonitor : HMFNetMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned _currentNetworkFlags;
	HMFNetAddress* _netAddress;
	SCNetworkReachabilityRef _networkReachabilityRef;

}

@property (nonatomic,readonly) SCNetworkReachabilityRef networkReachabilityRef;              //@synthesize networkReachabilityRef=_networkReachabilityRef - In the implementation block
@property (assign,nonatomic) unsigned currentNetworkFlags;                                   //@synthesize currentNetworkFlags=_currentNetworkFlags - In the implementation block
-(id)init;
-(void)dealloc;
-(id)shortDescription;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(id)initWithNetAddress:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(unsigned long long)reachabilityPath;
-(id)netAddress;
-(unsigned)currentNetworkFlags;
-(void)setCurrentNetworkFlags:(unsigned)arg1 ;
-(void)handleNetworkReachabilityChange:(unsigned)arg1 ;
-(SCNetworkReachabilityRef)networkReachabilityRef;
@end

