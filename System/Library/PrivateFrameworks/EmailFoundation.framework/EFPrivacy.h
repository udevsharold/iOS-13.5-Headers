/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EFPrivacy : NSObject
+(id)ec_partiallyRedactedStringForSubjectOrSummary:(id)arg1 ;
+(id)ec_partiallyRedactedStringForAddress:(id)arg1 localPart:(id)arg2 domain:(id)arg3 ;
+(id)ec_redactedStringForMailboxURL:(id)arg1 ;
+(id)partiallyRedactedStringForString:(id)arg1 ;
+(id)fullyRedactedStringForString:(id)arg1 ;
+(id)partiallyRedactedStringForString:(id)arg1 maximumUnredactedLength:(unsigned long long)arg2 ;
+(id)dateByRemovingTimeComponentsFromDate:(id)arg1 ;
+(long long)weeksSinceDate:(id)arg1 ;
+(unsigned)bucketMessageCount:(unsigned long long)arg1 ;
@end
