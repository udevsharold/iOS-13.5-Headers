/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PLThumbnailLoadingAsset <NSObject>
@optional
-(id)uuid;
-(CGSize*)imageSize;
-(id)thumbnailIdentifier;

@required
-(id)objectID;
-(BOOL)complete;
-(unsigned long long)effectiveThumbnailIndex;
-(id)pl_photoLibrary;
-(long long)cloudPlaceholderKind;

@end

