/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct MTLNormalPixelFormatInfo {
	unsigned long long pixelBytes;
	unsigned char componentCount;
	unsigned char alignment;
	unsigned long long pixelBytesRender;
	unsigned long long pixelBytesRenderMSAA;
} MTLNormalPixelFormatInfo;

typedef struct MTLCompressedPixelFormatInfo {
	unsigned long long blockBytes;
	unsigned long long blockWidth;
	unsigned long long blockHeight;
	unsigned long long blockDepth;
} MTLCompressedPixelFormatInfo;

typedef struct MTLPixelFormatInfo {
	char* name;
	unsigned flags;
	unsigned long long castClass;
	/*function pointer*/void* type;
	MTLNormalPixelFormatInfo normal;
	MTLCompressedPixelFormatInfo) compressed;
} MTLPixelFormatInfo;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MT3;

typedef struct {
	SCD_Struct_MT3 field1;
	SCD_Struct_MT3 field2;
} SCD_Struct_MT4;

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct CGImageBlockSet* CGImageBlockSetRef;

typedef struct __CFData* CFDataRef;

typedef struct CGImageProvider* CGImageProviderRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGContext* CGContextRef;

typedef struct {
	double red;
	double green;
	double blue;
	double alpha;
} SCD_Struct_MT13;

