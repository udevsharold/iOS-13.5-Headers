/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SoundAutoConfig.framework/SoundAutoConfig
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SACServiceDSPDelegate.h>

@protocol SACServiceDelegate, SACServiceDSPDelegate, SACDSPDelegate;
@class NSXPCConnection, NSString;

@interface SACDSPController : NSObject <SACServiceDSPDelegate> {

	NSXPCConnection* mServiceConnection;
	id<SACServiceDelegate> mProxyInterface;
	id<SACServiceDSPDelegate> mSACDSPDelegate;
	id<SACDSPDelegate> _delegate;

}

@property (assign,nonatomic) id<SACDSPDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SACDSPDelegate>)delegate;
-(void)setDelegate:(id<SACDSPDelegate>)arg1 ;
-(void)startServiceConnection;
-(void)handleServiceCrash;
-(void)setDSPConfig:(id)arg1 ;
-(void)getDSPInfoByKey:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end
