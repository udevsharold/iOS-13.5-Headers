/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLDataConversionUtils : NSObject
+(id)stridesForShape:(id)arg1 ;
+(BOOL)populateEspressoShapeAndStridesFromInputShape:(id)arg1 ndRepresentation:(BOOL)arg2 espressoShape:(id*)arg3 espressoStrides:(id*)arg4 error:(id*)arg5 ;
+(BOOL)populateShapeAndStrideFor:(id)arg1 inputShape:(id)arg2 outputShape:(id*)arg3 outputStrides:(id*)arg4 error:(id*)arg5 ;
+(id)espressoDataProviderFromFeatureProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
+(id)espressoDataProviderFromBatchProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
+(id)featureProviderFomEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)batchProviderFomEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
@end

