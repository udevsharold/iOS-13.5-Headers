/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray;

@interface SPAssetCacheClientCache : NSObject {

	NSString* _gizmoCacheIdentifier;
	NSMutableDictionary* _assets;
	NSMutableArray* _keys;
	long long _size;
	unsigned long long _cacheType;

}

@property (nonatomic,retain) NSString * gizmoCacheIdentifier;              //@synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assets;                 //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;                        //@synthesize keys=_keys - In the implementation block
@property (assign,nonatomic) long long size;                               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long cacheType;                 //@synthesize cacheType=_cacheType - In the implementation block
-(long long)size;
-(NSMutableArray *)keys;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(NSMutableDictionary *)assets;
-(void)setAssets:(NSMutableDictionary *)arg1 ;
-(id)cacheDirectory;
-(void)deleteAsset:(id)arg1 ;
-(id)dataForImageWithName:(id)arg1 ;
-(id)cachedImages;
-(void)setGizmoCacheIdentifier:(NSString *)arg1 ;
-(unsigned long long)cacheType;
-(void)setCacheType:(unsigned long long)arg1 ;
-(NSString *)gizmoCacheIdentifier;
-(void)clearedCache;
-(BOOL)checkAvailableSpaceForAssetWithName:(id)arg1 length:(unsigned long long)arg2 ;
-(BOOL)saveAssetData:(id)arg1 forAsset:(id)arg2 ;
-(void)clearSpaceForAsset:(unsigned long long)arg1 ;
-(void)deleteDataForAsset:(id)arg1 ;
-(id)pathForAssetDataWithName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 cacheType:(unsigned long long)arg2 ;
-(void)syncAssets:(id)arg1 ;
-(BOOL)addAsset:(id)arg1 withName:(id)arg2 sendImage:(BOOL)arg3 ;
-(void)addedAssetWithName:(id)arg1 ;
-(void)deleteAssetWithName:(id)arg1 ;
-(void)deletedAssetWithName:(id)arg1 ;
-(void)deleteAllAssets;
@end

