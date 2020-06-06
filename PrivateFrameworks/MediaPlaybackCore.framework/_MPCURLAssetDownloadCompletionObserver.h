/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject {

	AVURLAsset* _asset;
	/*^block*/id _completionHandler;

}

@property (nonatomic,__weak,readonly) AVURLAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(AVURLAsset *)asset;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void)_downloadCompleteSuccessNotification:(id)arg1 ;
-(void)_downloadCompleteFailedNotification:(id)arg1 ;
-(void)_notifyCompletionHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

