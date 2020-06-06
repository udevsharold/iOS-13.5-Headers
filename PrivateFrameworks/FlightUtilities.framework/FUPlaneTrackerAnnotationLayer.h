/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface FUPlaneTrackerAnnotationLayer : CALayer {

	CALayer* _planeImageLayer;
	CLLocationCoordinate2D _startLocation;
	CLLocationCoordinate2D _endLocation;

}

@property (assign,nonatomic) CLLocationCoordinate2D startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D endLocation;                //@synthesize endLocation=_endLocation - In the implementation block
@property (assign,nonatomic) double currentProgress; 
@property (readonly) CLLocationCoordinate2D currentLocation; 
@property (assign,nonatomic,__weak) CALayer * planeImageLayer;                  //@synthesize planeImageLayer=_planeImageLayer - In the implementation block
-(id)init;
-(CLLocationCoordinate2D)startLocation;
-(CLLocationCoordinate2D)endLocation;
-(void)setStartLocation:(CLLocationCoordinate2D)arg1 ;
-(void)setEndLocation:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)currentLocation;
-(void)updatePlaneStateForProgress:(double)arg1 ;
-(void)setPlaneImage:(id)arg1 ;
-(CALayer *)planeImageLayer;
-(void)setPlaneImageLayer:(CALayer *)arg1 ;
-(CLLocationCoordinate2D)geodesicLocationForStartPosition:(CLLocationCoordinate2D)arg1 endPosition:(CLLocationCoordinate2D)arg2 positionPercentage:(double)arg3 ;
-(double)defaultHeadingForStartPosition:(CLLocationCoordinate2D)arg1 endPosition:(CLLocationCoordinate2D)arg2 positionPercentage:(double)arg3 ;
@end

