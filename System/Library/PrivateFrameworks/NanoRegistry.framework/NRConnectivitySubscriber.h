/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NRConnectivitySubscriber : NSObject {

	BOOL _connected;
	unsigned long long _dropoutCounter;

}

@property (assign,nonatomic) BOOL connected;                                 //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) unsigned long long dropoutCounter;              //@synthesize dropoutCounter=_dropoutCounter - In the implementation block
+(BOOL)getDropoutCounter:(unsigned long long*)arg1 ;
-(id)init;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(void)_readConnectivityStatus;
-(unsigned long long)dropoutCounter;
-(void)setDropoutCounter:(unsigned long long)arg1 ;
@end
