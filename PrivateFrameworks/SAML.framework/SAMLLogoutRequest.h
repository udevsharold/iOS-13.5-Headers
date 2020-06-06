/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLLogoutRequestElement, NSString, NSDate;

@interface SAMLLogoutRequest : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLLogoutRequestElement* _requestElement;

}

@property (nonatomic,retain) SAMLLogoutRequestElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSDate * notOnOrAfter; 
-(NSString *)reason;
-(NSString *)issuer;
-(void)setReason:(NSString *)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(NSDate *)notOnOrAfter;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLLogoutRequestElement *)requestElement;
-(void)setRequestElement:(SAMLLogoutRequestElement *)arg1 ;
-(void)setNotOnOrAfter:(NSDate *)arg1 ;
@end

