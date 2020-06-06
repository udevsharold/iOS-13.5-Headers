/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOComposedEnrouteNotice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding> {

	GEOTrafficCamera* _trafficCamera;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasSpeedLimitText; 
@property (nonatomic,readonly) NSString * speedLimitText; 
@property (nonatomic,readonly) BOOL hasSpeedThreshold; 
@property (nonatomic,readonly) double speedThreshold; 
@property (nonatomic,readonly) BOOL hasCameraPriority; 
@property (nonatomic,readonly) unsigned cameraPriority; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(int)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)position;
-(unsigned)highlightDistance;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
-(double)speedThreshold;
-(BOOL)hasSpeedLimitText;
-(NSString *)speedLimitText;
-(BOOL)hasSpeedThreshold;
-(BOOL)hasCameraPriority;
-(unsigned)cameraPriority;
-(id)initWithEnrouteNotice:(id)arg1 trafficCamera:(id)arg2 onRoute:(id)arg3 ;
@end

