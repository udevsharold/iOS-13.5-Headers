/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFHTTPRequestInternal.h>

@class _HMFCFHTTPServerConnection, NSMutableData;

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal {

	CFHTTPServerRequestRef _requestRef;
	CFReadStreamRef _bodyStream;
	_HMFCFHTTPServerConnection* _connection;
	NSMutableData* _bodyData;

}

@property (nonatomic,readonly) NSMutableData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) CFHTTPServerRequestRef requestRef;                           //@synthesize requestRef=_requestRef - In the implementation block
@property (nonatomic,readonly) CFReadStreamRef bodyStream;                                  //@synthesize bodyStream=_bodyStream - In the implementation block
@property (nonatomic,__weak,readonly) _HMFCFHTTPServerConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(void)dealloc;
-(id)method;
-(void)setURL:(id)arg1 ;
-(id)URL;
-(_HMFCFHTTPServerConnection *)connection;
-(void)setMethod:(id)arg1 ;
-(NSMutableData *)bodyData;
-(void)setBody:(id)arg1 ;
-(id)body;
-(id)headerFields;
-(id)initWithConnection:(id)arg1 requestRef:(CFHTTPServerRequestRef)arg2 ;
-(CFReadStreamRef)bodyStream;
-(void)appendBodyData:(id)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(CFHTTPServerRequestRef)requestRef;
-(void)setHeaders:(id)arg1 ;
@end

