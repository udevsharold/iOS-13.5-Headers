/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMPreviewGenerator : NSObject <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(CGSize)thumbnailFillSizeForWidth:(double)arg1 imageSize:(CGSize)arg2 ;
+(CGImageRef)newCroppedAndRescaledImageFromImage:(CGImageRef)arg1 constraints:(IMPreviewConstraints)arg2 targetPxSize:(CGSize)arg3 ;
+(BOOL)shouldScaleUpPreview;
+(double)maxUpScale;
+(id)UTITypes;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(CGRect)_scaledTargetRectForSize:(CGSize)arg1 andThumbnailSize:(CGSize)arg2 ;
+(BOOL)shouldShadePreview;
+(id)previewExtension;
+(BOOL)writesToDisk;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 outSize:(CGSize*)arg3 error:(id*)arg4 ;
@end

