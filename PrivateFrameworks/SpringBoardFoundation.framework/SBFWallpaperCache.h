/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, SBFMappedImageCache;

@interface SBFWallpaperCache : NSObject {

	NSString* _path;
	NSObject*<OS_dispatch_queue> _queue;
	SBFMappedImageCache* _imageCache;

}

@property (nonatomic,readonly) SBFMappedImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)wallpaperCache;
-(id)initWithOptions:(id)arg1 ;
-(SBFMappedImageCache *)imageCache;
-(id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(/*^block*/id)arg2 ;
-(id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)colorBoxesForKey:(id)arg1 generatingIfNeceesaryFromImage:(id)arg2 ;
-(void)warmupForKey:(id)arg1 ;
-(void)removeEverythingWithCompletion:(/*^block*/id)arg1 ;
@end

