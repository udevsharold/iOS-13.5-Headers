/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@interface NUPixelBufferSourceNode : NUVideoFrameSourceNode {

	CVBufferRef _pixelBuffer;

}
-(void)dealloc;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)initWithSettings:(id)arg1 orientation:(long long)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 settings:(id)arg2 orientation:(long long)arg3 ;
@end

