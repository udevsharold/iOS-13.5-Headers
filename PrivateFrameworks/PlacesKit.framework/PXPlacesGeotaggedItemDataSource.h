/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSource <NSObject>
@property (__weak) id<PXPlacesGeotaggedItemDataSourceDelegate> delegate; 
@property (readonly) NSSet * allItems; 
@property (nonatomic,readonly) long long numberOfItems; 
@required
-(id<PXPlacesGeotaggedItemDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)numberOfItems;
-(NSSet *)allItems;
-(id)findItemsInMapRect:(SCD_Struct_PX2)arg1;
-(SCD_Struct_PX2*)minimalEncompassingMapRect;

@end

