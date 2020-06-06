/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ATXAppPredictionFeedbackItem : NSObject {

	float _scoreInputs[669];
	float _totalScore;
	NSString* _bundleId;

}

@property (nonatomic,readonly) NSString * bundleId;                   //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) float totalScore;                      //@synthesize totalScore=_totalScore - In the implementation block
@property (nonatomic,readonly) const float* scoreInputs; 
+(id)feedbackItemsForResponse:(id)arg1 ;
+(id)feedbackItemsForChunks:(id)arg1 ;
+(id)feedbackItemsForFeedbackChunk:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)bundleId;
-(id)initWithBundleId:(id)arg1 totalScore:(float)arg2 scoreInputs:(const float*)arg3 ;
-(const float*)scoreInputs;
-(float)totalScore;
@end

