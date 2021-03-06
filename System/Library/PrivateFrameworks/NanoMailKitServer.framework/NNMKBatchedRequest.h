/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NNMKProtoFetchRequest;

@interface NNMKBatchedRequest : NSObject {

	NSMutableDictionary* _messagesToBeSentInBatch;
	NNMKProtoFetchRequest* _latestFetchRequest;

}

@property (nonatomic,retain) NSMutableDictionary * messagesToBeSentInBatch;              //@synthesize messagesToBeSentInBatch=_messagesToBeSentInBatch - In the implementation block
@property (nonatomic,retain) NNMKProtoFetchRequest * latestFetchRequest;                 //@synthesize latestFetchRequest=_latestFetchRequest - In the implementation block
-(id)init;
-(void)setLatestFetchRequest:(NNMKProtoFetchRequest *)arg1 ;
-(NSMutableDictionary *)messagesToBeSentInBatch;
-(NNMKProtoFetchRequest *)latestFetchRequest;
-(id)diffFromMessages:(id)arg1 maxMessagesToAdd:(unsigned long long)arg2 ;
-(void)setMessagesToBeSentInBatch:(NSMutableDictionary *)arg1 ;
@end

