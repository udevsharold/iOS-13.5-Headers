/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>

@class PPMFeedbackRegistered, PPM2FeedbackPortraitRegistered, PPConnectionsPredictionStore, PPConnectionsDonationStore;

@interface PPLocalConnectionsStore : NSObject <PPFeedbackAccepting> {

	PPMFeedbackRegistered* _feedbackTracker;
	PPM2FeedbackPortraitRegistered* _feedbackTracker2;
	PPConnectionsPredictionStore* _predictionStore;
	PPConnectionsDonationStore* _donationStore;

}
+(id)defaultStore;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)recentLocationDonationsSinceDate:(id)arg1 error:(id*)arg2 ;
-(id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)initWithPredictionStore:(id)arg1 donationStore:(id)arg2 ;
@end

