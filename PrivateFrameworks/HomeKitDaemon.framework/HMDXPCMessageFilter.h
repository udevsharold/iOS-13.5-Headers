/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageFilter.h>

@class HMDXPCClientConnection;

@interface HMDXPCMessageFilter : HMFMessageFilter {

	HMDXPCClientConnection* _connection;

}

@property (readonly) HMDXPCClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(BOOL)canInitWithMessage:(id)arg1 ;
+(id)policyClasses;
-(HMDXPCClientConnection *)connection;
-(id)initWithMessage:(id)arg1 ;
@end

