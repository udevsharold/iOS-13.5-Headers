/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEFilterProviderConfiguration, NSString;

@interface NEFilterProvider : NEProvider <NSExtensionRequestHandling> {

	NEFilterProviderConfiguration* _filterConfiguration;

}

@property (retain) NEFilterProviderConfiguration * filterConfiguration;              //@synthesize filterConfiguration=_filterConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForAction:(long long)arg1 ;
-(void)handleReport:(id)arg1 ;
-(void)startFilterWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFilterConfiguration:(NEFilterProviderConfiguration *)arg1 ;
-(void)stopFilterWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NEFilterProviderConfiguration *)filterConfiguration;
@end

