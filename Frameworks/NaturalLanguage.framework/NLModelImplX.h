/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLModelImpl.h>

@class NLModelConfiguration, NLEmbedding, NSData, NSDictionary, NSString;

@interface NLModelImplX : NLModelImpl {

	MontrealNeuralNetworkRef _montrealModel;
	NLModelConfiguration* _configuration;
	NLEmbedding* _embedding;
	NSData* _customEmbeddingData;
	NSDictionary* _labelMap;
	unsigned long long _numberOfTrainingInstances;
	NSString* _trainingLanguage;
	NSString* _trainingEmbeddingType;
	NSData* _modelData;

}
-(void)dealloc;
-(unsigned long long)systemVersion;
-(id)configuration;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 ;
-(id)initWithModelTrainer:(id)arg1 ;
-(id)modelData;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)labelMap;
-(id)trainingInfo;
-(id)customEmbeddingData;
-(unsigned long long)numberOfTrainingInstances;
@end

