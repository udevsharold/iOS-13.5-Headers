/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class VKMapSnapshot, UIImage, UITraitCollection;

@interface MKMapSnapshot : NSObject {

	VKMapSnapshot* _snapshot;
	UIImage* _image;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
+(id)createSnapshotWithOptions:(id)arg1 timeoutInSeconds:(long long)arg2 ;
-(UIImage *)image;
-(UITraitCollection *)traitCollection;
-(CGPoint)pointForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)snapshotWithAnnotationView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_prepareForRenderWithAnnotationViews:(id)arg1 ;
-(void)_displayAppleLogoForMapType:(unsigned long long)arg1 withScale:(double)arg2 forDarkMode:(BOOL)arg3 ;
-(id)_initWithSnapshot:(id)arg1 traitCollection:(id)arg2 ;
-(CLLocationCoordinate2D)_coordinateForPoint:(CGPoint)arg1 ;
-(BOOL)_hasNoDataPlaceholders;
@end
