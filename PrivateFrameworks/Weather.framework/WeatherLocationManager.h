/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol CLLocationManagerDelegate;
@class NSString, CLLocationManager, NSTimer, WeatherPreferences, NSDate;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate> {

	BOOL _locationTrackingIsReady;
	BOOL _locationUpdatesEnabled;
	BOOL _isInternalBuild;
	int _authorizationStatus;
	float _lastLocationAccuracy;
	NSString* _effectiveBundleIdentifier;
	id<CLLocationManagerDelegate> _delegate;
	CLLocationManager* _locationManager;
	unsigned long long _updateInterval;
	double _oldestAllowedUpdateTime;
	NSTimer* _delayedUpdateTimer;
	NSTimer* _accuracyFallbackTimer;
	WeatherPreferences* _preferences;
	NSDate* _lastLocationTimeStamp;
	double _lastLocationUpdateTime;
	double _nextPlannedUpdate;
	CLLocationCoordinate2D _lastLocationCoord;

}

@property (nonatomic,copy,readonly) NSString * effectiveBundleIdentifier;                //@synthesize effectiveBundleIdentifier=_effectiveBundleIdentifier - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                        //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                    //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL locationUpdatesEnabled;                                //@synthesize locationUpdatesEnabled=_locationUpdatesEnabled - In the implementation block
@property (assign,nonatomic) BOOL locationTrackingIsReady;                               //@synthesize locationTrackingIsReady=_locationTrackingIsReady - In the implementation block
@property (assign,nonatomic) unsigned long long updateInterval;                          //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) double oldestAllowedUpdateTime;                             //@synthesize oldestAllowedUpdateTime=_oldestAllowedUpdateTime - In the implementation block
@property (nonatomic,retain) NSTimer * delayedUpdateTimer;                               //@synthesize delayedUpdateTimer=_delayedUpdateTimer - In the implementation block
@property (nonatomic,retain) NSTimer * accuracyFallbackTimer;                            //@synthesize accuracyFallbackTimer=_accuracyFallbackTimer - In the implementation block
@property (nonatomic,retain) WeatherPreferences * preferences;                           //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D lastLocationCoord;                   //@synthesize lastLocationCoord=_lastLocationCoord - In the implementation block
@property (nonatomic,copy) NSDate * lastLocationTimeStamp;                               //@synthesize lastLocationTimeStamp=_lastLocationTimeStamp - In the implementation block
@property (assign,nonatomic) float lastLocationAccuracy;                                 //@synthesize lastLocationAccuracy=_lastLocationAccuracy - In the implementation block
@property (assign,nonatomic) double lastLocationUpdateTime;                              //@synthesize lastLocationUpdateTime=_lastLocationUpdateTime - In the implementation block
@property (assign,nonatomic) double nextPlannedUpdate;                                   //@synthesize nextPlannedUpdate=_nextPlannedUpdate - In the implementation block
@property (assign,nonatomic) BOOL isInternalBuild;                                       //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double distanceFilter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)locationManagerAuthorizationWithEffectiveBundleId:(id)arg1 ;
+(id)sharedWeatherLocationManager;
+(void)clearSharedLocationManager;
-(id)init;
-(void)dealloc;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id)location;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(double)distanceFilter;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(int)authorizationStatus;
-(void)setPreferences:(WeatherPreferences *)arg1 ;
-(WeatherPreferences *)preferences;
-(void)setUpdateInterval:(unsigned long long)arg1 ;
-(unsigned long long)updateInterval;
-(BOOL)isInternalBuild;
-(id)initWithPreferences:(id)arg1 ;
-(void)setAuthorizationStatus:(int)arg1 ;
-(NSString *)effectiveBundleIdentifier;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2 ;
-(void)stopLocationUpdate;
-(void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3 ;
-(void)clearLocalWeatherUpdateState;
-(BOOL)locationTrackingIsReady;
-(void)setLocationTrackingActive:(BOOL)arg1 ;
-(void)askForLocationManagerAuthorization;
-(BOOL)localWeatherAuthorized;
-(BOOL)isLocalStaleOrOutOfDate;
-(BOOL)isCacheOutOfDate;
-(void)forceLocationUpdate;
-(void)updateLocationWithNoConditionCheck;
-(void)cancelAccuracyFallbackTimer;
-(void)cancelDelayedUpdateTimer;
-(int)forceLoadingAuthorizationStatus;
-(void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3 shouldRequestAuthorization:(BOOL)arg4 ;
-(void)clearLastLocationUpdateTime;
-(void)setLocationUpdatesEnabled:(BOOL)arg1 ;
-(void)setLocationTrackingIsReady:(BOOL)arg1 ;
-(void)setLastLocationUpdateTime:(double)arg1 ;
-(double)lastLocationUpdateTime;
-(BOOL)locationUpdatesEnabled;
-(double)oldestAllowedUpdateTime;
-(void)setOldestAllowedUpdateTime:(double)arg1 ;
-(void)scheduleDelayedUpdate:(double)arg1 ;
-(NSDate *)lastLocationTimeStamp;
-(void)setLastLocationTimeStamp:(NSDate *)arg1 ;
-(float)lastLocationAccuracy;
-(CLLocationCoordinate2D)lastLocationCoord;
-(NSTimer *)delayedUpdateTimer;
-(void)setNextPlannedUpdate:(double)arg1 ;
-(void)delayedUpdateTimerDidFire:(id)arg1 ;
-(void)setDelayedUpdateTimer:(NSTimer *)arg1 ;
-(void)accuracyFallbackTimerDidFire:(id)arg1 ;
-(void)setAccuracyFallbackTimer:(NSTimer *)arg1 ;
-(void)setLastLocationCoord:(CLLocationCoordinate2D)arg1 ;
-(void)setLastLocationAccuracy:(float)arg1 ;
-(NSTimer *)accuracyFallbackTimer;
-(void)forceLocationManagerAuthorization;
-(void)monitorLocationAuthorization;
-(BOOL)hasCrossedHourBoundary;
-(BOOL)isLocationWithInRange:(id)arg1 ;
-(double)nextPlannedUpdate;
-(void)setIsInternalBuild:(BOOL)arg1 ;
@end

