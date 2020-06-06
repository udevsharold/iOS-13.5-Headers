/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList;

@interface GEOPreloadStep : NSObject {

	SCD_Struct_GE32 coord;
	double routeIdx;
	GEOTileKeyList* wantedTiles;
	double startTime;
	double endTime;
	unsigned bytesLoaded;
	unsigned bytesLoadedFromNetwork;
	unsigned generation;
	unsigned numRetries;
	unsigned hasError : 1;
	unsigned hasLifetimeError : 1;
	unsigned nearManeuver : 1;
	unsigned loading : 1;
	unsigned loaded : 1;

}
-(BOOL)okToLoad;
-(void)resetErrors;
-(double)networkDataRateKB;
@end

