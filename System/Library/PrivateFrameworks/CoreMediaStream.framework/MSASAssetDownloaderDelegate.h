/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSASAssetDownloaderDelegate <NSObject>
@required
-(void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned long long)arg2;
-(void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4;
-(void)MSASAssetDownloaderDidFinishBatch:(id)arg1;

@end
