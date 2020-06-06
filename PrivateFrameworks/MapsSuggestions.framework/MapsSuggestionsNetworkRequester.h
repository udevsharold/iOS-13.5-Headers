/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSuggestionsNetworkRequester <MapsSuggestionsObject>
@required
-(BOOL)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(/*^block*/id)arg5;
-(BOOL)resolveMapItemHandleData:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)reverseGeocodeCoordinate:(SCD_Struct_Ma2)arg1 completion:(/*^block*/id)arg2;
-(BOOL)forwardGeocodeAddressString:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)searchString:(id)arg1 maxResults:(unsigned)arg2 completion:(/*^block*/id)arg3;
-(BOOL)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned)arg4 completion:(/*^block*/id)arg5;
-(BOOL)forwardGeocodePostalAddress:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)composedWaypointForMapItem:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)composedWaypointForLocation:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)composedWaypointForAddressString:(id)arg1 completion:(/*^block*/id)arg2;

@end

