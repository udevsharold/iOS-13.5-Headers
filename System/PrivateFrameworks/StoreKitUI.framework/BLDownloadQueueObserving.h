/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLDownloadQueueObserving <NSObject>
@optional
-(void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
-(void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
-(void)downloadQueueDownloadsDidChange:(id)arg1;
-(void)downloadQueue:(id)arg1 purchaseAttemptForID:(id)arg2 buyParams:(id)arg3 isAudioBook:(BOOL)arg4;
-(void)downloadQueue:(id)arg1 purchaseAttemptForRequest:(id)arg2;
-(void)downloadQueue:(id)arg1 purchasedDidCompleteWithResponse:(id)arg2;
-(void)downloadQueue:(id)arg1 purchasedDidFailWithResponse:(id)arg2;

@end

