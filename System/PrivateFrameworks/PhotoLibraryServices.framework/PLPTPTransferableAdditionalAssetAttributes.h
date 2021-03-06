/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber, PLSpatialOverCaptureInformation;


@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>
@property (nonatomic,copy,readonly) NSString * originatingAssetIdentifier; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailHeight; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailLength; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailOffset; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailWidth; 
@property (nonatomic,retain,readonly) NSString * exifTimestampString; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@property (nonatomic,retain,readonly) PLSpatialOverCaptureInformation * spatialOverCaptureInformation; 
@required
-(long long)ptpTrashedState;
-(NSNumber *)embeddedThumbnailOffset;
-(NSString *)originatingAssetIdentifier;
-(NSNumber *)embeddedThumbnailHeight;
-(NSNumber *)embeddedThumbnailLength;
-(NSNumber *)embeddedThumbnailWidth;
-(NSString *)exifTimestampString;
-(PLSpatialOverCaptureInformation *)spatialOverCaptureInformation;

@end

