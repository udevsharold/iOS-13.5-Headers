/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString, NSURL;

@interface PKApplyWebServiceApplicationDeleteRequest : PKApplyWebServiceRequest {

	NSString* _applicationIdentifier;
	NSURL* _baseURL;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
@end

