/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICPBDGSRequest;

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject {

	ICPBDGSRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) ICPBDGSRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;               //@synthesize responseHandler=_responseHandler - In the implementation block
-(ICPBDGSRequest *)request;
-(id)responseHandler;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end
