/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PETScalarEventTracker, PETGoalConversionEventTracker, PETDistributionEventTracker;

@interface PPConnectionsMetricsTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PETScalarEventTracker* _opportunityTracker;
	PETGoalConversionEventTracker* _conversionTracker;
	PETScalarEventTracker* _dismissalTracker;
	PETDistributionEventTracker* _timingTracker;
	PETScalarEventTracker* _donationTracker;
	PETScalarEventTracker* _pasteboardTracker;

}

@property (nonatomic,retain) PETScalarEventTracker * opportunityTracker;                     //@synthesize opportunityTracker=_opportunityTracker - In the implementation block
@property (nonatomic,retain) PETGoalConversionEventTracker * conversionTracker;              //@synthesize conversionTracker=_conversionTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * dismissalTracker;                       //@synthesize dismissalTracker=_dismissalTracker - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * timingTracker;                    //@synthesize timingTracker=_timingTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * donationTracker;                        //@synthesize donationTracker=_donationTracker - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * pasteboardTracker;                      //@synthesize pasteboardTracker=_pasteboardTracker - In the implementation block
+(id)sharedInstance;
+(id)consumerStringForConsumerType:(unsigned long long)arg1 ;
+(id)donationSourceFromBundleID:(id)arg1 ;
+(id)triggerFromCriteria:(id)arg1 ;
-(id)init;
-(void)trackConversionGoalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 converted:(BOOL)arg6 ;
-(void)trackOpportunityForConsumer:(id)arg1 trigger:(id)arg2 targetApp:(id)arg3 ;
-(void)trackDismissalForConsumer:(id)arg1 source:(id)arg2 trigger:(id)arg3 originatingApp:(id)arg4 targetApp:(id)arg5 ;
-(void)trackTimingForConsumer:(id)arg1 time:(unsigned long long)arg2 ;
-(void)trackDonationFromBundleId:(id)arg1 source:(id)arg2 hasLatLon:(BOOL)arg3 isEligible:(BOOL)arg4 ;
-(void)trackPasteboardItemFromBundleId:(id)arg1 hasAddress:(BOOL)arg2 isEligible:(BOOL)arg3 ;
-(id)privacyFriendlyBundleIdentifierWith:(id)arg1 ;
-(PETScalarEventTracker *)opportunityTracker;
-(void)setOpportunityTracker:(PETScalarEventTracker *)arg1 ;
-(PETGoalConversionEventTracker *)conversionTracker;
-(void)setConversionTracker:(PETGoalConversionEventTracker *)arg1 ;
-(PETScalarEventTracker *)dismissalTracker;
-(void)setDismissalTracker:(PETScalarEventTracker *)arg1 ;
-(PETDistributionEventTracker *)timingTracker;
-(void)setTimingTracker:(PETDistributionEventTracker *)arg1 ;
-(PETScalarEventTracker *)donationTracker;
-(void)setDonationTracker:(PETScalarEventTracker *)arg1 ;
-(PETScalarEventTracker *)pasteboardTracker;
-(void)setPasteboardTracker:(PETScalarEventTracker *)arg1 ;
@end

