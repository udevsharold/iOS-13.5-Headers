/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSDate, TDRenditionKeySpec, NSSet, TDElementProduction, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject

@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) BOOL opaque; 
@property (assign,nonatomic) BOOL monochrome; 
@property (assign,nonatomic) int packedPointX; 
@property (assign,nonatomic) int packedPointY; 
@property (assign,nonatomic) BOOL alphaCrop; 
@property (nonatomic,retain) TDRenditionKeySpec * keySpec; 
@property (nonatomic,retain) NSSet * packedRenditions; 
@property (nonatomic,retain) TDElementProduction * production; 
@property (nonatomic,retain) TDRenditionType * renditionType; 
@property (nonatomic,retain) TDRenditionSpec * parentRendition; 
@property (nonatomic,retain) NSSet * properties; 
@property (assign,nonatomic) CGPoint packedPoint; 
-(id)propertiesAsDictionary;
-(void)awakeFromInsert;
-(TDRenditionType *)renditionType;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)resetToBaseKeySpec;
-(void)setRenditionType:(TDRenditionType *)arg1 ;
-(CGPoint)packedPoint;
-(void)drawPackableRenditionInContext:(CGContextRef)arg1 withDocument:(id)arg2 ;
-(void)setPackedPoint:(CGPoint)arg1 ;
@end

