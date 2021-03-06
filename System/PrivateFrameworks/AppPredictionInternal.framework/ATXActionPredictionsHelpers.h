/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXActionPredictionsHelpers : NSObject
+(id)processCandidateActionPredictions:(id)arg1 limit:(int)arg2 predictionItemsToKeep:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
+(void)keepRandomPredictionItems:(id)arg1 limit:(unsigned long long)arg2 predictionItemsToKeep:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
+(void)sortPredictions:(id)arg1 ;
+(id)sortedPredictions:(id)arg1 ;
+(id)limitTheNumberOfPredictions:(id)arg1 withLimit:(int)arg2 ;
+(void)applyJointLogProbabilityToActionPredictions:(id)arg1 withAppActionTypePredictionScore:(double)arg2 ;
+(void)applyNormalizationToPredictions:(id)arg1 ;
+(void)applyLogOfLinearProbabilityTransformationToPredictions:(id)arg1 ;
+(void)applyLogSoftmaxToPredictions:(id)arg1 ;
@end

