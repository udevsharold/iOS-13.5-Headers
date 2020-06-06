/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKPlaceCardPhotosControllerDelegate <NSObject>
@optional
-(void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2 presentingViewController:(id)arg3;
-(void)placeCardPhotosControllerDidOpenFullscreenPhotos:(id)arg1;
-(void)placeCardPhotosControllerDidCloseFullscreenPhotos:(id)arg1;
-(BOOL)shouldUseSmallPhotosWithPhotosController:(id)arg1;
-(void)placeCardPhotosController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3;
-(id)muninContainerForPlaceCardPhotosController:(id)arg1;
-(void)cleanMuninContainerForPlaceCardPhotosController:(id)arg1;
-(BOOL)shouldMoveMuninStorefrontViewForPlaceCardPhotosController:(id)arg1;

@end

