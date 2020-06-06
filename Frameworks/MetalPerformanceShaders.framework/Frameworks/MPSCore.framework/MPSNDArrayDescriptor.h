/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSNDArrayDescriptor : NSObject {

	 _dimensionLengths;
	 _sliceOffsets;
	 _sliceLengths;
	 _dimensionOrder;
	unsigned long long _numberOfDimensions;
	unsigned _dataType;
	MPSNDArrayDescriptor* _child;
	MPSNDArrayDescriptor* _parent;
	int _transitionOp;

}

@property (assign,nonatomic) unsigned dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfDimensions;              //@synthesize numberOfDimensions=_numberOfDimensions - In the implementation block
+(id)descriptorWithDataType:(unsigned)arg1 shape:(id)arg2 ;
+(id)descriptorWithDataType:(unsigned)arg1 dimensionSizes:(unsigned long long)arg2 ;
+(id)descriptorWithDataType:(unsigned)arg1 dimensionCount:(unsigned long long)arg2 dimensionSizes:(unsigned long long*)arg3 ;
-(void)dealloc;
-(unsigned)dataType;
-(unsigned long long)numberOfDimensions;
-(void)setNumberOfDimensions:(unsigned long long)arg1 ;
-(void)setDataType:(unsigned)arg1 ;
-(id)initWithDataType:(unsigned)arg1 dimensions:(unsigned long long)arg2 ;
-(unsigned long long)lengthOfDimension:(unsigned long long)arg1 ;
-(void)setLengthOfDimension:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(MPSDimensionSlice)sliceRangeForDimension:(unsigned long long)arg1 ;
-(void)sliceDimension:(unsigned long long)arg1 withSubrange:(MPSDimensionSlice)arg2 ;
-(void)transposeDimension:(unsigned long long)arg1 withDimension:(unsigned long long)arg2 ;
-(1)dimensionOrder;
-(void)reshapeWithShape:(id)arg1 ;
-(void)reshapeWithDimensionCount:(unsigned long long)arg1 dimensionSizes:(unsigned long long*)arg2 ;
@end

