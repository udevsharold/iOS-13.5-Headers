/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFMGGetMobileGestaltBoolRequest : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * key; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getMobileGestaltBoolRequest;
+(id)getMobileGestaltBoolRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end

