/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMSpamFilterHelper : NSObject
+(BOOL)isInternationalSpamFilteringEnabled;
+(BOOL)receiverIsCandidateForSpamFiltering:(id)arg1 ;
+(BOOL)senderIsCandidateForSMSDowngrade:(id)arg1 ;
+(BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)arg1 withRecipient:(id)arg2 ;
+(BOOL)senderIsCandidateForBlackhole:(id)arg1 ;
+(BOOL)senderIsKnownContact:(id)arg1 ;
+(BOOL)anyParticipantIsCandidateForBlackhole:(id)arg1 ;
+(BOOL)anyParticipantIsKnownContact:(id)arg1 ;
+(BOOL)isFilterUnknownSendersEnabled;
+(id)mapID:(id)arg1 usingKey:(id)arg2 ;
+(BOOL)isChineseSpamFilteringEnabled;
+(BOOL)isKnownContact:(id)arg1 ;
+(id)_cnRecordForAliases:(id)arg1 ;
+(BOOL)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(BOOL)arg3 withConversationDowngradeState:(BOOL)arg4 andConversationHistoryState:(BOOL)arg5 ;
+(BOOL)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(BOOL)arg3 ;
+(BOOL)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 givenHistory:(BOOL)arg3 forEligibleAccounts:(BOOL)arg4 ;
+(BOOL)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 otherRecipients:(id)arg3 givenHistory:(BOOL)arg4 forEligibleAccounts:(BOOL)arg5 ;
+(BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)arg1 ;
+(BOOL)accountRegionIsCandidateForSpamFiltering:(id)arg1 ;
+(BOOL)accountCountryIsCandidateForSpamFiltering:(id)arg1 ;
+(void)participantsAreiMessagable:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)sanitizeParticipants:(id)arg1 excludingHandles:(id)arg2 ;
+(id)internationalSpamFilterLearnMoreURL;
+(BOOL)repliedToChat:(id)arg1 ;
+(BOOL)receivedResponseForChat:(id)arg1 ;
@end

