/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CPBitmapStore;

@interface ICLetterpressImageCache : NSObject {

	NSMutableDictionary* _imageCache;
	CPBitmapStore* _serializedCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) CPBitmapStore * serializedCache;               //@synthesize serializedCache=_serializedCache - In the implementation block
+(id)sharedCache;
+(double)letterpressImagePadding;
+(id)imageWithLetterpressAlignmentInsetsForImage:(id)arg1 ;
+(id)serializedCacheKeyForImageNamed:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 version:(unsigned long long)arg5 ;
+(id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 addAlignmentInsets:(BOOL)arg4 appearanceInfo:(id)arg5 ;
-(id)init;
-(void)purge;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(id)imageWithCacheName:(id)arg1 tintColor:(id)arg2 addAlignmentInsets:(BOOL)arg3 appearanceInfo:(id)arg4 version:(unsigned long long)arg5 imageCreationBlock:(/*^block*/id)arg6 ;
-(id)imageNamed:(id)arg1 tintColor:(id)arg2 addAlignmentInsets:(BOOL)arg3 appearanceInfo:(id)arg4 version:(unsigned long long)arg5 ;
-(CPBitmapStore *)serializedCache;
-(id)imageNamed:(id)arg1 tintColor:(id)arg2 appearanceInfo:(id)arg3 version:(unsigned long long)arg4 ;
-(void)setSerializedCache:(CPBitmapStore *)arg1 ;
@end

