/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSURL, NSData;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSURL * endpoint; 
@property (nonatomic,copy) NSData * rawRequest; 
@property (assign,nonatomic) long long timeoutInSeconds; 
+(id)sendToProtobufConduit;
+(id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)attributes;
-(NSURL *)endpoint;
-(void)setAttributes:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(void)setEndpoint:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)rawRequest;
-(void)setRawRequest:(NSData *)arg1 ;
-(long long)timeoutInSeconds;
-(void)setTimeoutInSeconds:(long long)arg1 ;
@end

