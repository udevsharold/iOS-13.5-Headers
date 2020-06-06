/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPGraphics, EMFPlayer, NSMutableData, MFPEffect;

@interface EMFPlusPlayer : NSObject {

	MFPGraphics* mGraphics;
	EMFPlayer* mOwner;
	int mLargeType;
	unsigned short mLargeFlags;
	unsigned mLargeSize;
	NSMutableData* mLargeData;
	MFPEffect* mEffect;

}
+(float)firstTabPosPastPos:(float)arg1 stringFormat:(id)arg2 isExplicit:(BOOL*)arg3 ;
+(int)serializableObjectTypeForGUID:(id)arg1 ;
-(void)setEffect:(id)arg1 ;
-(id)effect;
-(int)readImage:(const char*)arg1 in_size:(unsigned)arg2 pImage:(id*)arg3 ;
-(int)readGradientBrush:(id)arg1 from:(const char**)arg2 brushFlags:(unsigned)arg3 ;
-(int)readPath:(const char*)arg1 in_size:(unsigned)arg2 returnPath:(id*)arg3 ;
-(int)readBrush:(const char*)arg1 in_size:(unsigned)arg2 returnBrush:(id*)arg3 ;
-(int)playBrush:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playPen:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playPath:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playRegion:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playImage:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playFont:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playStringFormat:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playImageAttributes:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playCustomLineCap:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(int)playGraphics:(const char*)arg1 in_size:(unsigned)arg2 objectIndex:(unsigned char)arg3 ;
-(id)canvasInWorldCoordinates;
-(int)playFillPath:(id)arg1 in_pData:(const char*)arg2 in_size:(unsigned)arg3 in_flags:(unsigned short)arg4 ;
-(int)playStrokePath:(id)arg1 in_pData:(const char*)arg2 in_size:(unsigned)arg3 in_flags:(unsigned short)arg4 ;
-(int)setClipPath:(id)arg1 flags:(unsigned short)arg2 ;
-(int)playBlurEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playSharpenEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playColorMatrixEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playColorLUTEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playBrightnessContrastEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playHueSaturationLightnessEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playLevelsEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playTintEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playColorBalanceEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playRedEyeCorrectionEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playColorCurveEffectWithData:(const char*)arg1 size:(unsigned)arg2 ;
-(int)playHeader:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playObject:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playClear:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playFillEllipse:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawEllipse:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playFillRects:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawRects:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playFillPath:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawPath:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playFillPolygon:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawLines:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawArc:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playFillPie:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawPie:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawBeziers:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playFillClosedCurve:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawClosedCurve:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawCurve:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawImage:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawImagePoints:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawString:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playDrawDriverString:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playGetDC:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSave:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playRestore:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playBeginContainer:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playBeginContainerNoParams:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playEndContainer:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetWorldTransform:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playResetWorldTransform:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playMultiplyWorldTransform:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playTranslateWorldTransform:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playScaleWorldTransform:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playRotateWorldTransform:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetPageTransform:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playResetClip:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetClipRect:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetClipPath:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetClipRegion:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playOffsetClip:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSerializableObject:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetRenderingOrigin:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetAntiAliasMode:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetTextRenderingHint:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetTextContrast:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetInterpolationMode:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetPixelOffsetMode:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetCompositingMode:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playSetCompositingQuality:(const char*)arg1 in_size:(unsigned)arg2 in_flags:(unsigned short)arg3 ;
-(int)playUnknown:(const char*)arg1 in_size:(unsigned)arg2 in_type:(int)arg3 in_flags:(unsigned short)arg4 ;
-(void)resetLargeRecord;
-(int)playRecord:(int)arg1 pData:(const char*)arg2 dataSize:(unsigned)arg3 flags:(unsigned short)arg4 ;
-(id)initWithOwner:(id)arg1 canvas:(CGRect)arg2 ;
-(int)play:(const char*)arg1 in_size:(unsigned)arg2 ;
@end

