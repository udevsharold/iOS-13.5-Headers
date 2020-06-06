/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class CPLRUDictionary, NSObject;

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource {

	unsigned long long _backgroundCacheSize;
	unsigned long long _cacheSize;
	CPLRUDictionary* _cachedArtworkRepresentations;
	NSObject*<OS_dispatch_queue> _cachedArtworkRepresentationsAccessQueue;
	long long _resumeToForegroundCacheSize;

}
+(id)sharedRadioArtworkDataSource;
-(id)init;
-(void)dealloc;
-(void)_clearCache;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(void)_handleDidEnterBackgroundNotification:(id)arg1 ;
-(void)_handleDidReceiveMemoryWarningNotification:(id)arg1 ;
-(void)_handleWillEnterForegroundNotification:(id)arg1 ;
-(void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2 ;
-(void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(BOOL)arg2 ;
@end

