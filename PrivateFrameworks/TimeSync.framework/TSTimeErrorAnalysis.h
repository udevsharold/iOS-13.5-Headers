/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSTimeErrorAnalysis : NSObject {

	BOOL _calculated;
	long long _numberOfErrors;
	double* _timestamps;
	double* _timeErrors;
	double _averagePeriod;
	long long _lowestWindowSize;
	long long _highestWindowSize;
	long long _calculatedStepSize;

}

@property (nonatomic,readonly) long long numberOfErrors;                  //@synthesize numberOfErrors=_numberOfErrors - In the implementation block
@property (nonatomic,readonly) double* timestamps;                        //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,readonly) double* timeErrors;                        //@synthesize timeErrors=_timeErrors - In the implementation block
@property (nonatomic,readonly) double averagePeriod;                      //@synthesize averagePeriod=_averagePeriod - In the implementation block
@property (nonatomic,readonly) BOOL calculated;                           //@synthesize calculated=_calculated - In the implementation block
@property (nonatomic,readonly) long long lowestWindowSize;                //@synthesize lowestWindowSize=_lowestWindowSize - In the implementation block
@property (nonatomic,readonly) long long highestWindowSize;               //@synthesize highestWindowSize=_highestWindowSize - In the implementation block
@property (nonatomic,readonly) long long calculatedStepSize;              //@synthesize calculatedStepSize=_calculatedStepSize - In the implementation block
@property (nonatomic,readonly) long long analysisLimit; 
@property (nonatomic,readonly) long long threadingLimit; 
@property (nonatomic,readonly) long long threadingSegment; 
+(id)variableName;
+(id)additionalScriptInitialization;
+(id)additionalScriptRecords;
+(id)additionalScriptPlots:(id)arg1 ;
+(id)plotYLabel;
+(id)plotTitle;
+(id)plotYLimits:(id)arg1 ;
+(id)plotSize;
+(id)keyPathsForValuesAffectingAnalysisLimit;
+(id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(BOOL)arg5 ;
-(void)dealloc;
-(double*)timestamps;
-(double*)timeErrors;
-(long long)numberOfErrors;
-(void)performAnalysisWithThreadingOption:(long long)arg1 ;
-(long long)analysisLimit;
-(void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 withThreadingOption:(long long)arg4 ;
-(long long)threadingLimit;
-(void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
-(long long)threadingSegment;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2 ;
-(id)initWithTimeErrorValues:(id)arg1 ;
-(void)performAnalysis;
-(void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg1 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 ;
-(double)averagePeriod;
-(BOOL)calculated;
-(long long)lowestWindowSize;
-(long long)highestWindowSize;
-(long long)calculatedStepSize;
@end

