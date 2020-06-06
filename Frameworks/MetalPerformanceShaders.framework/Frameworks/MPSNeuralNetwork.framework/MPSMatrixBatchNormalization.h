/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixBatchNormalization : MPSMatrixUnaryKernel {

	BOOL _computeStatistics;
	int _neuronType;
	float _neuronA;
	float _neuronB;
	float _neuronC;
	float _epsilon;
	unsigned long long _sourceNumberOfFeatureVectors;
	unsigned long long _sourceInputFeatureChannels;

}

@property (assign,nonatomic) int neuronType;                                               //@synthesize neuronType=_neuronType - In the implementation block
@property (assign,nonatomic) float neuronA;                                                //@synthesize neuronA=_neuronA - In the implementation block
@property (assign,nonatomic) float neuronB;                                                //@synthesize neuronB=_neuronB - In the implementation block
@property (assign,nonatomic) float neuronC;                                                //@synthesize neuronC=_neuronC - In the implementation block
@property (assign,nonatomic) unsigned long long sourceNumberOfFeatureVectors;              //@synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors - In the implementation block
@property (assign,nonatomic) unsigned long long sourceInputFeatureChannels;                //@synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels - In the implementation block
@property (assign,nonatomic) float epsilon;                                                //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) BOOL computeStatistics;                                       //@synthesize computeStatistics=_computeStatistics - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(int)neuronType;
-(float)neuronA;
-(float)neuronB;
-(float)neuronC;
-(void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4 ;
-(void)setNeuronType:(int)arg1 ;
-(BOOL)computeStatistics;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)sourceNumberOfFeatureVectors;
-(void)setSourceNumberOfFeatureVectors:(unsigned long long)arg1 ;
-(unsigned long long)sourceInputFeatureChannels;
-(void)setSourceInputFeatureChannels:(unsigned long long)arg1 ;
-(float)neuronParameterA;
-(float)neuronParameterB;
-(float)neuronParameterC;
-(void)setNeuronA:(float)arg1 ;
-(void)setNeuronB:(float)arg1 ;
-(void)setNeuronC:(float)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 meanVector:(id)arg3 varianceVector:(id)arg4 gammaVector:(id)arg5 betaVector:(id)arg6 resultMatrix:(id)arg7 ;
-(void)setComputeStatistics:(BOOL)arg1 ;
@end

