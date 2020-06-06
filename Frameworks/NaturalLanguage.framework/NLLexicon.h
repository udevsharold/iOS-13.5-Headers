/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString;

@interface NLLexicon : NSObject {

	NSString* _localization;
	const void* _lexicon;

}

@property (copy,readonly) NSString * localization; 
-(void)dealloc;
-(id)description;
-(NSString *)localization;
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(LXLexiconRef)lexicon;
-(void)_enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLocalization:(id)arg1 ;
-(id)entryForTokenID:(unsigned)arg1 ;
-(id)entryForString:(id)arg1 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

