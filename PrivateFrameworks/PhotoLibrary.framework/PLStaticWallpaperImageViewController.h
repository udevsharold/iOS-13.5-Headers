/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLWallpaperImageViewController.h>

@interface PLStaticWallpaperImageViewController : PLWallpaperImageViewController {

	BOOL _moveAndScaleDisabled;

}

@property (assign,nonatomic) BOOL colorSamplingEnabled; 
@property (assign,nonatomic) BOOL moveAndScaleDisabled;              //@synthesize moveAndScaleDisabled=_moveAndScaleDisabled - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)_preferredWhitePointAdaptivityStyle;
-(id)initWithPhoto:(id)arg1 ;
-(id)wallpaperImage;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4 ;
-(void)setWallpaperForLocations:(long long)arg1 ;
-(void)setColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)colorSamplingEnabled;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(id)initWithUIImage:(id)arg1 name:(id)arg2 ;
-(id)_findSubviewOfView:(id)arg1 withClass:(Class)arg2 ;
-(id)_wallPaperPreviewControllerForPhotoIrisAsset:(id)arg1 ;
-(id)_wallPaperPreviewControllerForAsset:(id)arg1 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)moveAndScaleDisabled;
-(void)setMoveAndScaleDisabled:(BOOL)arg1 ;
@end

