/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSHTTPURLResponse, NSDictionary;

@interface SLFacebookResponse : NSObject <NSCoding> {

	NSData* _responseData;
	NSHTTPURLResponse* _urlResponse;
	id _untypedResponseParameters;
	long long _httpErrorCode;

}

@property (readonly) NSDictionary * responseParameters; 
@property (readonly) int APIresponseErrorCode; 
@property (readonly) long long httpErrorCode;                        //@synthesize httpErrorCode=_httpErrorCode - In the implementation block
@property (readonly) NSHTTPURLResponse * urlResponse; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasError;
-(NSDictionary *)responseParameters;
-(NSHTTPURLResponse *)urlResponse;
-(BOOL)hasBadTokenError;
-(long long)httpErrorCode;
-(id)untypedResponseParameters;
-(id)initWithResponseData:(id)arg1 urlResponse:(id)arg2 ;
-(BOOL)hasHTTPStatusOK;
-(BOOL)isBatchResponse;
-(long long)httpStatusCode;
-(int)APIresponseErrorCode;
-(BOOL)hasMissingTokenOrAppID;
-(id)checkpointURL;
-(id)failedRequestIDs;
@end

