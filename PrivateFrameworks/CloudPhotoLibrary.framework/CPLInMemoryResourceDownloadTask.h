/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportTask;
@class NSObject, CPLResource;

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportTask> _transportTask;
	CPLResource* _cloudResource;
	/*^block*/id _launchHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) id launchHandler;                  //@synthesize launchHandler=_launchHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CPLResource * cloudResource;              //@synthesize cloudResource=_cloudResource - In the implementation block
+(id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)launch;
-(id)completionHandler;
-(void)cancelTask;
-(CPLResource *)cloudResource;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(id)launchHandler;
-(id)initWithLaunchHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishWithData:(id)arg1 error:(id)arg2 ;
-(void)launchTransportTask:(id)arg1 ;
@end

