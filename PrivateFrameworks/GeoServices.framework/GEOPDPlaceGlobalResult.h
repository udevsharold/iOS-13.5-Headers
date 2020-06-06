/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAddressObjectGeocodingResult, GEOPDAutocompleteResult, GEOPDBatchCategoryLookupResult, GEOPDBatchMerchantLookupBrandResult, GEOPDBatchPopularNearbySearchResult, GEOPDBatchSpatialLookupResult, GEOPDBrandLookupResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDClusterGeocodingResult, GEOPDExternalTransitLookupResult, GEOPDFeatureIdGeocodingResult, GEOPDGeocodingResult, GEOPDGroundViewLabelResult, GEOPDInitialOfflineSuggestionResult, GEOPDIpGeoLookupResult, GEOPDLocationDirectedSearchResult, GEOPDMapsIdentifierPlaceLookupResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDOfflineAreaLookupResult, GEOPDOfflinePolygonQuadNodesResult, GEOPDOfflineProactiveRegionsResult, GEOPDOfflineSuggestedRegionsResult, GEOPDOfflineUpdateManifestResult, GEOPDPlaceCollectionLookupResult, GEOPDPlaceGlobalCommonResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDReverseGeocodingResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult, GEOPDSiriSearchResult, GEOPDTransitScheduleLookupResult, GEOPDVendorSpecificPlaceRefinementResult, GEOPDWifiFingerprintResult;

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAddressObjectGeocodingResult* _addressObjectGeocodingResult;
	GEOPDAutocompleteResult* _autocompleteResult;
	GEOPDBatchCategoryLookupResult* _batchCategoryLookupResult;
	GEOPDBatchMerchantLookupBrandResult* _batchMerchantLookupBrandResult;
	GEOPDBatchPopularNearbySearchResult* _batchPopularNearbySearchResult;
	GEOPDBatchSpatialLookupResult* _batchSpatialLookupResult;
	GEOPDBrandLookupResult* _brandLookupResult;
	GEOPDSearchBrowseCategorySuggestionResult* _browseCategorySuggestionResult;
	GEOPDCanonicalLocationSearchResult* _canonicalSearchResult;
	GEOPDCategorySearchResult* _categorySearchResult;
	GEOPDClusterGeocodingResult* _clusterGeocodingResult;
	GEOPDExternalTransitLookupResult* _externalTransitLookupResult;
	GEOPDFeatureIdGeocodingResult* _featureIdGeocodingResult;
	GEOPDGeocodingResult* _geocodingResult;
	GEOPDGroundViewLabelResult* _groundViewLabelResult;
	GEOPDInitialOfflineSuggestionResult* _initialOfflineSuggestionResult;
	GEOPDIpGeoLookupResult* _ipGeoLookupResult;
	GEOPDLocationDirectedSearchResult* _locationDirectedSearchResult;
	GEOPDMapsIdentifierPlaceLookupResult* _mapsIdentifierPlaceLookupResult;
	GEOPDMerchantLookupResult* _merchantLookupResult;
	GEOPDNearbySearchResult* _nearbySearchResult;
	GEOPDOfflineAreaLookupResult* _offlineAreaLookupResult;
	GEOPDOfflinePolygonQuadNodesResult* _offlinePolygonQuadNodesResult;
	GEOPDOfflineProactiveRegionsResult* _offlineProactiveRegionsResult;
	GEOPDOfflineSuggestedRegionsResult* _offlineSuggestedRegionsResult;
	GEOPDOfflineUpdateManifestResult* _offlineUpdateManifestResult;
	GEOPDPlaceCollectionLookupResult* _placeCollectionLookupResult;
	GEOPDPlaceGlobalCommonResult* _placeGlobalCommonResult;
	GEOPDPlaceLookupResult* _placeLookupResult;
	GEOPDPlaceRefinementResult* _placeRefinementResult;
	GEOPDPopularNearbySearchResult* _popularNearbySearchResult;
	GEOPDReverseGeocodingResult* _reverseGeocodingResult;
	GEOPDSearchFieldPlaceholderResult* _searchFieldPlaceholderResult;
	GEOPDSearchResult* _searchResult;
	GEOPDSearchZeroKeywordCategorySuggestionResult* _searchZeroKeywordCategorySuggestionResult;
	GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult* _searchZeroKeywordWithSearchResultsSuggestionResult;
	GEOPDSiriSearchResult* _siriSearchResult;
	GEOPDTransitScheduleLookupResult* _transitScheduleLookupResult;
	GEOPDVendorSpecificPlaceRefinementResult* _vendorSpecificPlaceRefinementResult;
	GEOPDWifiFingerprintResult* _wifiFingerprintResult;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addressObjectGeocodingResult : 1;
		unsigned read_autocompleteResult : 1;
		unsigned read_batchCategoryLookupResult : 1;
		unsigned read_batchMerchantLookupBrandResult : 1;
		unsigned read_batchPopularNearbySearchResult : 1;
		unsigned read_batchSpatialLookupResult : 1;
		unsigned read_brandLookupResult : 1;
		unsigned read_browseCategorySuggestionResult : 1;
		unsigned read_canonicalSearchResult : 1;
		unsigned read_categorySearchResult : 1;
		unsigned read_clusterGeocodingResult : 1;
		unsigned read_externalTransitLookupResult : 1;
		unsigned read_featureIdGeocodingResult : 1;
		unsigned read_geocodingResult : 1;
		unsigned read_groundViewLabelResult : 1;
		unsigned read_initialOfflineSuggestionResult : 1;
		unsigned read_ipGeoLookupResult : 1;
		unsigned read_locationDirectedSearchResult : 1;
		unsigned read_mapsIdentifierPlaceLookupResult : 1;
		unsigned read_merchantLookupResult : 1;
		unsigned read_nearbySearchResult : 1;
		unsigned read_offlineAreaLookupResult : 1;
		unsigned read_offlinePolygonQuadNodesResult : 1;
		unsigned read_offlineProactiveRegionsResult : 1;
		unsigned read_offlineSuggestedRegionsResult : 1;
		unsigned read_offlineUpdateManifestResult : 1;
		unsigned read_placeCollectionLookupResult : 1;
		unsigned read_placeGlobalCommonResult : 1;
		unsigned read_placeLookupResult : 1;
		unsigned read_placeRefinementResult : 1;
		unsigned read_popularNearbySearchResult : 1;
		unsigned read_reverseGeocodingResult : 1;
		unsigned read_searchFieldPlaceholderResult : 1;
		unsigned read_searchResult : 1;
		unsigned read_searchZeroKeywordCategorySuggestionResult : 1;
		unsigned read_searchZeroKeywordWithSearchResultsSuggestionResult : 1;
		unsigned read_siriSearchResult : 1;
		unsigned read_transitScheduleLookupResult : 1;
		unsigned read_vendorSpecificPlaceRefinementResult : 1;
		unsigned read_wifiFingerprintResult : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addressObjectGeocodingResult : 1;
		unsigned wrote_autocompleteResult : 1;
		unsigned wrote_batchCategoryLookupResult : 1;
		unsigned wrote_batchMerchantLookupBrandResult : 1;
		unsigned wrote_batchPopularNearbySearchResult : 1;
		unsigned wrote_batchSpatialLookupResult : 1;
		unsigned wrote_brandLookupResult : 1;
		unsigned wrote_browseCategorySuggestionResult : 1;
		unsigned wrote_canonicalSearchResult : 1;
		unsigned wrote_categorySearchResult : 1;
		unsigned wrote_clusterGeocodingResult : 1;
		unsigned wrote_externalTransitLookupResult : 1;
		unsigned wrote_featureIdGeocodingResult : 1;
		unsigned wrote_geocodingResult : 1;
		unsigned wrote_groundViewLabelResult : 1;
		unsigned wrote_initialOfflineSuggestionResult : 1;
		unsigned wrote_ipGeoLookupResult : 1;
		unsigned wrote_locationDirectedSearchResult : 1;
		unsigned wrote_mapsIdentifierPlaceLookupResult : 1;
		unsigned wrote_merchantLookupResult : 1;
		unsigned wrote_nearbySearchResult : 1;
		unsigned wrote_offlineAreaLookupResult : 1;
		unsigned wrote_offlinePolygonQuadNodesResult : 1;
		unsigned wrote_offlineProactiveRegionsResult : 1;
		unsigned wrote_offlineSuggestedRegionsResult : 1;
		unsigned wrote_offlineUpdateManifestResult : 1;
		unsigned wrote_placeCollectionLookupResult : 1;
		unsigned wrote_placeGlobalCommonResult : 1;
		unsigned wrote_placeLookupResult : 1;
		unsigned wrote_placeRefinementResult : 1;
		unsigned wrote_popularNearbySearchResult : 1;
		unsigned wrote_reverseGeocodingResult : 1;
		unsigned wrote_searchFieldPlaceholderResult : 1;
		unsigned wrote_searchResult : 1;
		unsigned wrote_searchZeroKeywordCategorySuggestionResult : 1;
		unsigned wrote_searchZeroKeywordWithSearchResultsSuggestionResult : 1;
		unsigned wrote_siriSearchResult : 1;
		unsigned wrote_transitScheduleLookupResult : 1;
		unsigned wrote_vendorSpecificPlaceRefinementResult : 1;
		unsigned wrote_wifiFingerprintResult : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSearchResult; 
