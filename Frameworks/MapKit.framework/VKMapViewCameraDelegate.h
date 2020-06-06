/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKMapViewCameraDelegate <NSObject>
@optional
-(void)mapLayerDidChangeVisibleRegion;
-(void)mapLayerWillChangeRegionAnimated:(BOOL)arg1;
-(void)mapLayerDidChangeRegionAnimated:(BOOL)arg1;
-(void)mapLayerDidFinishInitialTrackingAnimation;
-(id)mapLayerPresentationForAnnotation:(id)arg1;
-(void)mapLayerDidBecomePitched:(BOOL)arg1;
-(void)mapLayerCanEnter3DModeDidChange:(BOOL)arg1;
-(void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
-(void)mapLayerCanZoomInDidChange:(BOOL)arg1;
-(void)mapLayerCanZoomOutDidChange:(BOOL)arg1;
-(void)mapLayerNavigationCameraHasStartedPanning;
-(void)mapLayerNavigationCameraHasStoppedPanning;
-(void)mapLayerNavigationCameraDidLeaveDefaultZoom;
-(void)mapLayerNavigationCameraDidReturnToDefaultZoom;
-(void)mapLayerWillAnimateToLocation:(CGSize)arg1;
-(void)mapLayerWasUnableToAnimate;

@end

