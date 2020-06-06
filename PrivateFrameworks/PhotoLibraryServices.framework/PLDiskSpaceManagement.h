/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLDiskSpaceManagement : NSObject
+(unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(BOOL)arg2 shouldKeepRecentlyViewedAssets:(BOOL)arg3 fromPhotoLibrary:(id)arg4 ;
+(unsigned long long)purgeExpiredOutboundSharingAssetsFromPhotoLibrary:(id)arg1 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromPhotoMetadataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 skipAssets:(id)arg4 ;
+(unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 ;
+(long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(BOOL)arg2 ;
@end

