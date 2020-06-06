/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming, RWIProtocolSecurity;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * statusText; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * mimeType; 
@property (assign,nonatomic) long long source; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * requestHeaders; 
@property (nonatomic,retain) RWIProtocolNetworkResourceTiming * timing; 
@property (nonatomic,retain) RWIProtocolSecurity * security; 
+(id)ik_responseFromURLResponse:(id)arg1 forRequest:(id)arg2 ;
+(id)safe_initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6 ;
+(id)ik_responseFromURLResponse:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(NSString *)url;
-(int)status;
-(void)setUrl:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(RWIProtocolNetworkResourceTiming *)timing;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(void)setTiming:(RWIProtocolNetworkResourceTiming *)arg1 ;
-(NSString *)statusText;
-(void)setStatusText:(NSString *)arg1 ;
-(void)setRequestHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)requestHeaders;
-(RWIProtocolSecurity *)security;
-(void)setSecurity:(RWIProtocolSecurity *)arg1 ;
-(id)initWithUrl:(id)arg1 status:(int)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6 ;
@end

