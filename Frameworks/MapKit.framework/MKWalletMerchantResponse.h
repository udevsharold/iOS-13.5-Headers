/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapItem;
#import <MapKit/MapKit-Structs.h>
@class GEOPDMerchantLookupResult, MKWalletMerchantStylingInfo, NSString, MKMapItem;

@interface MKWalletMerchantResponse : NSObject {

	id<GEOMapItem> _mapItem;
	GEOPDMerchantLookupResult* _merchantLookupResult;

}

@property (nonatomic,readonly) MKWalletMerchantStylingInfo * placeStyling; 
@property (nonatomic,readonly) NSString * localizedPlaceName; 
@property (nonatomic,readonly) NSString * localizedPlaceLanguage; 
@property (nonatomic,readonly) MKWalletMerchantStylingInfo * walletCategoryStyling; 
@property (nonatomic,readonly) NSString * localizedWalletCategoryName; 
@property (nonatomic,readonly) NSString * localizedWalletCategoryLanguage; 
@property (nonatomic,readonly) NSString * walletCategoryIdentifier; 
@property (nonatomic,readonly) NSString * mapsCategoryIdentifier; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) NSString * heroImageProviderName; 
-(MKMapItem *)mapItem;
-(id)initWithGEOMapItem:(id)arg1 ;
-(BOOL)_validHeroImageForPhoto:(id)arg1 ;
-(id)initWithMerchantLookupResult:(id)arg1 ;
-(MKWalletMerchantStylingInfo *)placeStyling;
-(NSString *)localizedPlaceName;
-(NSString *)localizedPlaceLanguage;
-(MKWalletMerchantStylingInfo *)walletCategoryStyling;
-(NSString *)localizedWalletCategoryName;
-(NSString *)localizedWalletCategoryLanguage;
-(NSString *)mapsCategoryIdentifier;
-(NSString *)walletCategoryIdentifier;
-(id)bestHeroImageForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(NSString *)heroImageProviderName;
@end

