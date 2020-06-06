/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSError;

@interface SSVCloudServiceAPITokenResponse : NSObject <SSXPCCoding> {

	NSString* _apiToken;
	NSError* _error;

}

@property (nonatomic,copy) NSString * apiToken;                     //@synthesize apiToken=_apiToken - In the implementation block
@property (nonatomic,copy) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)apiToken;
-(id)initWithToken:(id)arg1 error:(id)arg2 ;
-(void)setApiToken:(NSString *)arg1 ;
@end

