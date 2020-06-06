/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class JTPixelBufferPool;

@interface JTPixelRotationSession : NSObject {

	OpaqueVTImageRotationSessionRef _imageRotationSession;
	BOOL _mirror;
	unsigned _rotationDegrees;
	JTPixelBufferPool* _pixelBufferPool;

}

@property (nonatomic,retain) JTPixelBufferPool * pixelBufferPool;              //@synthesize pixelBufferPool=_pixelBufferPool - In the implementation block
@property (nonatomic,readonly) unsigned rotationDegrees;                       //@synthesize rotationDegrees=_rotationDegrees - In the implementation block
@property (nonatomic,readonly) BOOL mirror;                                    //@synthesize mirror=_mirror - In the implementation block
+(void)applyDeviceRotationCorrectionWithSession:(inout id*)arg1 toFrameSet:(inout id*)arg2 ;
-(void)dealloc;
-(JTPixelBufferPool *)pixelBufferPool;
-(unsigned)rotationDegrees;
-(id)initWithRotation:(unsigned)arg1 mirror:(BOOL)arg2 ;
-(BOOL)mirror;
-(CVBufferRef)createRotatedPixelBuffer:(CVBufferRef)arg1 ;
-(id)createRotatedFrameSet:(id)arg1 ;
-(void)JT_releaseImageRotationSession;
-(void)setPixelBufferPool:(JTPixelBufferPool *)arg1 ;
@end
