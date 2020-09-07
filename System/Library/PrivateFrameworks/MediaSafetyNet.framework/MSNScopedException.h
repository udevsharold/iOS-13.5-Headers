/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSString;

@interface MSNScopedException : NSObject {

	NSXPCConnection* _connection;
	NSString* _exception;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSString * exception;                      //@synthesize exception=_exception - In the implementation block
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)exception;
-(void)setException:(NSString *)arg1 ;
-(id)initWithConnection:(id)arg1 exception:(id)arg2 ;
@end
