/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecureChannel/SecureChannelService.h>

@protocol SecureChannelService;
@class NSXPCConnection, NSObject;

@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {

	NSXPCConnection* _connectionToService;
	NSObject*<SecureChannelService> _remoteObject;

}
+(id)sharedInstance;
-(id)init;
-(void)actionForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runApproverFlowForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

