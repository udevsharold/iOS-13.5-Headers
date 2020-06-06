/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>

@protocol GEOVenueIdentifier;
@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter> {

	id<GEOVenueIdentifier> _identifier;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(id<GEOVenueIdentifier>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
@end

