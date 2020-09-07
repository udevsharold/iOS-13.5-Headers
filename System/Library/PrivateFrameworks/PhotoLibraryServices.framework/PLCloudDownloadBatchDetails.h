/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface PLCloudDownloadBatchDetails : NSObject {

	BOOL _hasResourceChanges;
	long long _numberOfPhotos;
	long long _numberOfVideos;
	NSArray* _cmmUUIDsToNotify;
	NSArray* _flippedPlaceholderAssetUUIDs;
	NSSet* _confirmedResourceIDs;

}

@property (assign,nonatomic) BOOL hasResourceChanges;                           //@synthesize hasResourceChanges=_hasResourceChanges - In the implementation block
@property (assign,nonatomic) long long numberOfPhotos;                          //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (assign,nonatomic) long long numberOfVideos;                          //@synthesize numberOfVideos=_numberOfVideos - In the implementation block
@property (nonatomic,copy) NSArray * cmmUUIDsToNotify;                          //@synthesize cmmUUIDsToNotify=_cmmUUIDsToNotify - In the implementation block
@property (nonatomic,copy) NSArray * flippedPlaceholderAssetUUIDs;              //@synthesize flippedPlaceholderAssetUUIDs=_flippedPlaceholderAssetUUIDs - In the implementation block
@property (nonatomic,copy) NSSet * confirmedResourceIDs;                        //@synthesize confirmedResourceIDs=_confirmedResourceIDs - In the implementation block
-(NSSet *)confirmedResourceIDs;
-(NSArray *)cmmUUIDsToNotify;
-(NSArray *)flippedPlaceholderAssetUUIDs;
-(long long)numberOfVideos;
-(long long)numberOfPhotos;
-(BOOL)hasResourceChanges;
-(void)unionBatchDetails:(id)arg1 ;
-(void)setHasResourceChanges:(BOOL)arg1 ;
-(void)setNumberOfPhotos:(long long)arg1 ;
-(void)setNumberOfVideos:(long long)arg1 ;
-(void)setCmmUUIDsToNotify:(NSArray *)arg1 ;
-(void)setFlippedPlaceholderAssetUUIDs:(NSArray *)arg1 ;
-(void)setConfirmedResourceIDs:(NSSet *)arg1 ;
@end
