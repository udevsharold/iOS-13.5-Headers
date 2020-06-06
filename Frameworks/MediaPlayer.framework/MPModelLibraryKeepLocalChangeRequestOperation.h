/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelLibraryKeepLocalChangeRequest;

@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	/*^block*/id _responseHandler;
	MPModelLibraryKeepLocalChangeRequest* _request;

}

@property (nonatomic,copy) id responseHandler;                                          //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) MPModelLibraryKeepLocalChangeRequest * request;              //@synthesize request=_request - In the implementation block
-(void)execute;
-(void)setRequest:(MPModelLibraryKeepLocalChangeRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(MPModelLibraryKeepLocalChangeRequest *)request;
-(id)responseHandler;
-(void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(long long)arg3 mediaLibrary:(id)arg4 ;
-(void)_handleKeepLocalUpdateStatus:(long long)arg1 forLibraryIdentifier:(long long)arg2 mediaType:(long long)arg3 completedWithError:(id)arg4 ;
@end

