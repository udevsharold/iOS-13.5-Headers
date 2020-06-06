/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, HMFUnfairLock;

@interface HMDAccessoryPairingEventRetryMap : NSObject {

	NSMutableDictionary* _retryCountMap;
	HMFUnfairLock* _accessoryPairingRetryMapLock;

}

@property (nonatomic,readonly) NSMutableDictionary * retryCountMap;                       //@synthesize retryCountMap=_retryCountMap - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * accessoryPairingRetryMapLock;              //@synthesize accessoryPairingRetryMapLock=_accessoryPairingRetryMapLock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(HMFUnfairLock *)accessoryPairingRetryMapLock;
-(NSMutableDictionary *)retryCountMap;
-(unsigned long long)retryCountForIdentifier:(id)arg1 ;
-(void)clearRetryCountMap;
-(void)incrementRetryCount:(id)arg1 ;
@end

