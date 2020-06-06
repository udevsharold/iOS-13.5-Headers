/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPairingAgentDelegate <NSObject>
@optional
-(void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;

@end

