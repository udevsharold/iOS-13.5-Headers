/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ATXAppPredictorScoreLogger.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSString;

@interface _ATXAppPredictorJSONScoreLogger : NSObject <_ATXAppPredictorScoreLogger> {

	NSMutableDictionary* _history;
	unsigned char _consumerSubType;
	NSMutableArray* _subscoreHistories;
	NSObject*<OS_dispatch_queue> _fastQueue;
	NSObject*<OS_dispatch_queue> _slowQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)flush;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)setAssetVersion:(unsigned long long)arg1 ;
-(void)setConsumerSubType:(unsigned char)arg1 ;
-(void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3 ;
-(void)logInputDict:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3 ;
-(void)setPredictionClass:(id)arg1 ;
-(void)setCacheAge:(double)arg1 ;
-(void)logStageScores:(id)arg1 secondStageScores:(id)arg2 thirdStageScores:(id)arg3 ;
-(void)flushWithFilenameSuffix:(id)arg1 ;
-(void)flushWithCompletion:(/*^block*/id)arg1 filenameSuffix:(id)arg2 ;
@end

