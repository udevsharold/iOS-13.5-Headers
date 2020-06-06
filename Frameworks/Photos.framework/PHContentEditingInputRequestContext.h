/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHMediaRequestContext.h>

@class PHAdjustmentDataRequest, PHVideoRequest, PHImageRequest, PHContentEditingInputResult, NSProgress, PHImageResourceChooser, NSArray, NSMutableIndexSet, PAImageConversionServiceClient, PHContentEditingInputRequestOptions;

@interface PHContentEditingInputRequestContext : PHMediaRequestContext {

	BOOL _useRAWAsUnadjustedBase;
	PHAdjustmentDataRequest* _adjustmentRequest;
	PHVideoRequest* _videoRequest;
	unsigned long long _imageBaseRequestIndex;
	PHImageRequest* _displayImageRequest;
	os_unfair_lock_s _lock;
	PHContentEditingInputResult* _contentEditingInputResult;
	unsigned long long _inflightMediaRequestCount;
	NSProgress* _adjustmentProgress;
	NSProgress* _videoProgress;
	NSProgress* _imageProgress;
	PHImageResourceChooser* _backupChooser;
	NSArray* _assetResources;
	NSMutableIndexSet* _requestIndexesOfAssetResourceRequests;
	PAImageConversionServiceClient* _imageConversionClient;
	PHContentEditingInputRequestOptions* _options;

}

@property (nonatomic,readonly) PHContentEditingInputRequestOptions * options;              //@synthesize options=_options - In the implementation block
-(PHContentEditingInputRequestOptions *)options;
-(long long)type;
-(void)cancel;
-(/*^block*/id)progressHandler;
-(BOOL)isNetworkAccessAllowed;
-(id)initialRequests;
-(id)progresses;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(id)_assetResources;
-(BOOL)_shouldRequestVideo;
-(id)_lazyImageProgress;
-(id)_lazyVideoProgress;
-(void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 useRAWAsUnadjustedBase:(BOOL)arg5 resultHandler:(/*^block*/id)arg6 ;
-(BOOL)_shouldRequestImage;
-(id)_lazyAdjustmentProgress;
-(id)_videoBehaviorSpecForBaseVersion:(long long)arg1 ;
-(id)_imageBehaviorSpecForBaseVersion:(long long)arg1 ;
-(long long)_adjustmentBaseVersionFromResult:(id)arg1 request:(id)arg2 canHandleAdjustmentData:(BOOL*)arg3 ;
-(void)_renderVideoFromVideoURL:(id)arg1 asset:(id)arg2 adjustmentData:(id)arg3 canHandleAdjustmentData:(BOOL)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)_baseMediaRequestsForBaseVersion:(long long)arg1 error:(id*)arg2 ;
-(void)_prepareAndAddMediaRequestsToChildRequests:(id)arg1 ;
-(long long)_assetResourceTypeForImageWithBaseVersion:(long long)arg1 ;
-(id)_assetResourceForType:(long long)arg1 ;
-(id)_largestUnadjustedDerivativeImageResource;
-(BOOL)_hasAnyPenultimateResource;
-(id)_resourceRequestForAssetResource:(id)arg1 wantsURLOnly:(BOOL)arg2 progress:(id)arg3 ;
-(void)_prepareAndAddFlippingRenderURLRequestsToChildRequestsIfNeeded:(id)arg1 forBaseVersion:(long long)arg2 ;
-(void)_setVideoResourceURLsForFlippingRendersIfNeeded;
-(void)_finishIfAllCompleteWithRequest:(id)arg1 ;
-(id)_errorFromAssetMediaResult:(id)arg1 ;
@end

