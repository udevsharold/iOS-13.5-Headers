/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject {

	CNFuture* _nameStringTokenizer;

}

@property (retain) CNFuture * nameStringTokenizer;              //@synthesize nameStringTokenizer=_nameStringTokenizer - In the implementation block
+(id)tokensFromString:(id)arg1 ;
+(id)lazyNameStringTokenizerWithLocale:(id)arg1 ;
-(id)init;
-(id)initWithLocale:(id)arg1 ;
-(id)tokensFromString:(id)arg1 ;
-(void)setNameStringTokenizer:(CNFuture *)arg1 ;
-(/*^block*/id)expandCJKNames;
-(CNFuture *)nameStringTokenizer;
@end
