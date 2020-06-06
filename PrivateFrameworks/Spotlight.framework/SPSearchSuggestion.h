/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:13 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFSearchSuggestion.h>

@interface SPSearchSuggestion : SFSearchSuggestion {

	BOOL _isSingleThread;
	BOOL _hasUsedDate;
	BOOL _isShortcut;
	int _weight;
	int _parentWeight;
	int _rootWeight;
	int _completionType;
	int _prefixLen;
	float _fieldWeight;
	unsigned long long _len;
	unsigned long long _fragments;
	double _age;
	unsigned long long _maxscore;
	double _compositeScore;
	double _phraseScore;

}

@property (assign) unsigned long long len;                    //@synthesize len=_len - In the implementation block
@property (assign) unsigned long long fragments;              //@synthesize fragments=_fragments - In the implementation block
@property (assign) double age;                                //@synthesize age=_age - In the implementation block
@property (assign) unsigned long long maxscore;               //@synthesize maxscore=_maxscore - In the implementation block
@property (assign) int weight;                                //@synthesize weight=_weight - In the implementation block
@property (assign) int parentWeight;                          //@synthesize parentWeight=_parentWeight - In the implementation block
@property (assign) int rootWeight;                            //@synthesize rootWeight=_rootWeight - In the implementation block
@property (assign) double compositeScore;                     //@synthesize compositeScore=_compositeScore - In the implementation block
@property (assign) int completionType;                        //@synthesize completionType=_completionType - In the implementation block
@property (assign) int prefixLen;                             //@synthesize prefixLen=_prefixLen - In the implementation block
@property (assign) float fieldWeight;                         //@synthesize fieldWeight=_fieldWeight - In the implementation block
@property (assign) BOOL isSingleThread;                       //@synthesize isSingleThread=_isSingleThread - In the implementation block
@property (assign) double phraseScore;                        //@synthesize phraseScore=_phraseScore - In the implementation block
@property (assign) BOOL hasUsedDate;                          //@synthesize hasUsedDate=_hasUsedDate - In the implementation block
@property (assign) BOOL isShortcut;                           //@synthesize isShortcut=_isShortcut - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(void)setWeight:(int)arg1 ;
-(int)weight;
-(double)age;
-(void)setAge:(double)arg1 ;
-(unsigned long long)len;
-(unsigned long long)fragments;
-(int)completionType;
-(void)setCompletionType:(int)arg1 ;
-(id)suggestionsFeedbackData;
-(id)searchEntities;
-(BOOL)isShortcut;
-(void)setFragments:(unsigned long long)arg1 ;
-(unsigned long long)maxscore;
-(int)parentWeight;
-(int)rootWeight;
-(double)compositeScore;
-(int)prefixLen;
-(float)fieldWeight;
-(BOOL)isSingleThread;
-(double)phraseScore;
-(BOOL)hasUsedDate;
-(void)setLen:(unsigned long long)arg1 ;
-(void)setMaxscore:(unsigned long long)arg1 ;
-(void)setParentWeight:(int)arg1 ;
-(void)setRootWeight:(int)arg1 ;
-(void)setCompositeScore:(double)arg1 ;
-(void)setPrefixLen:(int)arg1 ;
-(void)setFieldWeight:(float)arg1 ;
-(void)setIsSingleThread:(BOOL)arg1 ;
-(void)setPhraseScore:(double)arg1 ;
-(void)setHasUsedDate:(BOOL)arg1 ;
-(void)setIsShortcut:(BOOL)arg1 ;
@end

