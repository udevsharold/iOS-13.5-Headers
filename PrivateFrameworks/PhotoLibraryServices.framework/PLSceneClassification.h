/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject

@property (assign,nonatomic) unsigned sceneIdentifier; 
@property (assign,nonatomic) double confidence; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg1 asset:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4 ;
+(id)PLJunkSceneClassificationIDForLabel:(id)arg1 ;
+(void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg1 library:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)debugLogDescription;
@end

