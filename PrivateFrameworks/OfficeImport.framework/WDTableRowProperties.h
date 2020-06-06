/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {

	WDTableProperties* mTableProperties;
	WDCharacterProperties* mCharacterProperties;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD116 mOriginalProperties;
	SCD_Struct_WD116 mTrackedProperties;

}
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)height;
-(void)setHeight:(long long)arg1 ;
-(void)addProperties:(id)arg1 ;
-(BOOL)header;
-(void)setHeader:(BOOL)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(id)characterProperties;
-(BOOL)isHeightOverridden;
-(id)tableProperties;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)addPropertiesValues:(SCD_Struct_WD116*)arg1 to:(SCD_Struct_WD116*)arg2 ;
-(short)widthBefore;
-(void)setWidthBefore:(short)arg1 ;
-(BOOL)isWidthBeforeOverridden;
-(int)widthBeforeType;
-(void)setWidthBeforeType:(int)arg1 ;
-(BOOL)isWidthBeforeTypeOverridden;
-(short)widthAfter;
-(void)setWidthAfter:(short)arg1 ;
-(BOOL)isWidthAfterOverridden;
-(int)widthAfterType;
-(void)setWidthAfterType:(int)arg1 ;
-(BOOL)isWidthAfterTypeOverridden;
-(int)heightType;
-(void)setHeightType:(int)arg1 ;
-(BOOL)isHeightTypeOverridden;
-(BOOL)isHeaderOverridden;
@end

