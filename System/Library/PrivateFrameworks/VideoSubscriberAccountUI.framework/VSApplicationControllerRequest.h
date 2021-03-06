/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface VSApplicationControllerRequest : NSObject {

	long long _type;
	NSString* _authenticationToken;
	NSString* _SAMLRequest;
	NSArray* _attributeNames;
	NSString* _requestorVerificationToken;

}

@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken;                        //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (setter=AMLRequest,nonatomic,copy) NSString * SAMLRequest;              //@synthesize SAMLRequest=_SAMLRequest - In the implementation block
@property (nonatomic,copy) NSArray * attributeNames;                              //@synthesize attributeNames=_attributeNames - In the implementation block
@property (nonatomic,copy) NSString * requestorVerificationToken;                 //@synthesize requestorVerificationToken=_requestorVerificationToken - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSArray *)attributeNames;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)setAttributeNames:(NSArray *)arg1 ;
-(NSString *)SAMLRequest;
-(NSString *)requestorVerificationToken;
-(void)setRequestorVerificationToken:(NSString *)arg1 ;
-(void)setSAMLRequest:(NSString *)arg1 ;
@end

