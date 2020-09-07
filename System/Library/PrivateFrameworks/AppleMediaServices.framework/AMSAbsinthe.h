/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSAbsinthe : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)_signingDataFromRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_dataToSignFromRequest:(id)arg1 bagDefinition:(id)arg2 ;
+(id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 ;
+(id)handleResponse:(id)arg1 bag:(id)arg2 ;
@end
