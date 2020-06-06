/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SNVGGFeatureExtractorConfiguration, MLModel, NSArray;

@interface SNVGGBasedDetectorConfiguration : NSObject {

	SNVGGFeatureExtractorConfiguration* _featureExtractorConfiguration;
	MLModel* _model;
	Class _observationClass;
	NSArray* _outputLabels;

}

@property (nonatomic,readonly) SNVGGFeatureExtractorConfiguration * featureExtractorConfiguration;              //@synthesize featureExtractorConfiguration=_featureExtractorConfiguration - In the implementation block
@property (nonatomic,readonly) MLModel * model;                                                                 //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) Class observationClass;                                                          //@synthesize observationClass=_observationClass - In the implementation block
@property (nonatomic,readonly) NSArray * outputLabels;                                                          //@synthesize outputLabels=_outputLabels - In the implementation block
-(MLModel *)model;
-(NSArray *)outputLabels;
-(SNVGGFeatureExtractorConfiguration *)featureExtractorConfiguration;
-(id)initWithMLModel:(id)arg1 observationClass:(Class)arg2 outputLabels:(id)arg3 ;
-(Class)observationClass;
@end
