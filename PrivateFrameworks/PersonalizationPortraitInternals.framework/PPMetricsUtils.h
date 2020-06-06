/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPMetricsUtils : NSObject
+(id)loggingQueue;
+(PPMNamedEntityAlgorithm_)mapNamedEntityAlgorithm:(unsigned long long)arg1 ;
+(int)mapNamedEntityAlgorithmForPET2:(unsigned long long)arg1 ;
+(PPMLocationAlgorithm_)mapLocationAlgorithm:(unsigned short)arg1 ;
+(PPMTopicAlgorithm_)mapTopicAlgorithm:(unsigned long long)arg1 ;
+(int)mapTopicAlgorithmForPET2:(unsigned long long)arg1 ;
+(PPMTopicDonationSource_)topicSourceForBundleId:(id)arg1 ;
+(int)topicSourceForPET2WithBundleId:(id)arg1 ;
+(PPMTopicDonationErrorReason_)mapTopicDonationErrorForPET1:(long long)arg1 ;
+(int)mapTopicDonationErrorForPET2:(long long)arg1 ;
+(PPMNamedEntityDonationSource_)namedEntitySourceForBundleId:(id)arg1 ;
+(int)namedEntitySourceForPET2WithBundleId:(id)arg1 ;
+(PPMLocationDonationSource_)locationSourceForBundleId:(id)arg1 ;
+(PPMObjectDonationSource_)donationSourceForBundleId:(id)arg1 ;
+(PPMPortraitFeedbackType_)feedbackTypeForPET:(unsigned)arg1 ;
+(int)feedbackTypeForPET2:(unsigned)arg1 ;
+(PPMTypeSafeBool_)typeSafeBoolOfCond:(BOOL)arg1 ;
+(id)truncatedClientBundleId:(id)arg1 ;
+(id)truncatedClientBundleIdOrCurrentBundleId:(id)arg1 ;
@end

