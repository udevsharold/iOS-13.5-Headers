/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATAssetLinkControllerObserver.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSMutableOrderedSet, NSObject, NSOperationQueue, ATAssetLinkController, NSString;

@interface NMSMediaSyncInfoUpdater : NSObject <ATAssetLinkControllerObserver> {

	NSMutableDictionary* _syncInfo;
	NSMutableOrderedSet* _targetsNeedingSyncInfoSynchronize;
	NSObject*<OS_dispatch_source> _currentSyncInfoSynchronizeTimer;
	NSOperationQueue* _queue;
	BOOL _observing;
	ATAssetLinkController* _assetLinkController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMediaSyncInfoUpdater;
-(id)init;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2 ;
-(void)_handleMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMusicRecommendationsDidUpdateNotification:(id)arg1 ;
-(void)_setNeedsMediaSyncInfoUpdate;
-(void)_applyUpdatesFromAsset:(id)arg1 ;
-(void)beginUpdatingSyncInfo;
-(void)endUpdatingSyncInfo;
@end
