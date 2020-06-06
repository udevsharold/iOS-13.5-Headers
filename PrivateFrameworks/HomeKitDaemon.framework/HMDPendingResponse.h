/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSString, NSMutableArray;

@interface HMDPendingResponse : HMFObject {

	HMFMessage* _requestMessage;
	NSString* _originalRequestIdentifier;
	unsigned long long _pendingResponseCount;
	unsigned long long _totalRequestsCount;
	NSMutableArray* _allResponses;
	NSMutableArray* _latestResponses;
	/*^block*/id _responseHandler;
	double _creationTime;

}

@property (nonatomic,retain) HMFMessage * requestMessage;                          //@synthesize requestMessage=_requestMessage - In the implementation block
@property (nonatomic,retain) NSString * originalRequestIdentifier;                 //@synthesize originalRequestIdentifier=_originalRequestIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long pendingResponseCount;              //@synthesize pendingResponseCount=_pendingResponseCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalRequestsCount;                //@synthesize totalRequestsCount=_totalRequestsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * allResponses;                        //@synthesize allResponses=_allResponses - In the implementation block
@property (nonatomic,retain) NSMutableArray * latestResponses;                     //@synthesize latestResponses=_latestResponses - In the implementation block
@property (nonatomic,copy) id responseHandler;                                     //@synthesize responseHandler=_responseHandler - In the implementation block
@property (assign,nonatomic) double creationTime;                                  //@synthesize creationTime=_creationTime - In the implementation block
+(id)tupleForMessage:(id)arg1 originalRequestIdentifier:(id)arg2 requestCount:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)description;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(double)creationTime;
-(void)setCreationTime:(double)arg1 ;
-(HMFMessage *)requestMessage;
-(void)setRequestMessage:(HMFMessage *)arg1 ;
-(void)setOriginalRequestIdentifier:(NSString *)arg1 ;
-(void)setTotalRequestsCount:(unsigned long long)arg1 ;
-(void)setPendingResponseCount:(unsigned long long)arg1 ;
-(void)setAllResponses:(NSMutableArray *)arg1 ;
-(void)setLatestResponses:(NSMutableArray *)arg1 ;
-(unsigned long long)totalRequestsCount;
-(unsigned long long)pendingResponseCount;
-(NSMutableArray *)allResponses;
-(NSMutableArray *)latestResponses;
-(void)addToPendingResponses:(id)arg1 ;
-(void)addResponsesToPendingResponse:(id)arg1 ;
-(id)retrieveAndClearAllResponses;
-(id)retrieveAndClearLatestResponses;
-(NSString *)originalRequestIdentifier;
@end

