/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>

@class NSString;

@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate, GEOSimpleTileRequesterSubclass> {

	BOOL _hasUpdatedManifestForHTTP410;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE58*)newExpiringTilesets;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(void)failedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3 ;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 ;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1 ;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(id)_deviceRegionSKUQueryItemForTileSet:(id)arg1 ;
@end

