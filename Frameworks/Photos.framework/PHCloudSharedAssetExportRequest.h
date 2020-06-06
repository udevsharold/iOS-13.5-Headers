/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetExportRequest.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest {

	int _imageManagerImageRequestId;
	int _imageManagerVideoRequestId;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)exportRequestForAsset:(id)arg1 error:(id*)arg2 ;
-(id)initWithAsset:(id)arg1 variants:(id)arg2 ;
-(void)preflightExportWithOptions:(id)arg1 assetAvailability:(long long*)arg2 isProcessingRequired:(BOOL*)arg3 fileURLs:(id*)arg4 info:(id*)arg5 ;
-(void)exportWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)exportWithOptions:(id)arg1 networkAccessAllowed:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_requestFileURLsForAsset:(id)arg1 withOptions:(id)arg2 networkAccessAllowed:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)_requestImageURLForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 progressHandler:(/*^block*/id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(int)_requestVideoURLForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 progressHandler:(/*^block*/id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)_requestLivePhotoURLsForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 progressHandler:(/*^block*/id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)_handleRequestResultHandlerForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 progress:(id)arg3 processingUnitCount:(unsigned long long)arg4 options:(id)arg5 withFileUrls:(id)arg6 info:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
@end

