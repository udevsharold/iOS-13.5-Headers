/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataProvider.h>

@class NLDataProvider, NSArray, NSDictionary;

@interface NLConstrainedDataProvider : NLDataProvider {

	NLDataProvider* _dataProvider;
	NLConstraintParameters _parameters;
	NSArray* _locators;
	NSDictionary* _labelMap;
	NSDictionary* _inverseLabelMap;
	NSDictionary* _vocabularyMap;
	NSDictionary* _documentFrequencyMap;
	unsigned long long _numberOfLabels;
	unsigned long long _numberOfVocabularyEntries;

}
-(id)configuration;
-(CFStringTokenizerRef)tokenizer;
-(unsigned long long)numberOfLabels;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(unsigned long long)numberOfInstances;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(id)inverseLabelMap;
-(void)_generateMaps;
-(unsigned long long)numberOfVocabularyEntries;
-(id)initWithDataProvider:(id)arg1 parameters:(NLConstraintParameters)arg2 modelTrainer:(id)arg3 ;
@end

