/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, MDLScatteringFunction, NSString;

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration> {

	NSMutableArray* _userProperties;
	NSMutableArray* _builtinProperties;
	MDLScatteringFunction* _scatteringFunction;
	NSString* _name;
	MDLMaterial* _baseMaterial;
	unsigned long long _materialFace;

}

@property (nonatomic,retain,readonly) MDLScatteringFunction * scatteringFunction; 
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) MDLMaterial * baseMaterial;                                       //@synthesize baseMaterial=_baseMaterial - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long materialFace;                                  //@synthesize materialFace=_materialFace - In the implementation block
-(id)init;
-(NSString *)name;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MD5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)removeAllProperties;
-(id)propertyNamed:(id)arg1 ;
-(void)setProperty:(id)arg1 ;
-(void)removeProperty:(id)arg1 ;
-(id)initWithName:(id)arg1 scatteringFunction:(id)arg2 ;
-(unsigned long long)materialFace;
-(MDLScatteringFunction *)scatteringFunction;
-(id)propertyWithSemantic:(unsigned long long)arg1 ;
-(void)loadTexturesUsingArchiveAssetResolver:(id)arg1 cache:(id)arg2 ;
-(void)resolveTexturesWithResolver:(id)arg1 ;
-(void)loadTexturesUsingResolver:(id)arg1 cache:(id)arg2 ;
-(void)setScatteringFunction:(MDLScatteringFunction *)arg1 ;
-(MDLMaterial *)baseMaterial;
-(id)propertiesWithSemantic:(unsigned long long)arg1 ;
-(void)loadTexturesUsingResolver:(id)arg1 ;
-(id)initWithName:(id)arg1 physicallyPlausibleBSDF:(PhysicallyPlausibleDistribution*)arg2 ;
-(void)conformToMatProperties;
-(BidirectionalScatteringDistributionFunction*)bsdf;
-(void)setBaseMaterial:(MDLMaterial *)arg1 ;
-(void)setMaterialFace:(unsigned long long)arg1 ;
@end

