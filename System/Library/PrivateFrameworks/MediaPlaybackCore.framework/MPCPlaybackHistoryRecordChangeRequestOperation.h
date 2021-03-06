/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPCPlaybackHistoryRecordChangeRequest;

@interface MPCPlaybackHistoryRecordChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPCPlaybackHistoryRecordChangeRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPCPlaybackHistoryRecordChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setRequest:(MPCPlaybackHistoryRecordChangeRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPCPlaybackHistoryRecordChangeRequest *)request;
-(id)responseHandler;
-(void)_finishChangeRequestOperationWithError:(id)arg1 ;
@end

