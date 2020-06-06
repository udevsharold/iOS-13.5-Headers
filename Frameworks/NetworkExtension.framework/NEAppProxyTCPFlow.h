/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppProxyFlow.h>

@class NWEndpoint;

@interface NEAppProxyTCPFlow : NEAppProxyFlow {

	NWEndpoint* _remoteEndpoint;

}

@property (readonly) NWEndpoint * remoteEndpoint;              //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
-(id)description;
-(NWEndpoint *)remoteEndpoint;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)readDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

