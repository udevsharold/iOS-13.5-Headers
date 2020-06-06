/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteLocalQueryDelegate.h>

@class NSString;

@interface CNAutocompleteLocalGroupsFetcher : NSObject <CNAutocompleteLocalQueryDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resultsForSearchString:(id)arg1 terms:(id)arg2 properties:(id)arg3 contactStore:(id)arg4 error:(id*)arg5 ;
-(id)autocompleteResultsForProperties:(id)arg1 fetchResults:(id)arg2 resultFactory:(id)arg3 contactStore:(id)arg4 ;
@end

