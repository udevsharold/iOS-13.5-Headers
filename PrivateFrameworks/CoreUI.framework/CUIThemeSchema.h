/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIThemeSchema : NSObject
+(id)defaultSchema;
+(id)schemaForPlatform:(long long)arg1 ;
-(long long)schemaVersion;
-(const SCD_Struct_CU31*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU34*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU34*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)partDefinitionCountForElementDefinition:(const SCD_Struct_CU34*)arg1 ;
-(unsigned long long)dimensionDefinitionCountForPartDefinition:(const SCD_Struct_CU33*)arg1 ;
-(const SCD_Struct_CU34*)elementDefinitionWithName:(id)arg1 ;
-(const SCD_Struct_CU33*)partDefinitionWithName:(id)arg1 forElementDefinition:(const SCD_Struct_CU34*)arg2 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU33*)arg1 ;
-(const SCD_Struct_CU33*)partDefinitionForWidgetName:(id)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU33*)arg1 ;
-(void)enumerateAvailableThemeAttributesInPartDefinition:(const SCD_Struct_CU33*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAvailableValuesForThemeAttribute:(int)arg1 inPartDefinition:(const SCD_Struct_CU33*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(const SCD_Struct_CU31*)categoryForElementDefinition:(const SCD_Struct_CU34*)arg1 ;
-(const SCD_Struct_CU34*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU34*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU34*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(unsigned long long)partDefinitionCountForEffectDefinition:(const SCD_Struct_CU34*)arg1 ;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU33*)arg1 ;
-(const SCD_Struct_CU34*)materialDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU34*)sortedMaterialDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU34*)materialDefinitionWithName:(id)arg1 ;
-(unsigned long long)materialDefinitionCount;
-(unsigned long long)partDefinitionCountForMaterialDefinition:(const SCD_Struct_CU34*)arg1 ;
-(id)schemaMaterialRenditionsForPartDefinition:(const SCD_Struct_CU33*)arg1 ;
@end

