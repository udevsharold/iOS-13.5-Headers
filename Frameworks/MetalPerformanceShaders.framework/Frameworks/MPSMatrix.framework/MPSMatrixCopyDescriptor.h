/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSMatrix/MPSMatrix-Structs.h>
@class MPSVector;

@interface MPSMatrixCopyDescriptor : NSObject {

	id* _sourceMatrices;
	id* _destinationMatrices;
	SCD_Struct_MP2* _cpuOffsetsVector;
	MPSVector* _gpuOffsetsVector;
	unsigned long long _gpuBufferOffset;
	unsigned long long _allocCount;
	unsigned long long _filledCount;

}
+(id)descriptorWithSourceMatrix:(id)arg1 destinationMatrix:(id)arg2 offsets:(SCD_Struct_MP2)arg3 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 count:(unsigned long long)arg2 ;
-(void)setCopyOperationAtIndex:(unsigned long long)arg1 sourceMatrix:(id)arg2 destinationMatrix:(id)arg3 offsets:(SCD_Struct_MP2)arg4 ;
-(id*)sourceMatrices;
-(id*)destinationMatrices;
-(SCD_Struct_MP2*)cpuOffsetsVector;
-(id)gpuOffsetsVector;
-(unsigned long long)gpuBufferOffset;
-(unsigned long long)allocCount;
-(unsigned long long)filledCount;
-(id)initWithSourceMatrices:(id)arg1 destinationMatrices:(id)arg2 offsetVector:(id)arg3 offset:(unsigned long long)arg4 ;
@end

