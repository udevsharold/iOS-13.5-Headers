/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSCNNArithmetic.h>

@interface MPSNNCompare : MPSCNNArithmetic {

	float _threshold;
	unsigned long long _comparisonType;

}

@property (assign,nonatomic) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (assign,nonatomic) float threshold;                                //@synthesize threshold=_threshold - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(float)threshold;
-(void)setThreshold:(float)arg1 ;
-(unsigned long long)comparisonType;
-(void)setComparisonType:(unsigned long long)arg1 ;
@end
