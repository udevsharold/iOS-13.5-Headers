/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSArray, PIExpandedSubjectCalculatorConfiguration, VNSaliencyImageObservation;

@interface PIExpandedSubjectCalculator : NSObject {

	NSArray* _expandedSubjects;
	PIExpandedSubjectCalculatorConfiguration* _configuration;
	NSArray* _detectedSubjects;
	NSArray* _saliencyData;
	unsigned long long _subjectDirection;
	VNSaliencyImageObservation* _saliencyImageObservation;
	NSArray* _regressedSalientSubjects;

}

@property (nonatomic,copy,readonly) NSArray * regressedSalientSubjects;                               //@synthesize regressedSalientSubjects=_regressedSalientSubjects - In the implementation block
@property (nonatomic,readonly) unsigned long long saliencyScale; 
@property (nonatomic,readonly) PIExpandedSubjectCalculatorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * detectedSubjects;                                       //@synthesize detectedSubjects=_detectedSubjects - In the implementation block
@property (nonatomic,copy,readonly) NSArray * saliencyData;                                           //@synthesize saliencyData=_saliencyData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * expandedSubjects;                                       //@synthesize expandedSubjects=_expandedSubjects - In the implementation block
@property (assign,nonatomic) unsigned long long subjectDirection;                                     //@synthesize subjectDirection=_subjectDirection - In the implementation block
@property (nonatomic,readonly) VNSaliencyImageObservation * saliencyImageObservation;                 //@synthesize saliencyImageObservation=_saliencyImageObservation - In the implementation block
+(void)consolidateCandidateSalientClusters:(id)arg1 maxDistance:(double)arg2 ;
+(id)salientSubjectsWithImageRequestHandler:(id)arg1 ;
+(id)saliencyDataForSaliencyObservation:(id)arg1 ;
+(id)saliencyObservationWithImageRequestHandler:(id)arg1 ;
-(PIExpandedSubjectCalculatorConfiguration *)configuration;
-(unsigned long long)saliencyScale;
-(id)initWithDetectedSubjects:(id)arg1 saliencyData:(id)arg2 configuration:(id)arg3 ;
-(id)initWithDetectedSubjects:(id)arg1 cgImage:(CGImageRef)arg2 ;
-(id)initWithDetectedSubjects:(id)arg1 ciImage:(id)arg2 ciContext:(id)arg3 configuration:(id)arg4 ;
-(id)neighborsForPoint:(id)arg1 ;
-(id)closestClusterForPoint:(id)arg1 fromClusters:(id)arg2 ;
-(void)clusterPoints:(id)arg1 intoClusters:(id)arg2 ;
-(id)findBestStartingPointForStartingPoint:(CGPoint)arg1 ;
-(id)findSalientPointsWithSaliencyScale:(float)arg1 outsideOfSubjectsRect:(CGRect)arg2 ;
-(NSArray *)expandedSubjects;
-(NSArray *)detectedSubjects;
-(NSArray *)saliencyData;
-(unsigned long long)subjectDirection;
-(void)setSubjectDirection:(unsigned long long)arg1 ;
-(VNSaliencyImageObservation *)saliencyImageObservation;
-(NSArray *)regressedSalientSubjects;
@end

