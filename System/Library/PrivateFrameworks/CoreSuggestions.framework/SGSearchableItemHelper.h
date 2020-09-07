/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGSearchableItemHelper : NSObject
+(BOOL)mailItemIsRecent:(id)arg1 emailHeaders:(id)arg2 ;
+(id)mailItemMessageIdHeaderValues:(id)arg1 ;
+(BOOL)mailItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3 ;
+(BOOL)mailItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)mailItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)mailItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2 ;
+(BOOL)mailItemIsFromSupportedAccount:(id)arg1 ;
+(BOOL)searchableItemIsEmpty:(id)arg1 ;
+(BOOL)searchableItemIsOutgoing:(id)arg1 ;
+(BOOL)mailItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3 ;
+(BOOL)mailItemIsRecent:(id)arg1 ;
+(BOOL)mailItemIsValid:(id)arg1 ;
+(BOOL)mailItemIsSPAM:(id)arg1 ;
+(BOOL)mailItemIsInDrafts:(id)arg1 ;
+(BOOL)mailItemIsInSent:(id)arg1 ;
+(BOOL)mailItemIsInTrash:(id)arg1 ;
+(BOOL)mailItemIsTooBig:(id)arg1 ;
+(id)serializeAttributes:(id)arg1 ;
+(id)serializeAttributesAndBody:(id)arg1 ;
+(id)deserializeAttributes:(id)arg1 ;
+(id)deserializeAttributes:(id)arg1 andBody:(id)arg2 ;
+(id)deserializeAttributesAndBody:(id)arg1 ;
@end
