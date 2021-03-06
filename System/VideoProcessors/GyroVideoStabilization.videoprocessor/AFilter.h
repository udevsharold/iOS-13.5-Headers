/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/VideoProcessors/GyroVideoStabilization.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAGLContext;

@interface AFilter : NSObject {

	EAGLContext* _glContext;
	unsigned _lumaProgram;
	unsigned _chromaProgram;
	unsigned _lumaWithClippingProgram;
	unsigned _chromaWithClippingProgram;
	unsigned _bgraProgram;
	unsigned _lumaBlurProgram;
	unsigned _chromaBlurProgram;
	int _uniforms[40];
	int _blurUniforms[14];
	float m_angle;

}
-(id)initWithContext:(id)arg1 ;
@end

