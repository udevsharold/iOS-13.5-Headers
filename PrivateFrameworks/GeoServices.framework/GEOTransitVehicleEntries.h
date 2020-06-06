/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol GEOTransitVehicleEntries <NSObject>
@property (nonatomic,readonly) unsigned long long firstTripID; 
@property (nonatomic,readonly) unsigned long long tripIDForNextUpcomingDeparture; 
@property (nonatomic,copy,readonly) NSArray * tripIDs; 
@property (nonatomic,copy,readonly) NSArray * upcomingTripIDs; 
@required
-(NSArray *)tripIDs;
-(unsigned long long)firstTripID;
-(unsigned long long)tripIDForNextUpcomingDeparture;
-(NSArray *)upcomingTripIDs;

@end
