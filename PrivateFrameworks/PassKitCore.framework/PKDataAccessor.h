/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSData, NSBundle, PKRemoteAssetManager;

@interface PKDataAccessor : NSObject {

	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,readonly) NSData * manifestHash; 
@property (nonatomic,readonly) NSData * archiveData; 
@property (nonatomic,readonly) NSData * serializedFileWrapper; 
@property (nonatomic,readonly) NSBundle * bundle; 
@property (nonatomic,readonly) PKRemoteAssetManager * remoteAssetManager; 
@property (nonatomic,readonly) BOOL remoteAssetsDownloaded; 
-(id)dictionary;
-(NSBundle *)bundle;
-(id)content;
-(NSData *)archiveData;
-(void)updateSettings:(unsigned long long)arg1 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(id)remoteAssetManagerForSEIDs:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(NSData *)manifestHash;
-(NSData *)serializedFileWrapper;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKRemoteAssetManager *)remoteAssetManager;
-(id)displayProfileOfType:(long long)arg1 ;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 ;
-(void)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)remoteAssetsDownloaded;
-(BOOL)remoteAssetsDownloadedForScreenScale:(double)arg1 suffix:(id)arg2 ;
@end

