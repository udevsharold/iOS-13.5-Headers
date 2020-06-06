/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHPhotoLibrary, PHFetchResult, LPApplePhotosMomentMetadata, NSString;

@interface LPApplePhotosMetadataProviderSpecialization : LPMetadataProviderSpecialization <PXPhotoLibraryUIChangeObserver> {

	BOOL _cancelled;
	int _pendingImageRequest;
	PHPhotoLibrary* _photoLibrary;
	PHFetchResult* _keyAssetFetch;
	LPApplePhotosMomentMetadata* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)fail;
-(void)didFetchKeyAsset:(id)arg1 ;
-(void)completeWithMetadata:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
@end

