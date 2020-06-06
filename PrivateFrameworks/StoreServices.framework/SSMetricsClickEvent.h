/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString, NSNumber;

@interface SSMetricsClickEvent : SSMetricsBaseEvent

@property (nonatomic,retain) id actionDetails; 
@property (nonatomic,retain) NSString * actionType; 
@property (nonatomic,retain) id impressions; 
@property (nonatomic,retain) NSString * locationDescription; 
@property (nonatomic,retain) NSNumber * positionX; 
@property (nonatomic,retain) NSNumber * positionY; 
@property (nonatomic,retain) NSString * targetIdentifier; 
@property (nonatomic,retain) NSString * targetType; 
@property (nonatomic,retain) NSString * targetURL; 
-(id)init;
-(id)description;
-(NSString *)targetURL;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)locationDescription;
-(NSString *)targetType;
-(void)setTargetType:(NSString *)arg1 ;
-(NSString *)targetIdentifier;
-(NSNumber *)positionX;
-(NSNumber *)positionY;
-(id)impressions;
-(id)actionDetails;
-(void)setActionDetails:(id)arg1 ;
-(void)setImpressions:(id)arg1 ;
-(void)setLocationDescription:(NSString *)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(void)setPositionX:(NSNumber *)arg1 ;
-(void)setPositionY:(NSNumber *)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(void)setTargetURL:(NSString *)arg1 ;
@end

