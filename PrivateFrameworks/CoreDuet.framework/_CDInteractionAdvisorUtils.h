/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDInteractionAdvisorUtils : NSObject
+(BOOL)contact:(id)arg1 mayRepresentTheSamePersonAsOneOf:(id)arg2 ;
+(id)contactsInInteraction:(id)arg1 ;
+(id)hashForAdviceWithContact:(id)arg1 account:(id)arg2 bundleId:(id)arg3 mechanism:(long long)arg4 ;
+(id)inferConsumerIdentifierFromSettings:(id)arg1 ;
+(unsigned long long)modelTypeForConsumerIdentifier:(id)arg1 modelSettings:(id)arg2 ;
+(BOOL)adjustRanker:(id)arg1 forModel:(unsigned long long)arg2 ;
+(id)nameFromModelID:(unsigned long long)arg1 ;
+(id)stringKeyForAdvice:(id)arg1 ;
+(id)unionSet:(id)arg1 withSet:(id)arg2 ;
+(id)contactsForIdentifiers:(id)arg1 ;
+(id)adviceBasedOnInteractions:(id)arg1 forContacts:(id)arg2 andRanker:(id)arg3 ignoringContacts:(id)arg4 withLimit:(unsigned long long)arg5 aggregateByIdentifier:(BOOL)arg6 requireOneOutgoingInteraction:(BOOL)arg7 ;
+(id)rankContacts:(id)arg1 basedOnInteractions:(id)arg2 andRanker:(id)arg3 ;
+(id)createTimePredicateForReferenceDate:(id)arg1 recentLookBackDays:(int)arg2 windowHours:(int)arg3 lookBackWeeks:(int)arg4 lookAheadWeeks:(int)arg5 ;
+(void)updateConsumerModelSettings:(id)arg1 ;
+(void)adjustForConsumerSettings:(id)arg1 modelSettings:(id)arg2 andRanker:(id)arg3 ;
@end

