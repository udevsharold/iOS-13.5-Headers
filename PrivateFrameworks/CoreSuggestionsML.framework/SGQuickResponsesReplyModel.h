/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SGQuickResponsesReplyModel : NSObject {

	unsigned long long _semanticClassIndex;
	NSArray* _semanticClasses;
	NSArray* _selectedPseudocounts;
	double _scoreWeight;
	unsigned long long _category;

}

@property (nonatomic,readonly) unsigned long long semanticClassIndex;              //@synthesize semanticClassIndex=_semanticClassIndex - In the implementation block
@property (nonatomic,readonly) NSArray * semanticClasses;                          //@synthesize semanticClasses=_semanticClasses - In the implementation block
@property (nonatomic,readonly) NSArray * selectedPseudocounts;                     //@synthesize selectedPseudocounts=_selectedPseudocounts - In the implementation block
@property (nonatomic,readonly) double scoreWeight;                                 //@synthesize scoreWeight=_scoreWeight - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                        //@synthesize category=_category - In the implementation block
+(id)semanticClassesForArray:(id)arg1 ;
-(unsigned long long)category;
-(id)initWithDictionary:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)semanticClassIndex;
-(NSArray *)semanticClasses;
-(NSArray *)selectedPseudocounts;
-(double)scoreWeight;
@end

