/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSImageTransformProvider;
@interface MPSNNScaleNode : MPSNNFilterNode {

	id<MPSImageTransformProvider> _transformProvider;
	MPSImageCoordinate _size;

}
+(id)nodeWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
+(id)nodeWithSource:(id)arg1 outputSize:(MPSImageCoordinate)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
-(id)privateInitWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(MPSImageCoordinate)arg3 ;
-(id)initWithSource:(id)arg1 outputSize:(MPSImageCoordinate)arg2 ;
@end

