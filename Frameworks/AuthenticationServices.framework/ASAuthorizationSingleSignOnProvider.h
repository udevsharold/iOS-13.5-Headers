/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASAuthorizationProvider.h>

@class NSURL, NSString;

@interface ASAuthorizationSingleSignOnProvider : NSObject <ASAuthorizationProvider> {

	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL canPerformAuthorization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)authorizationProviderWithIdentityProviderURL:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(BOOL)canPerformAuthorization;
-(id)createRequest;
@end

