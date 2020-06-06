/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSUUID, NSDictionary, NSXPCConnection;


@protocol PKSubsystemServicePersonality <NSObject>
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
@property (readonly) NSXPCConnection * connection; 
@required
-(NSString *)identifier;
-(NSString *)version;
-(NSURL *)url;
-(NSDictionary *)bundleInfoDictionary;
-(NSUUID *)uuid;
-(NSXPCConnection *)connection;
-(NSDictionary *)plugInDictionary;

@end

