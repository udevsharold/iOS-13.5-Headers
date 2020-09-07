/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationObserver.h>
#import <libobjc.A.dylib/MNCommuteDestinationComparisonScore.h>

@protocol GEODirectionServiceTicket;
@class MNCommuteDestination, NSDate, NSString;

@interface MNCommuteDestinationETAScore : MNCommuteDestinationScore <MNCommuteDestinationObserver, MNCommuteDestinationComparisonScore> {

	int _score;
	BOOL _destinationInvalid;
	MNCommuteDestination* _otherDestination;
	double _otherDestinationTravelTime;
	NSDate* _lastRouteUpdate;
	id<GEODirectionServiceTicket> _directionsRequestTicket;

}

@property (assign,nonatomic,__weak) MNCommuteDestination * otherDestination;                     //@synthesize otherDestination=_otherDestination - In the implementation block
@property (assign,nonatomic) double otherDestinationTravelTime;                                  //@synthesize otherDestinationTravelTime=_otherDestinationTravelTime - In the implementation block
@property (nonatomic,retain) NSDate * lastRouteUpdate;                                           //@synthesize lastRouteUpdate=_lastRouteUpdate - In the implementation block
@property (nonatomic,retain) id<GEODirectionServiceTicket> directionsRequestTicket;              //@synthesize directionsRequestTicket=_directionsRequestTicket - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)weight;
-(int)score;
-(id)_routeAttributes;
-(id)initWithDestination:(id)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(id)_directionsRequestFeedback;
-(void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3 ;
-(void)commuteDestination:(id)arg1 didChangeRemainingTime:(double)arg2 ;
-(void)_updateScoreAndDestinationInvalid;
-(MNCommuteDestination *)otherDestination;
-(double)otherDestinationTravelTime;
-(NSDate *)lastRouteUpdate;
-(BOOL)supportsComparisonType:(unsigned long long)arg1 ;
-(void)setOtherDestination:(MNCommuteDestination *)arg1 ;
-(void)setLastRouteUpdate:(NSDate *)arg1 ;
-(id<GEODirectionServiceTicket>)directionsRequestTicket;
-(void)setDirectionsRequestTicket:(id<GEODirectionServiceTicket>)arg1 ;
-(BOOL)_readyForRoute;
-(void)_requestRoute;
-(void)setOtherDestinationTravelTime:(double)arg1 ;
-(void)updateComparisonDestination:(id)arg1 ofType:(unsigned long long)arg2 ;
@end
