/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATAssetLinkControllerObserver <NSObject>
@optional
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;
-(void)assetLinkController:(id)arg1 didProcessFinishedAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didProcessAllTrackAssetsWithAssetType:(id)arg2;
-(void)assetLinkControllerDidProcessAllTrackAssets:(id)arg1;
-(void)assetLinkController:(id)arg1 didChangeDownloadStateForAssets:(id)arg2;

@required
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;

@end

