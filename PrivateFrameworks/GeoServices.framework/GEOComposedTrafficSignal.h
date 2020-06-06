/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOComposedEnrouteNotice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTrafficSignal;

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding> {

	GEOTrafficSignal* _trafficSignal;

}

@property (nonatomic,readonly) int type; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(int)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)position;
-(id)initWithEnrouteNotice:(id)arg1 trafficSignal:(id)arg2 onRoute:(id)arg3 ;
@end

