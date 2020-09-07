/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractMapServiceTicket.h>

@protocol GEOMapItem;
@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	id<GEOMapItem> _mapItemToRefine;

}
-(id)description;
-(void)cancel;
-(id)initWithTraits:(id)arg1 ;
-(SCD_Struct_GE2)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(id)resultSectionHeader;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 ;
-(void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 refinedHandler:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 ;
@end
