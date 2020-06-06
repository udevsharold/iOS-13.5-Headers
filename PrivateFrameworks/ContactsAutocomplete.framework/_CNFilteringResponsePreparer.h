/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@interface _CNFilteringResponsePreparer : _CNAutocompleteResponsePreparerDecorator {

	/*^block*/id _filter;

}

@property (copy,readonly) id filter;              //@synthesize filter=_filter - In the implementation block
-(id)filter;
-(id)prepareResults:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 filter:(/*^block*/id)arg3 ;
@end

