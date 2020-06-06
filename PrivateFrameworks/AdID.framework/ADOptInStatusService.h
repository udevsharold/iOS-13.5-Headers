/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ADOptInStatus_XPC.h>

@class NSXPCListener, NSString;

@interface ADOptInStatusService : ADSingleton <NSXPCListenerDelegate, ADOptInStatus_XPC> {

	BOOL _requestInFlight;
	NSXPCListener* _listener;

}

@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL requestInFlight;                  //@synthesize requestInFlight=_requestInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)clearAdvertisingIdentifier;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)advertisingIdentifierChanged:(/*^block*/id)arg1 ;
-(void)setOptInStatus:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)advertisingIdentifier:(/*^block*/id)arg1 ;
-(long long)optInStatusFromRecord:(id)arg1 ;
-(id)optInStatusString:(long long)arg1 ;
-(void)setRequestInFlight:(BOOL)arg1 ;
-(void)callOptInStatusCompletionHandler:(long long)arg1 refreshWeakToken:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestOptInStatusFromJingle:(/*^block*/id)arg1 ;
-(BOOL)requestInFlight;
-(void)reconcileAndUpdateBeforeResponding:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

