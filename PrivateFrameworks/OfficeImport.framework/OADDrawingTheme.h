/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADStyleMatrix, OADFontScheme, OADColorContext, OADColorScheme, OADColorMap;

@interface OADDrawingTheme : NSObject {

	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;
	OADColorContext* mColorContext;

}

@property (nonatomic,readonly) OADStyleMatrix * styleMatrix; 
@property (nonatomic,readonly) OADFontScheme * fontScheme; 
@property (nonatomic,readonly) OADColorContext * colorContext; 
@property (nonatomic,readonly) OADColorScheme * colorScheme; 
@property (nonatomic,readonly) OADColorMap * colorMap; 
@property (nonatomic,readonly) id<OADColorPalette> colorPalette; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(OADColorMap *)colorMap;
-(OADColorScheme *)colorScheme;
-(id<OADColorPalette>)colorPalette;
-(OADStyleMatrix *)styleMatrix;
-(OADFontScheme *)fontScheme;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
-(id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5 ;
-(id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3 ;
-(OADColorContext *)colorContext;
@end

