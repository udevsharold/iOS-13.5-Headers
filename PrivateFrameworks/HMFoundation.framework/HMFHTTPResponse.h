/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFHTTPResponseInternal, HMFHTTPRequest, NSDictionary, NSData;

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying> {

	HMFHTTPResponseInternal* _internal;
	HMFHTTPRequest* _request;

}

@property (nonatomic,readonly) HMFHTTPResponseInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) HMFHTTPRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) long long statusCode; 
@property (nonatomic,readonly) NSDictionary * headerFields; 
@property (nonatomic,readonly) NSData * body; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)statusCode;
-(HMFHTTPRequest *)request;
-(HMFHTTPResponseInternal *)internal;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(id)attributeDescriptions;
-(id)initWithRequest:(id)arg1 internalResponse:(id)arg2 ;
@end

