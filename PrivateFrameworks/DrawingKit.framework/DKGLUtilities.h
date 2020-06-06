/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DrawingKit/DrawingKit-Structs.h>
@interface DKGLUtilities : NSObject
+(void)initialize;
+(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
+(BOOL)gpuAvailable;
+(void)setCurrentClearColor;
+(void)deleteVBO:(unsigned*)arg1 ;
+(void)deleteTexture:(unsigned*)arg1 ;
+(void)createSharedRepeatableTexture:(unsigned*)arg1 withImageName:(id)arg2 ofType:(id)arg3 ;
+(void)createRepeatableTexture:(unsigned*)arg1 withImageName:(id)arg2 ofType:(id)arg3 ;
+(unsigned)compileShader:(id)arg1 ofType:(id)arg2 ;
+(void)deleteFBO:(unsigned*)arg1 depthRB:(unsigned*)arg2 texture:(unsigned*)arg3 ;
+(void)createFBO:(unsigned*)arg1 depthRB:(unsigned*)arg2 texture:(unsigned*)arg3 width:(int)arg4 height:(int)arg5 format:(unsigned)arg6 ;
+(void)setProjectionMatrixForWidth:(float)arg1 height:(float)arg2 flipped:(BOOL)arg3 matrix:(SCD_Struct_DK14*)arg4 ;
+(void)translateMatrix:(SCD_Struct_DK14*)arg1 byX:(float)arg2 Y:(float)arg3 result:(SCD_Struct_DK14*)arg4 ;
+(void)drawQuadAtX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4 ;
+(id)snapshotImageOfFrameBufferWithID:(unsigned)arg1 bufferSize:(CGSize)arg2 displayScale:(double)arg3 ;
+(void)_postGLActiveNotification;
+(void)_postGLInactiveNotification;
+(void)createTexture:(unsigned*)arg1 withImageName:(id)arg2 ofType:(id)arg3 ;
+(void)teardownSharedContext;
+(void)createVBO:(unsigned*)arg1 size:(long long)arg2 data:(void*)arg3 usage:(unsigned)arg4 ;
+(id)createPlatformGLContext;
+(id)createSharedGLContext;
+(BOOL)setCurrentGLContext:(id)arg1 ;
@end

