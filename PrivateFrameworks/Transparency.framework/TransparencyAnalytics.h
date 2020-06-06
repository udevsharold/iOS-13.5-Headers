/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TransparencySFAnalytics;

@interface TransparencyAnalytics : NSObject {

	TransparencySFAnalytics* _sfanalytics;

}

@property (retain) TransparencySFAnalytics * sfanalytics;              //@synthesize sfanalytics=_sfanalytics - In the implementation block
+(id)logger;
+(id)formatEventName:(id)arg1 application:(id)arg2 ;
+(BOOL)doWithAnalyticsForEventName:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)hasInternalDiagnostics;
+(unsigned long long)doKTResultWithAnalyticsForEventName:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 ;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 withAttributes:(id)arg4 ;
-(void)logSuccessForEventNamed:(id)arg1 ;
-(void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 ;
-(void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 ;
-(void)noteEventNamed:(id)arg1 ;
-(void)removeMultiSamplerForName:(id)arg1 ;
-(void)logMetric:(id)arg1 withName:(id)arg2 ;
-(void)addMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)setSfanalytics:(TransparencySFAnalytics *)arg1 ;
-(TransparencySFAnalytics *)sfanalytics;
@end

