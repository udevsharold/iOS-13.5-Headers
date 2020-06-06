/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXMapComponent : SXComponent

@property (nonatomic,readonly) SCD_Struct_SX20 region; 
@property (nonatomic,readonly) unsigned long long defaultMapType; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) SXJSONArray * items; 
+(id)typeString;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)items;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(unsigned long long)defaultMapType;
-(SCD_Struct_SX20)region;
-(unsigned long long)defaultMapTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

