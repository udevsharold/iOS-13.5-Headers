/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUCellConfigurationContext.h>

@class SUImageCache, ISURLOperationPool, SUImageDataProvider, UIImage;

@interface SUArtworkCellContext : SUCellConfigurationContext {

	SUImageCache* _imageCache;
	ISURLOperationPool* _imagePool;
	SUImageDataProvider* _imageProvider;
	UIImage* _placeholderImage;

}

@property (nonatomic,retain) SUImageCache * imageCache;                        //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) ISURLOperationPool * imagePool;                   //@synthesize imagePool=_imagePool - In the implementation block
@property (nonatomic,retain) SUImageDataProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                       //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(void)dealloc;
-(SUImageCache *)imageCache;
-(void)setImageProvider:(SUImageDataProvider *)arg1 ;
-(void)setImageCache:(SUImageCache *)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(SUImageDataProvider *)imageProvider;
-(ISURLOperationPool *)imagePool;
-(void)setImagePool:(ISURLOperationPool *)arg1 ;
@end

