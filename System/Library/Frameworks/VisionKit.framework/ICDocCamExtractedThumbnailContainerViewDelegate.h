/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDocCamExtractedThumbnailContainerViewDelegate <NSObject>
@required
-(BOOL)thumbnailContainerViewSupportsReordering:(id)arg1;
-(BOOL)thumbnailContainerViewIsVisible:(id)arg1;
-(void)thumbnailContainerViewIncrementCurrentIndex:(id)arg1;
-(void)thumbnailContainerViewDecrementCurrentIndex:(id)arg1;
-(unsigned long long)thumbnailContainerViewCurrentIndex:(id)arg1;
-(unsigned long long)thumbnailContainerViewNumberOfItems:(id)arg1;
-(void)thumbnailContainerView:(id)arg1 moveItemFromIndex:(long long)arg2 toIndex:(long long)arg3;

@end

