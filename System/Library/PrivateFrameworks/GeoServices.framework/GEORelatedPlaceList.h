/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDRelatedPlace, NSArray;

@interface GEORelatedPlaceList : NSObject {

	GEOPDRelatedPlace* _relatedPlace;

}

@property (nonatomic,readonly) NSArray * mapIdentifiers; 
@property (nonatomic,readonly) int type; 
-(int)type;
-(id)initWithRelatedPlace:(id)arg1 ;
-(NSArray *)mapIdentifiers;
@end

