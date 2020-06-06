/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class CLGeocoder, _MKURLParser, LPMapMetadata, LPMapCollectionMetadata;

@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	BOOL _cancelled;
	CLGeocoder* _geocoder;
	_MKURLParser* _parser;
	LPMapMetadata* _mapMetadata;
	LPMapCollectionMetadata* _collectionMetadata;

}
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
-(void)cancel;
-(void)start;
-(void)complete;
-(void)fail;
-(void)continueWithBaseSnapshotOptions:(id)arg1 mapItems:(id)arg2 ;
-(void)completeWithCollection;
-(void)completeWithDirections;
-(void)resolveMapRegionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeWithSearchQuery:(id)arg1 ;
-(void)completeWithMapItem:(id)arg1 ;
-(id)geocoder;
-(void)completeWithPlacemark:(id)arg1 ;
@end

