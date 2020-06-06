/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMotionContextDelegate.h>
#import <libobjc.A.dylib/MNGuidanceManagerDelegate.h>
#import <libobjc.A.dylib/MNLocationManagerHeadingObserver.h>
#import <libobjc.A.dylib/MNLocationManagerObserver.h>
#import <libobjc.A.dylib/MNLocationTrackerDelegate.h>
#import <libobjc.A.dylib/MNNavigationAudioSessionDelegate.h>
#import <libobjc.A.dylib/MNTimeAndDistanceUpdaterDelegate.h>
#import <libobjc.A.dylib/MNTracePlayerObserver.h>
#import <libobjc.A.dylib/MNVoiceControllerObserver.h>
#import <libobjc.A.dylib/MNSessionUpdateManagerDelegate.h>

@protocol MNAudioSession, MNGuidanceManager;
@class MNRouteManager, GEOComposedWaypoint, MNLocationTracker, GEOMotionContext, MNClassicGuidanceManager, MNGuidanceEventManager, MNTimeAndDistanceUpdater, NSString, MNNavigationSessionLogger, MNNavigationTraceManager, MNTraceNavigationEventRecorder, MNTrafficIncidentAlert, GEONavigationGuidanceState, MNObserverHashTable, GEOApplicationAuditToken, GEOResourceManifestUpdateAssertion, MNGuidanceSignInfo, NSUUID, MNLocation;

@interface MNNavigationSession : NSObject <GEOMotionContextDelegate, MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNNavigationAudioSessionDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVoiceControllerObserver, MNSessionUpdateManagerDelegate> {

	int _navigationType;
	MNRouteManager* _routeManager;
	GEOComposedWaypoint* _destination;
	MNLocationTracker* _locationTracker;
	GEOMotionContext* _motionContext;
	id<MNAudioSession> _audioSession;
	id<MNGuidanceManager> _guidanceManager;
	MNClassicGuidanceManager* _classicGuidanceManager;
	MNGuidanceEventManager* _guidanceEventManager;
	MNTimeAndDistanceUpdater* _timeAndDistanceUpdater;
	NSString* _voiceLanguage;
	MNNavigationSessionLogger* _logger;
	MNNavigationTraceManager* _traceManager;
	MNTraceNavigationEventRecorder* _navigationEventRecorder;
	MNTrafficIncidentAlert* _activeTrafficIncidentAlert;
	BOOL _guidancePromptsEnabled;
	BOOL _isConnectedToCarplay;
	BOOL _isSpeakingTrafficIncidentAlert;
	GEONavigationGuidanceState* _guidanceState;
	MNObserverHashTable* _observers;
	NSString* _tileLoaderClient;
	GEOApplicationAuditToken* _auditToken;
	GEOResourceManifestUpdateAssertion* _manifestUpdateAssertion;
	MNGuidanceSignInfo* _lastSignInfo;
	NSUUID* _lastLaneID;
	NSUUID* _lastJunctionViewID;
	BOOL _isAllowedToSwitchTransportTypes;

}

