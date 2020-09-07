/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVRouteDetectorCoordinator : NSObject {

	BOOL _routeDetectionEnabled;

}

@property (assign,getter=isRouteDetectionEnabled,nonatomic) BOOL routeDetectionEnabled;              //@synthesize routeDetectionEnabled=_routeDetectionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL multipleRoutesDetected; 
+(BOOL)multipleRoutesDetected;
+(void)endDetectingRoutes;
+(void)beginDetectingRoutes;
+(id)routeDetectorCoordinatorQueue;
+(id)sharedSystemRouteDetector;
+(void)updateMultipleRoutesDetected;
+(void)setMultipleRoutesDetected:(BOOL)arg1 ;
-(void)dealloc;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
-(BOOL)multipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
@end
