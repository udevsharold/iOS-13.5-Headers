/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureSource.h>
#import <libobjc.A.dylib/SCNCaptureDeviceOutputConsumer.h>

@protocol MTLTexture;
@class NSString;

@interface SCNCaptureDeviceOutputConsumerSource : SCNTextureSource <SCNCaptureDeviceOutputConsumer> {

	CVMetalTextureCacheRef _textureCache;
	CVBufferRef _pixelBuffer;
	id<MTLTexture> _mtlTexture;
	BOOL _containsAlpha;
	BOOL _isFront;
	unsigned long long _width;
	unsigned long long _height;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(void)connectToProxy:(C3DImageProxyRef)arg1 ;
-(void)discardVideoData;
-(void)setSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)containsAlpha;
@end

