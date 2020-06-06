/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFActivityAdvertiserClient.h>

@protocol SFActivityAdvertiserDelegate;
@class NSString;

@interface SFActivityAdvertiser : SFXPCClient <SFActivityAdvertiserClient> {

	id<SFActivityAdvertiserDelegate> _delegate;

}

@property (assign) id<SFActivityAdvertiserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdvertiser;
-(id)init;
-(id<SFActivityAdvertiserDelegate>)delegate;
-(void)setDelegate:(id<SFActivityAdvertiserDelegate>)arg1 ;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)pairedDevicesChanged:(id)arg1 ;
-(void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3 ;
-(void)fetchLoginIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchSFPeerDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 ;
@end

