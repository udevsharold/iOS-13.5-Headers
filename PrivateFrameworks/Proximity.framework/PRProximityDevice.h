/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/PRProximityDeviceProtocol.h>

@protocol OS_os_log;
@class NSObject, NSString, PRProximityDeviceParameters, NSUUID;

@interface PRProximityDevice : NSObject <PRProximityDeviceProtocol> {

	NSObject*<OS_os_log> _logger;
	NSString* _model;
	PRProximityDeviceParameters* _proximityParameters;
	deque<BtProxData, std::__1::allocator<BtProxData> >* _samples;
	long long _proximity;
	NSUUID* _peer;

}

@property (readonly) NSUUID * peer;              //@synthesize peer=_peer - In the implementation block
-(id)init;
-(NSUUID *)peer;
-(void)addSample:(BtProxData)arg1 ;
-(id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id*)arg3 ;
-(BOOL)proxReady;
-(long long)deviceProximity;
-(void)estimateProximity;
@end

