/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBBridgeIDSReachabilityObserver;
@interface PBBridgeIDSReachabilityObserverWrapper : NSObject {

	id<PBBridgeIDSReachabilityObserver> _observer;

}

@property (assign,nonatomic,__weak) id<PBBridgeIDSReachabilityObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(id<PBBridgeIDSReachabilityObserver>)observer;
-(void)setObserver:(id<PBBridgeIDSReachabilityObserver>)arg1 ;
-(void)fireReachability:(id)arg1 deviceStatus:(id)arg2 devices:(id)arg3 ;
@end
