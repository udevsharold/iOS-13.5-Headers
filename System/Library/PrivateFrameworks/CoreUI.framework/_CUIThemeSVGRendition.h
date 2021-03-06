/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSData, NSArray;

@interface _CUIThemeSVGRendition : CUIThemeRendition {

	CGSVGDocumentRef _svgDocument;
	NSData* _fileData;
	unsigned _standardPointSize;
	NSArray* _vectorSizes;
	double _baseline;
	double _capline;
	SCD_Struct_CS11 _alignmentRectInsets;
	BOOL _isAlignmentRect;
	CGSize _canvasSize;
	os_unfair_lock_s _lock;

}
-(void)dealloc;
-(int)pixelFormat;
-(id)metrics;
-(CGSVGDocumentRef)svgDocument;
-(CGSize)canvasSize;
-(id)rawData;
-(double)vectorGlyphBaseline;
-(double)vectorGlyphCapLine;
-(double)vectorGlyphReferencePointSize;
-(id)vectorGlyphAvailableSizes;
-(SCD_Struct_CS11)vectorGlyphAlignmentRectInsets;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(CGSVGDocumentRef)_nts_svgDocument;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
@end

