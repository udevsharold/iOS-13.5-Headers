/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPLayer.h>
#import <libobjc.A.dylib/MLPLayerOptimizerProtocol.h>

@class NSArray, MPSMatrixCopy, MPSMatrix, MLPOptimizer, MPSMatrixNeuron, MPSMatrixSum, MPSVector, NSString;

@interface MLPEmbeddingLayer : MLPLayer <MLPLayerOptimizerProtocol> {

	vector<std::__1::map<unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > > >, std::__1::allocator<std::__1::map<unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > > > > >* wordIDRepetitions;
	vector<float, std::__1::allocator<float> >* weightsInitial;
	unsigned long long _vocabSize;
	unsigned long long _embeddingDimension;
	MPSMatrixCopy* _matrixCopy;
	const void* _initialWeights;
	MPSMatrix* _weights;
	MPSMatrix* _weightGradients;
	MLPOptimizer* _optimizer;
	MPSMatrix* _weights_mom;
	MPSMatrix* _weights_vel;
	MPSMatrixNeuron* _zeroFilter;
	MPSMatrixSum* _sumFilter;
	MPSMatrixCopy* _matrixCopyFilter;
	MPSVector* _offsetVector;

}

@property (assign) unsigned long long vocabSize;                       //@synthesize vocabSize=_vocabSize - In the implementation block
@property (assign) unsigned long long embeddingDimension;              //@synthesize embeddingDimension=_embeddingDimension - In the implementation block
@property (retain) MPSMatrixCopy * matrixCopy;                         //@synthesize matrixCopy=_matrixCopy - In the implementation block
@property (assign) const void* initialWeights;                         //@synthesize initialWeights=_initialWeights - In the implementation block
@property (retain) MPSMatrix * weights;                                //@synthesize weights=_weights - In the implementation block
@property (retain) MPSMatrix * weightGradients;                        //@synthesize weightGradients=_weightGradients - In the implementation block
@property (retain) MLPOptimizer * optimizer;                           //@synthesize optimizer=_optimizer - In the implementation block
@property (retain) MPSMatrix * weights_mom;                            //@synthesize weights_mom=_weights_mom - In the implementation block
@property (retain) MPSMatrix * weights_vel;                            //@synthesize weights_vel=_weights_vel - In the implementation block
@property (retain) MPSMatrixNeuron * zeroFilter;                       //@synthesize zeroFilter=_zeroFilter - In the implementation block
@property (retain) MPSMatrixSum * sumFilter;                           //@synthesize sumFilter=_sumFilter - In the implementation block
@property (retain) MPSMatrixCopy * matrixCopyFilter;                   //@synthesize matrixCopyFilter=_matrixCopyFilter - In the implementation block
@property (retain) MPSVector * offsetVector;                           //@synthesize offsetVector=_offsetVector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * mlpOptimizers; 
-(MPSMatrix *)weights;
-(void)setWeights:(MPSMatrix *)arg1 ;
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 ;
-(id)initWithName:(id)arg1 parameters:(SCD_Struct_Mo4*)arg2 ;
-(void)createKernel;
-(id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4 ;
-(id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4 ;
-(id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3 ;
-(NSArray *)mlpOptimizers;
-(void)setVocabSize:(unsigned long long)arg1 ;
-(void)setEmbeddingDimension:(unsigned long long)arg1 ;
-(void)setInitialWeights:(const void*)arg1 ;
-(MLPOptimizer *)optimizer;
-(unsigned long long)vocabSize;
-(unsigned long long)embeddingDimension;
-(const void*)initialWeights;
-(void)setWeightGradients:(MPSMatrix *)arg1 ;
-(void)setOptimizer:(MLPOptimizer *)arg1 ;
-(void)setZeroFilter:(MPSMatrixNeuron *)arg1 ;
-(MPSMatrixNeuron *)zeroFilter;
-(void)setMatrixCopyFilter:(MPSMatrixCopy *)arg1 ;
-(void)setSumFilter:(MPSMatrixSum *)arg1 ;
-(MPSMatrixCopy *)matrixCopy;
-(void)setMatrixCopy:(MPSMatrixCopy *)arg1 ;
-(void)seqBackward:(id)arg1 inputGradientMatrix:(id)arg2 matrixIter:(unsigned long long)arg3 ;
-(MPSMatrix *)weightGradients;
-(MPSMatrixCopy *)matrixCopyFilter;
-(void)setOffsetVector:(MPSVector *)arg1 ;
-(MPSVector *)offsetVector;
-(MPSMatrixSum *)sumFilter;
-(id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 vocabSize:(unsigned long long)arg3 embeddingDimension:(unsigned long long)arg4 ;
-(MPSMatrix *)weights_mom;
-(void)setWeights_mom:(MPSMatrix *)arg1 ;
-(MPSMatrix *)weights_vel;
-(void)setWeights_vel:(MPSMatrix *)arg1 ;
@end

