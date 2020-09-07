/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CRRecentContactsLibrary, NSString;

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch> {

	CRRecentContactsLibrary* _library;

}

@property (nonatomic,retain) CRRecentContactsLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CRRecentContactsLibrary *)library;
-(void)setLibrary:(CRRecentContactsLibrary *)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoreRecentContactsLibrary:(id)arg1 ;
-(id)autocompleteResultsForRecentContacts:(id)arg1 request:(id)arg2 ;
@end
