/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Futhark/Futhark-Structs.h>
@class NSString, NSArray, NSObject;

@interface FKTextDetector : NSObject {

	FKSession* _sessions[8];
	recognizer* _recognizer;
	CGSize _size;
	CGRect _roi;
	unsigned _timeDownscale[8];
	unsigned _timeBinarizer[8];
	unsigned _timeConcomps[8];
	unsigned _timeSequences[8];
	unsigned _timeRecognizer[8];
	SCD_Struct_FK5 _memoryUsage[8];
	BOOL _detectDiacritics;
	BOOL _returnSubFeatures;
	BOOL _minimizeFalseDetections;
	BOOL _createFeaturesForAllConcomps;
	BOOL _enableBinarizerFiltering;
	BOOL _colorSplits;
	int _minimumCharacterHeight;
	int _binarizerLimit;
	int _contrastLimit;
	NSString* _recognitionLanguage;
	NSArray* _recognitionLanguages;
	long long _thresholdingAlgorithm;
	NSObject*<OS_dispatch_queue> _multiThreadingQueue;
	SCD_Union_FK0 _mergeSettings;

}

@property (assign,nonatomic) BOOL createFeaturesForAllConcomps;                             //@synthesize createFeaturesForAllConcomps=_createFeaturesForAllConcomps - In the implementation block
@property (assign,nonatomic) BOOL enableBinarizerFiltering;                                 //@synthesize enableBinarizerFiltering=_enableBinarizerFiltering - In the implementation block
@property (assign,nonatomic) BOOL colorSplits;                                              //@synthesize colorSplits=_colorSplits - In the implementation block
@property (assign,nonatomic) SCD_Union_FK0 mergeSettings;                                   //@synthesize mergeSettings=_mergeSettings - In the implementation block
@property (assign,nonatomic) int contrastLimit;                                             //@synthesize contrastLimit=_contrastLimit - In the implementation block
@property (assign,nonatomic) BOOL detectDiacritics;                                         //@synthesize detectDiacritics=_detectDiacritics - In the implementation block
@property (assign,nonatomic) int minimumCharacterHeight;                                    //@synthesize minimumCharacterHeight=_minimumCharacterHeight - In the implementation block
@property (assign,nonatomic) long long thresholdingAlgorithm;                               //@synthesize thresholdingAlgorithm=_thresholdingAlgorithm - In the implementation block
@property (assign,nonatomic) int binarizerLimit;                                            //@synthesize binarizerLimit=_binarizerLimit - In the implementation block
@property (nonatomic,copy) NSString * recognitionLanguage;                                  //@synthesize recognitionLanguage=_recognitionLanguage - In the implementation block
@property (nonatomic,copy) NSArray * recognitionLanguages;                                  //@synthesize recognitionLanguages=_recognitionLanguages - In the implementation block
@property (assign,nonatomic) BOOL returnSubFeatures;                                        //@synthesize returnSubFeatures=_returnSubFeatures - In the implementation block
@property (assign,nonatomic) BOOL minimizeFalseDetections;                                  //@synthesize minimizeFalseDetections=_minimizeFalseDetections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> multiThreadingQueue;              //@synthesize multiThreadingQueue=_multiThreadingQueue - In the implementation block
-(void)dealloc;
-(id)initWithDimensions:(CGSize)arg1 ;
-(void)resetOptions;
-(void)setMinimumCharacterHeight:(int)arg1 ;
-(void)setDetectDiacritics:(BOOL)arg1 ;
-(void)setReturnSubFeatures:(BOOL)arg1 ;
-(void)setMinimizeFalseDetections:(BOOL)arg1 ;
-(void)setRecognitionLanguage:(NSString *)arg1 ;
-(id)detectFeaturesInBuffer:(CVBufferRef)arg1 withRegionOfInterest:(CGRect)arg2 error:(id*)arg3 ;
-(BOOL)detectDiacritics;
-(BOOL)minimizeFalseDetections;
-(NSArray *)recognitionLanguages;
-(void)setRecognitionLanguages:(NSArray *)arg1 ;
-(void)resetTimers;
-(BOOL)returnSubFeatures;
-(int)minimumCharacterHeight;
-(NSString *)recognitionLanguage;
-(BOOL)disableMultithreading;
-(void)setThresholdingAlgorithm:(long long)arg1 ;
-(void)setContrastLimit:(int)arg1 ;
-(void)setBinarizerLimit:(int)arg1 ;
-(void)setEnableBinarizerFiltering:(BOOL)arg1 ;
-(void)setMergeSettings:(SCD_Union_FK0)arg1 ;
-(void)setMultiThreadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)colorSplits;
-(BOOL)createFeaturesForAllConcomps;
-(SCD_Union_FK0)mergeSettings;
-(id)createFeaturesForSessionScale:(int)arg1 roi:(CGRect)arg2 originalSize:(CGSize)arg3 startID:(long long*)arg4 ;
-(void)mergeFeature:(id)arg1 withArray:(id)arg2 ;
-(unsigned char)isValidPixelBuffer:(CVBufferRef)arg1 regionOfInterest:(CGRect)arg2 error:(id*)arg3 ;
-(void)translatePropertiesToOptionsWithNumSessions:(int)arg1 ;
-(long long)thresholdingAlgorithm;
-(NSObject*<OS_dispatch_queue>)multiThreadingQueue;
-(id)createFeaturesForROI:(CGRect)arg1 originalSize:(CGSize)arg2 lastID:(long long*)arg3 ;
-(void)runRecognizerOnFeatures:(id)arg1 roi:(CGRect)arg2 size:(CGSize)arg3 lastID:(long long*)arg4 ;
-(id)detectFeaturesInBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)detectCharacterInBoundingBox:(CGRect)arg1 error:(id*)arg2 ;
-(unsigned long long)getMemoryUsageOfLastOperation;
-(int)binarizerLimit;
-(void)setCreateFeaturesForAllConcomps:(BOOL)arg1 ;
-(BOOL)enableBinarizerFiltering;
-(void)setColorSplits:(BOOL)arg1 ;
-(int)contrastLimit;
@end

