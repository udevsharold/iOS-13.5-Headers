/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATDownloadProgressObserver <NSObject>
@required
-(void)atcDidEnqueueAsset:(id)arg1;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;
-(void)atcDidUpdateDownloadStateForAssets:(id)arg1;

@end

