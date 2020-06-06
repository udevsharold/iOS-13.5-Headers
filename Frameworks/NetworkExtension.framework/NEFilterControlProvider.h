/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSDictionary, NSString;

@interface NEFilterControlProvider : NEFilterProvider <NSExtensionRequestHandling> {

	NSDictionary* _remediationMap;
	NSDictionary* _URLAppendStringMap;

}

@property (copy) NSDictionary * remediationMap;                     //@synthesize remediationMap=_remediationMap - In the implementation block
@property (copy) NSDictionary * URLAppendStringMap;                 //@synthesize URLAppendStringMap=_URLAppendStringMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleNewFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyRulesChanged;
-(NSDictionary *)remediationMap;
-(NSDictionary *)URLAppendStringMap;
-(void)handleRemediationForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRemediationMap:(NSDictionary *)arg1 ;
-(void)setURLAppendStringMap:(NSDictionary *)arg1 ;
@end

