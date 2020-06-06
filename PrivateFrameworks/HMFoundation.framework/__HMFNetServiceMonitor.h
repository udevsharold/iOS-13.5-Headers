/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFNetMonitor.h>

@class HMFNetService;

@interface __HMFNetServiceMonitor : HMFNetMonitor {

	HMFNetService* _service;

}

@property (readonly) HMFNetService * service;              //@synthesize service=_service - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(HMFNetService *)service;
-(id)logIdentifier;
-(id)initWithNetAddress:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(unsigned long long)reachabilityPath;
-(id)netAddress;
@end

