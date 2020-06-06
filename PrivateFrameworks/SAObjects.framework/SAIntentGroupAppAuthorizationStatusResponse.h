/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSDictionary, NSString;

@interface SAIntentGroupAppAuthorizationStatusResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSDictionary * appAuthorizationStatusMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)appAuthorizationStatusResponse;
+(id)appAuthorizationStatusResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)appAuthorizationStatusMap;
-(void)setAppAuthorizationStatusMap:(NSDictionary *)arg1 ;
@end

