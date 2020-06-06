/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationAgentAdapter;
@interface CNDonationStore : NSObject {

	id<CNDonationAgentAdapter> _adapter;

}

@property (nonatomic,readonly) id<CNDonationAgentAdapter> adapter;              //@synthesize adapter=_adapter - In the implementation block
-(id)init;
-(id<CNDonationAgentAdapter>)adapter;
-(id)donatedMeCardEither;
-(id)initWithAdapter:(id)arg1 ;
-(void)rejectValueWithDonationIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)meCardDonations;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(void)donateMeCardValues:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDonatedMeCard:(/*^block*/id)arg1 ;
-(id)donatedMeCard;
-(void)rejectValuesWithClusterIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllRejectionsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

