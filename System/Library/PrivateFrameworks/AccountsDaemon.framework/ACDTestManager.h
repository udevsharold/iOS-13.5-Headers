/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject

@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteAccountStoreEndpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteOAuthSignerEndpoint; 
+(id)testServer;
-(void)startTestServer;
-(void)stopTestServer;
-(NSXPCListenerEndpoint *)remoteAccountStoreEndpoint;
-(NSXPCListenerEndpoint *)remoteOAuthSignerEndpoint;
@end

