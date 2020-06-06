/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixDecompositionCholesky : MPSMatrixUnaryKernel {

	BOOL _lower;
	unsigned long long _order;

}

@property (nonatomic,readonly) BOOL lower;                            //@synthesize lower=_lower - In the implementation block
@property (nonatomic,readonly) unsigned long long order;              //@synthesize order=_order - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(unsigned long long)order;
-(BOOL)lower;
-(id)initWithDevice:(id)arg1 lower:(BOOL)arg2 order:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 status:(id)arg4 ;
@end

