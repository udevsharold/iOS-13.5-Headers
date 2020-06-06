/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaEntity.h>

@class NSArray, MPMediaQuery, MPMediaItem;

@interface MPMediaItemCollection : MPMediaEntity {

	unsigned long long _containedMediaTypes;
	BOOL _initializedContainedMediaTypes;
	NSArray* _items;
	unsigned long long _itemsCount;
	MPMediaQuery* _itemsQuery;
	MPMediaItem* _representativeItem;

}

@property (nonatomic,readonly) long long groupingType; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) MPMediaItem * representativeItem; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long mediaTypes; 
+(BOOL)supportsSecureCoding;
+(id)titlePropertyForGroupingType:(long long)arg1 ;
+(id)collectionWithItems:(id)arg1 ;
+(id)sortTitlePropertyForGroupingType:(long long)arg1 ;
+(id)representativePersistentIDPropertyForGroupingType:(long long)arg1 ;
+(id)artworkCatalogCachePropertiesForGroupingType:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)items;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(MPMediaItem *)representativeItem;
-(id)initWithItems:(id)arg1 ;
-(unsigned long long)mediaTypes;
-(id)artworkCatalog;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(id)multiverseIdentifier;
-(long long)groupingType;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithItemsQuery:(id)arg1 ;
-(id)itemsQuery;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)_artworkCatalogRepresentativeItem;
-(id)albumArtistArtworkCatalog;
-(id)artistArtworkCatalog;
-(BOOL)MPSD_hasDownloadableItem;
-(BOOL)MPSD_hasDownloadingItem;
@end

