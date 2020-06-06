/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NURenderPipelineVideoFrame : NSObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_NU6 _frameTime;

}

@property (readonly) CVBufferRef pixelBuffer;               //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) SCD_Struct_NU6 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
-(void)dealloc;
-(CVBufferRef)pixelBuffer;
-(SCD_Struct_NU6)frameTime;
-(id)initWithFrameTime:(SCD_Struct_NU6)arg1 pixelBuffer:(CVBufferRef)arg2 ;
@end

