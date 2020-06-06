/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INRideCompletionStatus, INRideVehicle, INRideDriver, NSDate, CLPlacemark, NSArray, INRideOption, NSUserActivity;


@protocol INRideStatusExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * rideIdentifier; 
@property (assign,nonatomic) long long phase; 
@property (nonatomic,copy) INRideCompletionStatus * completionStatus; 
@property (nonatomic,copy) INRideVehicle * vehicle; 
@property (nonatomic,copy) INRideDriver * driver; 
@property (nonatomic,copy) NSDate * estimatedPickupDate; 
@property (nonatomic,copy) NSDate * estimatedDropOffDate; 
@property (nonatomic,copy) NSDate * estimatedPickupEndDate; 
@property (nonatomic,copy) CLPlacemark * pickupLocation; 
@property (nonatomic,copy) NSArray * waypoints; 
@property (nonatomic,copy) CLPlacemark * dropOffLocation; 
@property (nonatomic,copy) INRideOption * rideOption; 
@property (nonatomic,retain) NSUserActivity * userActivityForCancelingInApplication; 
@property (nonatomic,copy) NSArray * additionalActionActivities; 
@required
-(id)init;
-(long long)phase;
-(void)setPhase:(long long)arg1;
-(INRideDriver *)driver;
-(void)setDriver:(id)arg1;
-(NSArray *)waypoints;
-(void)setWaypoints:(id)arg1;
-(CLPlacemark *)pickupLocation;
-(void)setPickupLocation:(id)arg1;
-(CLPlacemark *)dropOffLocation;
-(void)setDropOffLocation:(id)arg1;
-(NSString *)rideIdentifier;
-(void)setRideIdentifier:(id)arg1;
-(INRideCompletionStatus *)completionStatus;
-(void)setCompletionStatus:(id)arg1;
-(INRideVehicle *)vehicle;
-(void)setVehicle:(id)arg1;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(id)arg1;
-(NSDate *)estimatedDropOffDate;
-(void)setEstimatedDropOffDate:(id)arg1;
-(NSDate *)estimatedPickupEndDate;
-(void)setEstimatedPickupEndDate:(id)arg1;
-(INRideOption *)rideOption;
-(void)setRideOption:(id)arg1;
-(NSUserActivity *)userActivityForCancelingInApplication;
-(void)setUserActivityForCancelingInApplication:(id)arg1;
-(NSArray *)additionalActionActivities;
-(void)setAdditionalActionActivities:(id)arg1;

@end

