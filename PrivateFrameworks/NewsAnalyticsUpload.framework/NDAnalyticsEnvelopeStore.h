/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCacheCoordinatorDelegate.h>
#import <libobjc.A.dylib/NDAnalyticsEnvelopeStore.h>

@protocol NDAnalyticsEnvelopeStore <NSObject>
@required
-(id)envelopesForEntries:(id)arg1;

@end


@protocol NDAnalyticsEnvelopeStoreObserver;
@class FCAssetStore, FCCacheCoordinator, NSString;

@interface NDAnalyticsEnvelopeStore : NSObject <FCCacheCoordinatorDelegate, NDAnalyticsEnvelopeStore> {

	id<NDAnalyticsEnvelopeStoreObserver> _observer;
	FCAssetStore* _assetStore;
	FCCacheCoordinator* _cacheCoordinator;

}

@property (nonatomic,retain) FCAssetStore * assetStore;                                         //@synthesize assetStore=_assetStore - In the implementation block
@property (nonatomic,retain) FCCacheCoordinator * cacheCoordinator;                             //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<NDAnalyticsEnvelopeStoreObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NDAnalyticsEnvelopeStoreObserver>)observer;
-(void)setObserver:(id<NDAnalyticsEnvelopeStoreObserver>)arg1 ;
-(FCCacheCoordinator *)cacheCoordinator;
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1 ;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2 ;
-(FCAssetStore *)assetStore;
-(void)setAssetStore:(FCAssetStore *)arg1 ;
-(void)setCacheCoordinator:(FCCacheCoordinator *)arg1 ;
-(id)initWithStoreDirectoryFileURL:(id)arg1 ;
-(void)enableFlushing;
-(void)copyEnvelopes:(id)arg1 ;
-(id)allEntriesWithHoldToken:(id*)arg1 ;
-(id)sizesOfEnvelopesWithEntries:(id)arg1 ;
-(void)deleteEnvelopesForEntries:(id)arg1 ;
-(void)_reportEnvelopesToNewsAutomationIfNeeded:(id)arg1 ;
-(void)_deleteEnvelopesForKeysFromStore:(id)arg1 ;
-(id)envelopesForEntries:(id)arg1 ;
@end

