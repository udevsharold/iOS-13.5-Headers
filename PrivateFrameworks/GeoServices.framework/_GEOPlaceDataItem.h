/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapItem.h>

@protocol GEOMapItemVenueInfo;
@class GEOMapItemIdentifier, GEOPDPlace, NSMapTable, GEOPDMultiLocalizedString, GEOMapItemDetourInfo, NSData, geo_isolater, GEOPlace, _GEOEncyclopedicInfo, GEOStorefrontInfo, GEOStorefrontPresentationInfo, GEOAddressObject, NSString, GEOBusinessHours, NSArray, GEOMapRegion, GEOAddress, NSDictionary, NSTimeZone, NSDate, GEOAssociatedApp, GEOMapItemClientAttributes, GEOPlaceResult, GEOPDFlyover, GEOMuninViewState, GEOPriceDescription, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim, GEORestaurantFeaturesLink, GEOMessageLink, GEORelatedPlaceList, GEOPlacecardLayoutConfiguration, GEOMapItemContainedPlace, GEOStyleAttributes;

@interface _GEOPlaceDataItem : NSObject <GEOMapItem> {

	GEOMapItemIdentifier* _identifier;
	GEOPDPlace* _placeData;
	NSMapTable* _attributionMap;
	GEOPDMultiLocalizedString* _disambiguationLabel;
	GEOMapItemDetourInfo* _detourInfo;
	BOOL _isTransitDisplayFeature;
	NSData* _externalTransitStationCode;
	geo_isolater* _lazyIvarIsolater;
	GEOPlace* _place;
	_GEOEncyclopedicInfo* _encyclopedicInfo;
	GEOStorefrontInfo* _storefrontInfo;
	GEOStorefrontPresentationInfo* _storefrontPresentationInfo;
	id<GEOMapItemVenueInfo> _venueInfo;
	GEOAddressObject* _addressObject;
	NSString* _name;
	GEOBusinessHours* _businessHours;
	NSArray* _spatialMappedPlaceCategories;
	NSArray* _childItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * secondaryName; 
@property (nonatomic,readonly) NSString * secondarySpokenName; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) BOOL disputed; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) SCD_Struct_GE32 centerCoordinate; 
@property (nonatomic,readonly) int referenceFrame; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) BOOL hasDisplayMinZoom; 
@property (nonatomic,readonly) float displayMinZoom; 
@property (nonatomic,readonly) BOOL hasDisplayMaxZoom; 
@property (nonatomic,readonly) float displayMaxZoom; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSTimeZone * timezone; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegionOrNil; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegionOrNil; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) BOOL contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) BOOL isEventAllDay; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_tips,nonatomic,readonly) NSArray * tips; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
@property (getter=_associatedApp,nonatomic,readonly) GEOAssociatedApp * associatedApp; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeResult,nonatomic,readonly) GEOPlaceResult * placeResult; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_responseStatusIsIncomplete,nonatomic,readonly) BOOL responseStatusIncomplete; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_isTransitDisplayFeature,nonatomic,readonly) BOOL isTransitDisplayFeature; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOTransitAttribution> transitAttribution; 
@property (getter=_transitVehiclePosition,nonatomic,readonly) id<GEOTransitVehiclePosition> transitVehiclePosition; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_muninViewState,nonatomic,readonly) GEOMuninViewState * muninViewState; 
@property (getter=_storefrontInfo,nonatomic,readonly) GEOStorefrontInfo * storefrontInfo; 
@property (getter=_storefrontPresentationInfo,nonatomic,readonly) GEOStorefrontPresentationInfo * storefrontPresentationInfo; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_identifier,nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (getter=_placeDisplayType,nonatomic,readonly) int placeDisplayType; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) BOOL hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_priceDescription,nonatomic,readonly) GEOPriceDescription * priceDescription; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_childItems,nonatomic,readonly) NSArray * childItems; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_amenities,nonatomic,readonly) NSArray * amenities; 
@property (getter=_hasEncyclopedicInfo,nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (getter=_encyclopedicInfo,nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (getter=_hasTelephone,nonatomic,readonly) BOOL hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_optsOutOfTelephoneAds,nonatomic,readonly) BOOL optsOutOfTelephoneAds; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_poiCategory,nonatomic,readonly) NSString * poiCategory; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_mapsCategoryId,nonatomic,readonly) NSString * mapsCategoryId; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,readonly) NSArray * spatialMappedCategories; 
@property (nonatomic,readonly) NSArray * spatialMappedPlaceCategories; 
@property (nonatomic,readonly) BOOL hasVenueCapacity; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (getter=_hasFeatureLink,nonatomic,readonly) BOOL hasFeatureLink; 
@property (getter=_featureLink,nonatomic,readonly) GEORestaurantFeaturesLink * featureLink; 
@property (getter=_parsecSectionType,nonatomic,readonly) int parsecSectionType; 
@property (getter=_isStandaloneBrand,nonatomic,readonly) BOOL isStandAloneBrand; 
@property (getter=_messageLink,nonatomic,readonly) GEOMessageLink * messageLink; 
@property (getter=_quickLinks,nonatomic,readonly) NSArray * quickLinks; 
@property (getter=_placeCollections,nonatomic,readonly) NSArray * placeCollections; 
@property (getter=_relatedPlaceList,nonatomic,readonly) GEORelatedPlaceList * relatedPlaceList; 
@property (getter=_placecardLayoutConfiguration,nonatomic,readonly) GEOPlacecardLayoutConfiguration * placecardLayoutConfiguration; 
@property (getter=_hasBrandMUID,nonatomic,readonly) BOOL hasBrandMUID; 
@property (getter=_brandMUID,nonatomic,readonly) unsigned long long brandMUID; 
@property (nonatomic,readonly) GEOMapItemDetourInfo * detourInfo; 
@property (nonatomic,readonly) BOOL hasExpiredComponents; 
@property (getter=_hasVenueFeatureType,nonatomic,readonly) BOOL hasVenueFeatureType; 
@property (getter=_venueFeatureType,nonatomic,readonly) int venueFeatureType; 
@property (getter=_venueInfo,nonatomic,readonly) id<GEOMapItemVenueInfo> venueInfo; 
@property (getter=_browseCategories,nonatomic,readonly) NSArray * browseCategories; 
@property (getter=_placeDisplayStyle,nonatomic,readonly) int placeDisplayStyle; 
@property (getter=_annotatedItemList,nonatomic,readonly) id<GEOAnnotatedItemList> annotatedItemList; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) BOOL hasCurrentOperatingHours; 
@property (getter=_hasBusinessHours,nonatomic,readonly) BOOL hasBusinessHours; 
@property (getter=_businessHours,nonatomic,readonly) NSArray * businessHours; 
@property (getter=_hasLinkedServices,nonatomic,readonly) BOOL hasLinkedServices; 
@property (getter=_linkedServices,nonatomic,readonly) NSArray * linkedServices; 
@property (nonatomic,readonly) NSData * externalTransitStationCode; 
@property (getter=_hasWifiFingerprintLabelType,nonatomic,readonly) BOOL hasWifiFingerprintLabelType; 
@property (getter=_wifiFingerprintLabelType,nonatomic,readonly) int wifiFingerprintLabelType; 
@property (getter=_hasWifiFingerprintConfidence,nonatomic,readonly) BOOL hasWifiFingerprintConfidence; 
@property (getter=_wifiFingerprintConfidence,nonatomic,readonly) unsigned wifiFingerprintConfidence; 
@property (getter=_hasWifiFingerprintLabelStatusCode,nonatomic,readonly) BOOL hasWifiFingerprintLabelStatusCode; 
@property (getter=_wifiFingerprintLabelStatusCode,nonatomic,readonly) int wifiFingerprintLabelStatusCode; 
@property (getter=_containedPlace,nonatomic,readonly) GEOMapItemContainedPlace * containedPlace; 
@property (getter=_isInLinkedPlaceRelationship,nonatomic,readonly) BOOL inLinkedPlaceRelationship; 
@property (getter=_hasGroundViewLocationId,nonatomic,readonly) BOOL hasGroundViewLocationId; 
@property (getter=_groundViewLocationId,nonatomic,readonly) unsigned long long groundViewLocationId; 
@property (getter=_walletPlaceStyling,nonatomic,readonly) GEOStyleAttributes * walletPlaceStyling; 
@property (getter=_walletPlaceLocalizedString,nonatomic,readonly) NSString * walletPlaceLocalizedString; 
@property (getter=_walletPlaceLocalizedStringLocale,nonatomic,readonly) NSString * walletPlaceLocalizedStringLocale; 
@property (getter=_walletCategoryStyling,nonatomic,readonly) GEOStyleAttributes * walletCategoryStyling; 
@property (getter=_walletCategoryLocalizedString,nonatomic,readonly) NSString * walletCategoryLocalizedString; 
@property (getter=_walletCategoryLocalizedStringLocale,nonatomic,readonly) NSString * walletCategoryLocalizedStringLocale; 
@property (getter=_walletMapsCategoryIdentifier,nonatomic,readonly) NSString * walletMapsCategoryIdentifier; 
@property (getter=_walletCategoryIdentifier,nonatomic,readonly) NSString * walletCategoryIdentifier; 
@property (getter=_enableRAPLightweightFeedback,nonatomic,readonly) BOOL enableRAPLightweightFeedback; 
@property (getter=_showSuggestAnEditButton,nonatomic,readonly) BOOL showSuggestAnEditButton; 
@property (getter=_alternateSearchableNames,nonatomic,readonly) NSArray * alternateSearchableNames; 
-(NSString *)description;
-(NSString *)name;
-(BOOL)isValid;
-(id)_identifier;
-(SCD_Struct_GE32)coordinate;
-(NSData *)encodedData;
-(NSString *)eventName;
-(int)referenceFrame;
-(NSDictionary *)addressDictionary;
-(NSArray *)areasOfInterest;
-(GEOMapRegion *)geoFenceMapRegion;
-(NSTimeZone *)timezone;
-(int)_placeType;
-(id)_styleAttributes;
-(id)_webURL;
-(id)_roadAccessPoints;
-(GEOMapRegion *)displayMapRegion;
-(unsigned long long)_muid;
-(id)_transitVehiclePosition;
-(id)_photos;
-(id)_telephone;
-(BOOL)isDisputed;
-(int)_addressGeocodeAccuracy;
-(id)_place;
-(id)_attribution;
-(NSDate *)eventDate;
-(BOOL)isEventAllDay;
-(id)_businessHours;
-(BOOL)_hasMUID;
-(id)_vendorID;
-(int)_resultProviderID;
-(id)_placeData;
-(id)_browseCategories;
-(id)initWithPlaceData:(id)arg1 ;
-(id)spokenNameForLocale:(id)arg1 ;
-(BOOL)hasAmenityType:(int)arg1 ;
-(BOOL)valueForAmenityType:(int)arg1 ;
-(id)_spokenAddressForLocale:(id)arg1 ;
-(id)_arrivalMapRegionForTransportType:(int)arg1 ;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(id)_asPlaceInfo;
-(id)_mapItemByStrippingOptionalData;
-(id)addressObject;
-(id)shortAddress;
-(id)weatherDisplayName;
-(id)_bestAvatarBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(id)_bestNavbarBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(id)_bestHeroBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(BOOL)isEqualToMapItem:(id)arg1 ;
-(void)iterateGroundViewsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)secondaryName;
-(NSString *)secondarySpokenName;
-(SCD_Struct_GE32)centerCoordinate;
-(BOOL)hasDisplayMinZoom;
-(float)displayMinZoom;
-(BOOL)hasDisplayMaxZoom;
-(float)displayMaxZoom;
-(GEOAddress *)geoAddress;
-(GEOMapRegion *)displayMapRegionOrNil;
-(GEOMapRegion *)geoFenceMapRegionOrNil;
-(int)contactAddressType;
-(NSString *)contactName;
-(NSString *)contactSpokenName;
-(BOOL)contactIsMe;
-(id)_reviews;
-(id)_tips;
-(id)_associatedApp;
-(id)_clientAttributes;
-(id)_placeResult;
-(id)_placeDataAsData;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)_hasResultProviderID;
-(BOOL)_isTransitDisplayFeature;
-(BOOL)_hasTransit;
-(id)_transitInfo;
-(id)_transitAttribution;
-(BOOL)_hasFlyover;
-(id)_flyover;
-(id)_flyoverAnnouncementMessage;
-(id)_muninViewState;
-(id)_storefrontInfo;
-(id)_storefrontPresentationInfo;
-(int)_placeDisplayType;
-(BOOL)_hasAreaInMeters;
-(double)_areaInMeters;
-(id)_businessURL;
-(id)_priceDescription;
-(BOOL)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(BOOL)_hasPriceRange;
-(unsigned)_priceRange;
-(id)_resultSnippetLocationString;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(id)_childItems;
-(BOOL)_hasAnyAmenities;
-(id)_amenities;
-(BOOL)_hasEncyclopedicInfo;
-(id)_encyclopedicInfo;
-(BOOL)_hasTelephone;
-(BOOL)_optsOutOfTelephoneAds;
-(id)_disambiguationName;
-(unsigned long long)_openingHoursOptions;
-(BOOL)_needsAttribution;
-(id)_providerURL;
-(id)_poiSurveyURLString;
-(id)_poiPinpointURLString;
-(id)_photosAttribution;
-(id)_reviewsAttribution;
-(id)_poiCategory;
-(unsigned long long)_customIconID;
-(id)_mapsCategoryId;
-(id)_additionalPlaceInfos;
-(BOOL)_hasBusinessClaim;
-(id)_businessClaim;
-(NSArray *)spatialMappedCategories;
-(NSArray *)spatialMappedPlaceCategories;
-(BOOL)hasVenueCapacity;
-(long long)venueCapacity;
-(BOOL)_hasFeatureLink;
-(id)_featureLink;
-(int)_parsecSectionType;
-(BOOL)_isStandaloneBrand;
-(id)_messageLink;
-(id)_quickLinks;
-(id)_placeCollections;
-(id)_relatedPlaceList;
-(id)_placecardLayoutConfiguration;
-(BOOL)_hasBrandMUID;
-(unsigned long long)_brandMUID;
-(GEOMapItemDetourInfo *)detourInfo;
-(BOOL)hasExpiredComponents;
-(BOOL)_hasVenueFeatureType;
-(int)_venueFeatureType;
-(id)_venueInfo;
-(int)_placeDisplayStyle;
-(id)_annotatedItemList;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasCurrentOperatingHours;
-(BOOL)_hasBusinessHours;
-(BOOL)_hasLinkedServices;
-(id)_linkedServices;
-(NSData *)externalTransitStationCode;
-(BOOL)_hasWifiFingerprintLabelType;
-(int)_wifiFingerprintLabelType;
-(BOOL)_hasWifiFingerprintConfidence;
-(unsigned)_wifiFingerprintConfidence;
-(BOOL)_hasWifiFingerprintLabelStatusCode;
-(int)_wifiFingerprintLabelStatusCode;
-(id)_containedPlace;
-(BOOL)_isInLinkedPlaceRelationship;
-(BOOL)_hasGroundViewLocationId;
-(unsigned long long)_groundViewLocationId;
-(id)_walletPlaceStyling;
-(id)_walletPlaceLocalizedString;
-(id)_walletPlaceLocalizedStringLocale;
-(id)_walletCategoryStyling;
-(id)_walletCategoryLocalizedString;
-(id)_walletCategoryLocalizedStringLocale;
-(id)_walletMapsCategoryIdentifier;
-(id)_walletCategoryIdentifier;
-(BOOL)_enableRAPLightweightFeedback;
-(BOOL)_showSuggestAnEditButton;
-(id)_alternateSearchableNames;
-(id)_mapItemBySettingIsTransitDisplayFeature:(BOOL)arg1 ;
-(id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2 disambiguationLabel:(id)arg3 detourInfo:(id)arg4 externalTransitStationCode:(id)arg5 ;
-(id)_attributionInfoForAttribution:(id)arg1 requirement:(int)arg2 ;
-(id)_placeDataStyleAttributes;
-(id)_attributionWithAnnotatedItemList:(id)arg1 ;
-(id)_wifiFingerprintComponent;
-(id)_bestBrandIconOfType:(int)arg1 size:(CGSize)arg2 allowSmaller:(BOOL)arg3 ;
-(id)_groundViewLabel;
-(id)initWithPlaceData:(id)arg1 detourInfo:(id)arg2 ;
-(BOOL)_showAttributionForAttribution:(id)arg1 requirement:(int)arg2 ;
-(BOOL)_hasMoreForAttribution:(id)arg1 requirement:(int)arg2 ;
-(BOOL)_showAddForAttribution:(id)arg1 requirement:(int)arg2 ;
-(id)_displayNameForAttribution:(id)arg1 requirement:(int)arg2 ;
-(id)_logoPathForAttribution:(id)arg1 requirement:(int)arg2 scale:(double)arg3 ;
@end

