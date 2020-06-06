/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class CKUploadRequestMetadata;

@interface CKRequestAssetOperation : NSOperation {

	long long _state;
	CKUploadRequestMetadata* _metadata;
	/*^block*/id _assetRequestCompletionBlock;
	/*^block*/id _requestCallback;

}

@property (nonatomic,retain) CKUploadRequestMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) id requestCallback;                                //@synthesize requestCallback=_requestCallback - In the implementation block
@property (assign) long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id assetRequestCompletionBlock;                    //@synthesize assetRequestCompletionBlock=_assetRequestCompletionBlock - In the implementation block
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setMetadata:(CKUploadRequestMetadata *)arg1 ;
-(CKUploadRequestMetadata *)metadata;
-(id)initWithAssetMetadata:(id)arg1 requestCallback:(/*^block*/id)arg2 ;
-(void)setAssetRequestCompletionBlock:(id)arg1 ;
-(id)requestCallback;
-(id)assetRequestCompletionBlock;
-(void)setRequestCallback:(id)arg1 ;
@end

