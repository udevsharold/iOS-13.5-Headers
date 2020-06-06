/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectID, NSData, NSManagedObjectContext;


@protocol PHResourceChooserAsset <PLAssetID>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) NSData * imageRequestHints; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) BOOL hasAdjustments; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContextForFetchingResources; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) BOOL isRAWPlusJPEG; 
@property (nonatomic,readonly) unsigned long long originalResourceChoice; 
@required
-(NSManagedObjectID *)objectID;
-(long long)mediaType;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(BOOL)hasAdjustments;
-(unsigned long long)originalResourceChoice;
-(BOOL)isRAWPlusJPEG;
-(NSData *)imageRequestHints;
-(NSManagedObjectContext *)managedObjectContextForFetchingResources;

@end

