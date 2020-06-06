/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEODaemon;

@interface GEOServer : NSObject {

	GEODaemon* _daemon;

}

@property (assign,nonatomic,__weak) GEODaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(id)identifier;
+(BOOL)canHandleIncomingMessage:(id)arg1 ;
+(BOOL)shouldStartImmediately;
+(Class)peerClass;
+(BOOL)usesModernRequestReply;
+(Class)requestClassForMethod:(id)arg1 ;
-(id)description;
-(void)handleRequest:(id)arg1 ;
-(GEODaemon *)daemon;
-(void)peerDidConnect:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)setDaemon:(GEODaemon *)arg1 ;
@end

