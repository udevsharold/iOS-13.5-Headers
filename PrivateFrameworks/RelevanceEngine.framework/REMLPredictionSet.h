/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, REMLPrediction;

@interface REMLPredictionSet : NSObject {

	NSDictionary* _predictionsByKey;
	REMLPrediction* _prediction;

}

@property (nonatomic,readonly) REMLPrediction * prediction;              //@synthesize prediction=_prediction - In the implementation block
-(REMLPrediction *)prediction;
-(id)predictionForKey:(id)arg1 ;
-(id)initWithPrediction:(id)arg1 predictionMap:(id)arg2 ;
-(id)initWithPrediction:(id)arg1 ;
@end

