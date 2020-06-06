/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXProviderExtensionContext.h>
#import <libobjc.A.dylib/CXProviderHostProtocol.h>
#import <libobjc.A.dylib/CXProviderVendorProtocol.h>

@protocol CXProviderExtensionVendorContextDelegate;
@class NSString;

@interface CXProviderExtensionVendorContext : CXProviderExtensionContext <CXProviderHostProtocol, CXProviderVendorProtocol> {

	id<CXProviderExtensionVendorContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CXProviderExtensionVendorContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CXProviderExtensionVendorContextDelegate>)delegate;
-(void)setDelegate:(id<CXProviderExtensionVendorContextDelegate>)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(oneway void)actionCompleted:(id)arg1 ;
-(oneway void)commitTransaction:(id)arg1 ;
-(oneway void)handleActionTimeout:(id)arg1 ;
-(oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1 ;
-(oneway void)registerWithConfiguration:(id)arg1 ;
-(oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 ;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 ;
-(oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 ;
-(oneway void)reportAudioFinishedForCallWithUUID:(id)arg1 ;
-(oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 ;
-(oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3 ;
-(oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 ;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

