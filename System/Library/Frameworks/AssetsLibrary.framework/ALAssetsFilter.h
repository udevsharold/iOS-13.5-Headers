/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALAssetsFilterInternal;

@interface ALAssetsFilter : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsFilterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)allAssets;
+(id)allPhotos;
+(id)allVideos;
-(id)init;
-(void)dealloc;
-(ALAssetsFilterInternal *)internal;
-(void)setInternal:(ALAssetsFilterInternal *)arg1 ;
-(int)_filter;
-(void)_setFilter:(int)arg1 ;
@end

