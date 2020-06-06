/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSString;

@interface HFColorPalette : NSObject <NAEquatable, NSCopying, NSMutableCopying> {

	NSArray* _colors;
	unsigned long long _paletteType;

}

@property (nonatomic,copy) NSArray * colors;                                //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) unsigned long long paletteType;              //@synthesize paletteType=_paletteType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultColorPaletteOfType:(unsigned long long)arg1 ;
+(id)warmWhiteColor;
+(id)_defaultRGBColors;
+(id)_defaultTemperatureColors;
+(id)_defaultColorsOfType:(unsigned long long)arg1 ;
+(id)defaultColorPalette;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)serializedRepresentation;
-(void)setColors:(NSArray *)arg1 ;
-(NSArray *)colors;
-(id)initWithSerializedRepresentation:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithColors:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)paletteType;
-(id)colorPaletteByAdjustingForColorProfile:(id)arg1 ;
@end

