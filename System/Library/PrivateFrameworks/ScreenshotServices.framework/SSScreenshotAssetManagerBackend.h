/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSScreenshotAssetManagerBackend <NSObject>
@required
-(void)registerEntryWithImage:(id)arg1 options:(id)arg2 identifierHandler:(/*^block*/id)arg3;
-(void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(/*^block*/id)arg2;
-(void)updateImage:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)saveImageToTemporaryLocation:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeEntryWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

