/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class NSOrderedSet, TDRadiosityImageRenditionSpec;

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (nonatomic,retain) NSOrderedSet * layerReferences; 
@property (nonatomic,retain) TDRadiosityImageRenditionSpec * radiosityImage; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)drawFlattenedImageIntoContext:(CGContextRef)arg1 document:(id)arg2 ;
-(void)addLayerReferencesObject:(id)arg1 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
@end

