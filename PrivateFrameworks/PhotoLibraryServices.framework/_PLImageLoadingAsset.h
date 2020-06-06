/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset,NSObject>
@required
-(id)uuid;
-(int)orientation;
-(double)duration;
-(short)kind;
-(CGSize*)originalImageSize;
-(double)aspectRatio;
-(CGSize*)imageSize;
-(BOOL)isVideo;
-(id)debugFilename;
-(BOOL)isJPEG;
-(id)originalFilename;
-(short)savedAssetType;
-(id)pathForOriginalFile;
-(BOOL)hasAdjustments;
-(BOOL)hasLegacyAdjustments;
-(BOOL)isCloudSharedAsset;
-(id)uniformTypeIdentifier;
-(id)pathForAdjustmentFile;
-(short)kindSubtype;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isInFlight;
-(id)thumbnailIdentifier;
-(BOOL)isCloudPlaceholder;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(BOOL)isLoopingVideo;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isRAW;
-(BOOL)isPartOfBurst;
-(BOOL)isStreamedVideo;
-(id)pathForAdjustmentDataFile;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)isOriginalSRGB;
-(unsigned long long)localResourcesState;

@end

