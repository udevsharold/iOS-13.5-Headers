/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageConverter : NSObject {

	int _pixelFormat;
	int _width;
	int _height;
	CGColorSpaceRef _rgbColorSpace;
	CGContextRef _cgContext;
	CVBufferRef _rgbFrame;
	CVPixelBufferPoolRef _yuvFrames;
	OpaqueVTPixelTransferSessionRef _rgbToYuv;

}
-(id)init;
-(void)dealloc;
-(int)resize:(int)arg1 height:(int)arg2 ;
-(id)initWithPixelFormat:(int)arg1 ;
-(int)convertImage:(CGImageRef)arg1 yuvFrame:(_CVBuffer*)arg2 ;
@end