@property (nonatomic,readonly) BOOL traceIsPlaying; 
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                    //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;                //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) MNRouteManager * routeManager;                        //@synthesize routeManager=_routeManager - In the implementation block
@property (nonatomic,readonly) GEOMotionContext * motionContext;                     //@synthesize motionContext=_motionContext - In the implementation block
@property (nonatomic,retain) id<MNAudioSession> audioSession;                        //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,readonly) MNNavigationTraceManager * traceManager;              //@synthesize traceManager=_traceManager - In the implementation block
@property (nonatomic,readonly) BOOL isAllowedToSwitchTransportTypes;                 //@synthesize isAllowedToSwitchTransportTypes=_isAllowedToSwitchTransportTypes - In the implementation block
@property (nonatomic,readonly) int navigationType;                                   //@synthesize navigationType=_navigationType - In the implementation block
@property (nonatomic,readonly) MNLocation * lastMatchedLocation; 
@property (nonatomic,readonly) int navigationState; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) double remainingDistance; 
@property (nonatomic,readonly) double distanceToManeuverStart; 
@property (nonatomic,readonly) double distanceToManeuverEnd; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled;                            //@synthesize guidancePromptsEnabled=_guidancePromptsEnabled - In the implementation block
@property (assign,nonatomic) BOOL isConnectedToCarplay;                              //@synthesize isConnectedToCarplay=_isConnectedToCarplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(GEOApplicationAuditToken *)auditToken;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(GEOComposedWaypoint *)destination;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)setAudioSession:(id<MNAudioSession>)arg1 ;
-(double)remainingDistance;
-(double)remainingTime;
-(int)navigationState;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)motionContextDidUpdateMotion:(id)arg1 ;
-(GEOMotionContext *)motionContext;
-(BOOL)guidancePromptsEnabled;
-(BOOL)isConnectedToCarplay;
-(int)navigationType;
-(id<MNAudioSession>)audioSession;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedHeading:(id)arg1 ;
-(void)_startLocationUpdates;
-(void)_stopLocationUpdates;
-(void)_startAudioSession;
-(void)_stopAudioSession;
-(void)locationTracker:(id)arg1 didChangeState:(int)arg2 ;
-(void)locationTrackerDidEnterPreArrivalState:(id)arg1 ;
-(void)locationTrackerDidArrive:(id)arg1 ;
-(void)locationTrackerDidTimeoutInArrivalRegion:(id)arg1 ;
-(void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 ;
-(void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2 ;
-(void)locationTrackerWillReroute:(id)arg1 ;
-(void)locationTracker:(id)arg1 didSuppressReroute:(id)arg2 ;
-(void)locationTrackerDidCancelReroute:(id)arg1 ;
-(void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6 ;
-(void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2 ;
-(void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2 ;
-(void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5 ;
-(void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2 ;
-(void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2 ;
-(void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2 ;
-(void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2 ;
-(void)updateManager:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3 ;
-(void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveETAError:(id)arg2 ;
-(BOOL)wantsETAUpdates;
-(id)routeInfoForUpdateManager:(id)arg1 ;
-(id)userLocationForUpdateManager:(id)arg1 ;
-(MNLocation *)lastMatchedLocation;
-(void)traceJumpedInTime;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1 ;
-(void)updateDestination:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)switchToRoute:(id)arg1 ;
-(void)stopCurrentGuidancePrompt;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(MNNavigationTraceManager *)traceManager;
-(MNRouteManager *)routeManager;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(BOOL)isCurrentlySpeaking;
-(void)tracePlayerDidStart:(id)arg1 ;
-(void)tracePlayerDidStop:(id)arg1 ;
-(void)tracePlayerDidPause:(id)arg1 ;
-(void)tracePlayerDidResume:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2 ;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4 ;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 ;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 ;
-(void)tracePlayerDidStayOnRoute:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2 ;
-(void)tracePlayerDidPauseLocationUpdates:(id)arg1 ;
-(void)tracePlayerDidResumeLocationUpdates:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(BOOL)traceIsPlaying;
-(void)audioSessionDidFinishAnnouncingArrival:(id)arg1 ;
-(void)audioSessionWillAnnounceArrival:(id)arg1 ;
-(double)distanceToManeuverStart;
-(void)guidanceManager:(id)arg1 didArriveWithAnnouncement:(id)arg2 ;
-(void)guidanceManager:(id)arg1 didStartWithAnnouncement:(id)arg2 ;
-(double)distanceToManeuverEnd;
-(void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4 ;
-(void)guidanceManagerHideSecondaryStep:(id)arg1 ;
-(void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4 ;
-(void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 ignorePromptStyle:(BOOL)arg4 stage:(unsigned long long)arg5 hasSecondaryManeuver:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)addInjectedEvent:(id)arg1 ;
-(void)voiceController:(id)arg1 didStartSpeakingPrompt:(id)arg2 ;
-(void)voiceController:(id)arg1 didActivateAudioSession:(BOOL)arg2 ;
-(BOOL)repeatCurrentGuidance;
-(BOOL)repeatCurrentTrafficAlert;
-(void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)timeAndDistanceUpdater:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4 ;
-(void)guidanceManagerBeginGuidanceUpdate:(id)arg1 ;
-(void)guidanceManager:(id)arg1 updateSignsWithInfo:(id)arg2 ;
-(void)guidanceManager:(id)arg1 showLaneDirections:(id)arg2 ;
-(void)guidanceManager:(id)arg1 hideLaneDirectionsForId:(id)arg2 ;
-(void)guidanceManagerEndGuidanceUpdate:(id)arg1 ;
-(void)guidanceManager:(id)arg1 triggerHaptics:(int)arg2 ;
-(void)guidanceManager:(id)arg1 usePersistentDisplay:(BOOL)arg2 ;
-(void)guidanceManager:(id)arg1 hideJunctionViewForId:(id)arg2 ;
-(void)guidanceManager:(id)arg1 showJunctionView:(id)arg2 ;
-(void)guidanceManager:(id)arg1 newGuidanceEventFeedback:(id)arg2 ;
-(void)guidanceManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2 ;
-(void)_closeTileLoader;
-(void)_openTileLoader;
-(void)_startMotionUpdates;
-(void)_startLocationTracking;
-(void)_startETAUpdates;
-(void)_startTravelTimeUpdates;
-(void)_startGuidanceAllowMidRouteStart:(BOOL)arg1 ;
-(void)_stopLocationTracking;
-(void)_stopETAUpdates;
-(void)_stopGuidance;
-(void)_stopTravelTimeUpdates;
-(void)_stopMotionUpdates;
-(id)_locationTrackerForTransportType:(int)arg1 navigationType:(int)arg2 ;
-(id)initWithRouteManager:(id)arg1 auditToken:(id)arg2 traceManager:(id)arg3 ;
-(void)startNavigationSessionWithDetails:(id)arg1 ;
-(void)stopNavigationSession;
-(BOOL)isAllowedToSwitchTransportTypes;
@end

