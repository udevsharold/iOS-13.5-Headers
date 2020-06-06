/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * method; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * postData; 
+(id)safe_initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
+(id)ik_networkRequestFromURLRequest:(id)arg1 ;
-(NSString *)method;
-(NSString *)url;
-(void)setMethod:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)postData;
-(void)setPostData:(NSString *)arg1 ;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
@end