@property (nonatomic,retain) GEOPDSearchResult * searchResult; 
@property (nonatomic,readonly) BOOL hasGeocodingResult; 
@property (nonatomic,retain) GEOPDGeocodingResult * geocodingResult; 
@property (nonatomic,readonly) BOOL hasCanonicalSearchResult; 
@property (nonatomic,retain) GEOPDCanonicalLocationSearchResult * canonicalSearchResult; 
@property (nonatomic,readonly) BOOL hasReverseGeocodingResult; 
@property (nonatomic,retain) GEOPDReverseGeocodingResult * reverseGeocodingResult; 
@property (nonatomic,readonly) BOOL hasPlaceLookupResult; 
@property (nonatomic,retain) GEOPDPlaceLookupResult * placeLookupResult; 
@property (nonatomic,readonly) BOOL hasMerchantLookupResult; 
@property (nonatomic,retain) GEOPDMerchantLookupResult * merchantLookupResult; 
@property (nonatomic,readonly) BOOL hasPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDPlaceRefinementResult * placeRefinementResult; 
@property (nonatomic,readonly) BOOL hasSiriSearchResult; 
@property (nonatomic,retain) GEOPDSiriSearchResult * siriSearchResult; 
@property (nonatomic,readonly) BOOL hasLocationDirectedSearchResult; 
@property (nonatomic,retain) GEOPDLocationDirectedSearchResult * locationDirectedSearchResult; 
@property (nonatomic,readonly) BOOL hasAutocompleteResult; 
@property (nonatomic,retain) GEOPDAutocompleteResult * autocompleteResult; 
@property (nonatomic,readonly) BOOL hasBrowseCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionResult * browseCategorySuggestionResult; 
@property (nonatomic,readonly) BOOL hasCategorySearchResult; 
@property (nonatomic,retain) GEOPDCategorySearchResult * categorySearchResult; 
@property (nonatomic,readonly) BOOL hasPopularNearbySearchResult; 
@property (nonatomic,retain) GEOPDPopularNearbySearchResult * popularNearbySearchResult; 
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordCategorySuggestionResult * searchZeroKeywordCategorySuggestionResult; 
@property (nonatomic,readonly) BOOL hasSearchFieldPlaceholderResult; 
@property (nonatomic,retain) GEOPDSearchFieldPlaceholderResult * searchFieldPlaceholderResult; 
@property (nonatomic,readonly) BOOL hasBatchPopularNearbySearchResult; 
@property (nonatomic,retain) GEOPDBatchPopularNearbySearchResult * batchPopularNearbySearchResult; 
@property (nonatomic,readonly) BOOL hasVendorSpecificPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDVendorSpecificPlaceRefinementResult * vendorSpecificPlaceRefinementResult; 
@property (nonatomic,readonly) BOOL hasNearbySearchResult; 
@property (nonatomic,retain) GEOPDNearbySearchResult * nearbySearchResult; 
@property (nonatomic,readonly) BOOL hasAddressObjectGeocodingResult; 
@property (nonatomic,retain) GEOPDAddressObjectGeocodingResult * addressObjectGeocodingResult; 
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordWithSearchResultsSuggestionResult; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult * searchZeroKeywordWithSearchResultsSuggestionResult; 
@property (nonatomic,readonly) BOOL hasExternalTransitLookupResult; 
@property (nonatomic,retain) GEOPDExternalTransitLookupResult * externalTransitLookupResult; 
@property (nonatomic,readonly) BOOL hasFeatureIdGeocodingResult; 
@property (nonatomic,retain) GEOPDFeatureIdGeocodingResult * featureIdGeocodingResult; 
@property (nonatomic,readonly) BOOL hasMapsIdentifierPlaceLookupResult; 
@property (nonatomic,retain) GEOPDMapsIdentifierPlaceLookupResult * mapsIdentifierPlaceLookupResult; 
@property (nonatomic,readonly) BOOL hasOfflineAreaLookupResult; 
@property (nonatomic,retain) GEOPDOfflineAreaLookupResult * offlineAreaLookupResult; 
@property (nonatomic,readonly) BOOL hasClusterGeocodingResult; 
@property (nonatomic,retain) GEOPDClusterGeocodingResult * clusterGeocodingResult; 
@property (nonatomic,readonly) BOOL hasOfflineSuggestedRegionsResult; 
@property (nonatomic,retain) GEOPDOfflineSuggestedRegionsResult * offlineSuggestedRegionsResult; 
@property (nonatomic,readonly) BOOL hasOfflinePolygonQuadNodesResult; 
@property (nonatomic,retain) GEOPDOfflinePolygonQuadNodesResult * offlinePolygonQuadNodesResult; 
@property (nonatomic,readonly) BOOL hasOfflineProactiveRegionsResult; 
@property (nonatomic,retain) GEOPDOfflineProactiveRegionsResult * offlineProactiveRegionsResult; 
@property (nonatomic,readonly) BOOL hasBrandLookupResult; 
@property (nonatomic,retain) GEOPDBrandLookupResult * brandLookupResult; 
@property (nonatomic,readonly) BOOL hasOfflineUpdateManifestResult; 
@property (nonatomic,retain) GEOPDOfflineUpdateManifestResult * offlineUpdateManifestResult; 
@property (nonatomic,readonly) BOOL hasWifiFingerprintResult; 
@property (nonatomic,retain) GEOPDWifiFingerprintResult * wifiFingerprintResult; 
@property (nonatomic,readonly) BOOL hasInitialOfflineSuggestionResult; 
@property (nonatomic,retain) GEOPDInitialOfflineSuggestionResult * initialOfflineSuggestionResult; 
@property (nonatomic,readonly) BOOL hasIpGeoLookupResult; 
@property (nonatomic,retain) GEOPDIpGeoLookupResult * ipGeoLookupResult; 
@property (nonatomic,readonly) BOOL hasGroundViewLabelResult; 
@property (nonatomic,retain) GEOPDGroundViewLabelResult * groundViewLabelResult; 
@property (nonatomic,readonly) BOOL hasBatchSpatialLookupResult; 
@property (nonatomic,retain) GEOPDBatchSpatialLookupResult * batchSpatialLookupResult; 
@property (nonatomic,readonly) BOOL hasPlaceGlobalCommonResult; 
@property (nonatomic,retain) GEOPDPlaceGlobalCommonResult * placeGlobalCommonResult; 
@property (nonatomic,readonly) BOOL hasPlaceCollectionLookupResult; 
@property (nonatomic,retain) GEOPDPlaceCollectionLookupResult * placeCollectionLookupResult; 
@property (nonatomic,readonly) BOOL hasTransitScheduleLookupResult; 
@property (nonatomic,retain) GEOPDTransitScheduleLookupResult * transitScheduleLookupResult; 
@property (nonatomic,readonly) BOOL hasBatchCategoryLookupResult; 
@property (nonatomic,retain) GEOPDBatchCategoryLookupResult * batchCategoryLookupResult; 
@property (nonatomic,readonly) BOOL hasBatchMerchantLookupBrandResult; 
@property (nonatomic,retain) GEOPDBatchMerchantLookupBrandResult * batchMerchantLookupBrandResult; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readSearchResult;
-(void)_readGeocodingResult;
-(void)_readCanonicalSearchResult;
-(void)_readReverseGeocodingResult;
-(void)_readPlaceLookupResult;
-(void)_readMerchantLookupResult;
-(void)_readPlaceRefinementResult;
-(void)_readSiriSearchResult;
-(void)_readLocationDirectedSearchResult;
-(void)_readAutocompleteResult;
-(void)_readBrowseCategorySuggestionResult;
-(void)_readCategorySearchResult;
-(void)_readPopularNearbySearchResult;
-(void)_readSearchZeroKeywordCategorySuggestionResult;
-(void)_readSearchFieldPlaceholderResult;
-(void)_readBatchPopularNearbySearchResult;
-(void)_readVendorSpecificPlaceRefinementResult;
-(void)_readNearbySearchResult;
-(void)_readAddressObjectGeocodingResult;
-(void)_readSearchZeroKeywordWithSearchResultsSuggestionResult;
-(void)_readExternalTransitLookupResult;
-(void)_readFeatureIdGeocodingResult;
-(void)_readMapsIdentifierPlaceLookupResult;
-(void)_readOfflineAreaLookupResult;
-(void)_readClusterGeocodingResult;
-(void)_readOfflineSuggestedRegionsResult;
-(void)_readOfflinePolygonQuadNodesResult;
-(void)_readOfflineProactiveRegionsResult;
-(void)_readBrandLookupResult;
-(void)_readOfflineUpdateManifestResult;
-(void)_readWifiFingerprintResult;
-(void)_readInitialOfflineSuggestionResult;
-(void)_readIpGeoLookupResult;
-(void)_readGroundViewLabelResult;
-(void)_readBatchSpatialLookupResult;
-(void)_readPlaceGlobalCommonResult;
-(void)_readPlaceCollectionLookupResult;
-(void)_readTransitScheduleLookupResult;
-(void)_readBatchCategoryLookupResult;
-(void)_readBatchMerchantLookupBrandResult;
-(GEOPDSearchResult *)searchResult;
-(GEOPDGeocodingResult *)geocodingResult;
-(GEOPDCanonicalLocationSearchResult *)canonicalSearchResult;
-(GEOPDReverseGeocodingResult *)reverseGeocodingResult;
-(GEOPDPlaceLookupResult *)placeLookupResult;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(GEOPDPlaceRefinementResult *)placeRefinementResult;
-(GEOPDSiriSearchResult *)siriSearchResult;
-(GEOPDLocationDirectedSearchResult *)locationDirectedSearchResult;
-(GEOPDAutocompleteResult *)autocompleteResult;
-(GEOPDSearchBrowseCategorySuggestionResult *)browseCategorySuggestionResult;
-(GEOPDCategorySearchResult *)categorySearchResult;
-(GEOPDPopularNearbySearchResult *)popularNearbySearchResult;
-(GEOPDSearchZeroKeywordCategorySuggestionResult *)searchZeroKeywordCategorySuggestionResult;
-(GEOPDSearchFieldPlaceholderResult *)searchFieldPlaceholderResult;
-(GEOPDBatchPopularNearbySearchResult *)batchPopularNearbySearchResult;
-(GEOPDVendorSpecificPlaceRefinementResult *)vendorSpecificPlaceRefinementResult;
-(GEOPDNearbySearchResult *)nearbySearchResult;
-(GEOPDAddressObjectGeocodingResult *)addressObjectGeocodingResult;
-(GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *)searchZeroKeywordWithSearchResultsSuggestionResult;
-(GEOPDExternalTransitLookupResult *)externalTransitLookupResult;
-(GEOPDFeatureIdGeocodingResult *)featureIdGeocodingResult;
-(GEOPDMapsIdentifierPlaceLookupResult *)mapsIdentifierPlaceLookupResult;
-(GEOPDOfflineAreaLookupResult *)offlineAreaLookupResult;
-(GEOPDClusterGeocodingResult *)clusterGeocodingResult;
-(GEOPDOfflineSuggestedRegionsResult *)offlineSuggestedRegionsResult;
-(GEOPDOfflinePolygonQuadNodesResult *)offlinePolygonQuadNodesResult;
-(GEOPDOfflineProactiveRegionsResult *)offlineProactiveRegionsResult;
-(GEOPDBrandLookupResult *)brandLookupResult;
-(GEOPDOfflineUpdateManifestResult *)offlineUpdateManifestResult;
-(GEOPDWifiFingerprintResult *)wifiFingerprintResult;
-(GEOPDInitialOfflineSuggestionResult *)initialOfflineSuggestionResult;
-(GEOPDIpGeoLookupResult *)ipGeoLookupResult;
-(GEOPDGroundViewLabelResult *)groundViewLabelResult;
-(GEOPDBatchSpatialLookupResult *)batchSpatialLookupResult;
-(GEOPDPlaceGlobalCommonResult *)placeGlobalCommonResult;
-(GEOPDPlaceCollectionLookupResult *)placeCollectionLookupResult;
-(GEOPDTransitScheduleLookupResult *)transitScheduleLookupResult;
-(GEOPDBatchCategoryLookupResult *)batchCategoryLookupResult;
-(GEOPDBatchMerchantLookupBrandResult *)batchMerchantLookupBrandResult;
-(BOOL)hasAutocompleteResult;
-(void)setAutocompleteResult:(GEOPDAutocompleteResult *)arg1 ;
-(void)setSearchResult:(GEOPDSearchResult *)arg1 ;
-(void)setGeocodingResult:(GEOPDGeocodingResult *)arg1 ;
-(void)setCanonicalSearchResult:(GEOPDCanonicalLocationSearchResult *)arg1 ;
-(void)setReverseGeocodingResult:(GEOPDReverseGeocodingResult *)arg1 ;
-(void)setPlaceLookupResult:(GEOPDPlaceLookupResult *)arg1 ;
-(void)setMerchantLookupResult:(GEOPDMerchantLookupResult *)arg1 ;
-(void)setPlaceRefinementResult:(GEOPDPlaceRefinementResult *)arg1 ;
-(void)setSiriSearchResult:(GEOPDSiriSearchResult *)arg1 ;
-(void)setLocationDirectedSearchResult:(GEOPDLocationDirectedSearchResult *)arg1 ;
-(void)setBrowseCategorySuggestionResult:(GEOPDSearchBrowseCategorySuggestionResult *)arg1 ;
-(void)setCategorySearchResult:(GEOPDCategorySearchResult *)arg1 ;
-(void)setPopularNearbySearchResult:(GEOPDPopularNearbySearchResult *)arg1 ;
-(void)setSearchZeroKeywordCategorySuggestionResult:(GEOPDSearchZeroKeywordCategorySuggestionResult *)arg1 ;
-(void)setSearchFieldPlaceholderResult:(GEOPDSearchFieldPlaceholderResult *)arg1 ;
-(void)setBatchPopularNearbySearchResult:(GEOPDBatchPopularNearbySearchResult *)arg1 ;
-(void)setVendorSpecificPlaceRefinementResult:(GEOPDVendorSpecificPlaceRefinementResult *)arg1 ;
-(void)setNearbySearchResult:(GEOPDNearbySearchResult *)arg1 ;
-(void)setAddressObjectGeocodingResult:(GEOPDAddressObjectGeocodingResult *)arg1 ;
-(void)setSearchZeroKeywordWithSearchResultsSuggestionResult:(GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *)arg1 ;
-(void)setExternalTransitLookupResult:(GEOPDExternalTransitLookupResult *)arg1 ;
-(void)setFeatureIdGeocodingResult:(GEOPDFeatureIdGeocodingResult *)arg1 ;
-(void)setMapsIdentifierPlaceLookupResult:(GEOPDMapsIdentifierPlaceLookupResult *)arg1 ;
-(void)setOfflineAreaLookupResult:(GEOPDOfflineAreaLookupResult *)arg1 ;
-(void)setClusterGeocodingResult:(GEOPDClusterGeocodingResult *)arg1 ;
-(void)setOfflineSuggestedRegionsResult:(GEOPDOfflineSuggestedRegionsResult *)arg1 ;
-(void)setOfflinePolygonQuadNodesResult:(GEOPDOfflinePolygonQuadNodesResult *)arg1 ;
-(void)setOfflineProactiveRegionsResult:(GEOPDOfflineProactiveRegionsResult *)arg1 ;
-(void)setBrandLookupResult:(GEOPDBrandLookupResult *)arg1 ;
-(void)setOfflineUpdateManifestResult:(GEOPDOfflineUpdateManifestResult *)arg1 ;
-(void)setWifiFingerprintResult:(GEOPDWifiFingerprintResult *)arg1 ;
-(void)setInitialOfflineSuggestionResult:(GEOPDInitialOfflineSuggestionResult *)arg1 ;
-(void)setIpGeoLookupResult:(GEOPDIpGeoLookupResult *)arg1 ;
-(void)setGroundViewLabelResult:(GEOPDGroundViewLabelResult *)arg1 ;
-(void)setBatchSpatialLookupResult:(GEOPDBatchSpatialLookupResult *)arg1 ;
-(void)setPlaceGlobalCommonResult:(GEOPDPlaceGlobalCommonResult *)arg1 ;
-(void)setPlaceCollectionLookupResult:(GEOPDPlaceCollectionLookupResult *)arg1 ;
-(void)setTransitScheduleLookupResult:(GEOPDTransitScheduleLookupResult *)arg1 ;
-(void)setBatchCategoryLookupResult:(GEOPDBatchCategoryLookupResult *)arg1 ;
-(void)setBatchMerchantLookupBrandResult:(GEOPDBatchMerchantLookupBrandResult *)arg1 ;
-(BOOL)hasSearchResult;
-(BOOL)hasGeocodingResult;
-(BOOL)hasCanonicalSearchResult;
-(BOOL)hasReverseGeocodingResult;
-(BOOL)hasPlaceLookupResult;
-(BOOL)hasMerchantLookupResult;
-(BOOL)hasPlaceRefinementResult;
-(BOOL)hasSiriSearchResult;
-(BOOL)hasLocationDirectedSearchResult;
-(BOOL)hasBrowseCategorySuggestionResult;
-(BOOL)hasCategorySearchResult;
-(BOOL)hasPopularNearbySearchResult;
-(BOOL)hasSearchZeroKeywordCategorySuggestionResult;
-(BOOL)hasSearchFieldPlaceholderResult;
-(BOOL)hasBatchPopularNearbySearchResult;
-(BOOL)hasVendorSpecificPlaceRefinementResult;
-(BOOL)hasNearbySearchResult;
-(BOOL)hasAddressObjectGeocodingResult;
-(BOOL)hasSearchZeroKeywordWithSearchResultsSuggestionResult;
-(BOOL)hasExternalTransitLookupResult;
-(BOOL)hasFeatureIdGeocodingResult;
-(BOOL)hasMapsIdentifierPlaceLookupResult;
-(BOOL)hasOfflineAreaLookupResult;
-(BOOL)hasClusterGeocodingResult;
-(BOOL)hasOfflineSuggestedRegionsResult;
-(BOOL)hasOfflinePolygonQuadNodesResult;
-(BOOL)hasOfflineProactiveRegionsResult;
-(BOOL)hasBrandLookupResult;
-(BOOL)hasOfflineUpdateManifestResult;
-(BOOL)hasWifiFingerprintResult;
-(BOOL)hasInitialOfflineSuggestionResult;
-(BOOL)hasIpGeoLookupResult;
-(BOOL)hasGroundViewLabelResult;
-(BOOL)hasBatchSpatialLookupResult;
-(BOOL)hasPlaceGlobalCommonResult;
-(BOOL)hasPlaceCollectionLookupResult;
-(BOOL)hasTransitScheduleLookupResult;
-(BOOL)hasBatchCategoryLookupResult;
-(BOOL)hasBatchMerchantLookupBrandResult;
@end

