/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocationInfo;

@interface MKMuninGroundViewInfo : NSObject {

	double _startHeading;
	double _endHeading;
	GEOLocationInfo* _locationInfo;

}

@property (nonatomic,readonly) double startHeading;                         //@synthesize startHeading=_startHeading - In the implementation block
@property (nonatomic,readonly) double endHeading;                           //@synthesize endHeading=_endHeading - In the implementation block
@property (nonatomic,readonly) GEOLocationInfo * locationInfo;              //@synthesize locationInfo=_locationInfo - In the implementation block
-(GEOLocationInfo *)locationInfo;
-(double)startHeading;
-(double)endHeading;
-(BOOL)isHeadingInRange:(double)arg1 ;
-(id)initWithStartHeading:(double)arg1 endHeading:(double)arg2 localityName:(id)arg3 locationName:(id)arg4 secondaryLocationName:(id)arg5 ;
@end

