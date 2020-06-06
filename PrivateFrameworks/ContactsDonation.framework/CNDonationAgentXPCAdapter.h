/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDonationAgentAdapter.h>

@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newXPCConnection;
+(void)donateMeCardValues:(id)arg1 scope:(id)arg2 ;
+(void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 scope:(id)arg2 ;
+(void)fetchDonatedMeCardWithScope:(id)arg1 ;
+(void)meCardDonationsWithScope:(id)arg1 ;
+(void)rejectValueWithDonationIdentifier:(id)arg1 scope:(id)arg2 ;
+(void)changeFromAccount:(id)arg1 toAccount:(id)arg2 scope:(id)arg3 ;
+(void)rejectValuesWithClusterIdentifier:(id)arg1 scope:(id)arg2 ;
+(void)removeAllRejectionsWithScope:(id)arg1 ;
-(id)donatedMeCardEither;
-(id)meCardDonations;
-(id)donateMeCardValues:(id)arg1 ;
-(id)removeDonatedMeCardValuesForIdentifiers:(id)arg1 ;
-(id)fetchDonatedMeCard;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2 ;
-(id)rejectValueWithDonationIdentifier:(id)arg1 ;
-(id)rejectValuesWithClusterIdentifier:(id)arg1 ;
-(id)removeAllRejections;
@end

