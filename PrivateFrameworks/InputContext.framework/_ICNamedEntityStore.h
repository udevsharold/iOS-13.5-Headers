/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputContext/InputContext-Structs.h>
@class NSMutableOrderedSet, _ICTransientLexicon, NSArray;

@interface _ICNamedEntityStore : NSObject {

	NSMutableOrderedSet* _recentNamedEntityQueue;
	_ICTransientLexicon* _wordLexicon;
	_ICTransientLexicon* _phraseLexicon;
	NSArray* _lexicons;
	/*^block*/id _wordFilteringBlock;
	/*^block*/id _filteringBlock;

}

@property (nonatomic,copy) id filteringBlock;                 //@synthesize filteringBlock=_filteringBlock - In the implementation block
@property (nonatomic,retain) NSArray * lexicons;              //@synthesize lexicons=_lexicons - In the implementation block
+(id)tokenize:(id)arg1 ;
+(id)lexiconViews;
-(id)init;
-(void)removeAllEntries;
-(void)removeEntry:(id)arg1 ;
-(void)setFilteringBlock:(id)arg1 ;
-(NSArray *)lexicons;
-(void)addEntity:(id)arg1 isDurable:(BOOL)arg2 ;
-(void)reloadRecents;
-(void)removeEntry:(id)arg1 source:(unsigned char)arg2 ;
-(void)removeEntriesBySource:(unsigned char)arg1 ;
-(id)filterWord:(id)arg1 ;
-(void)updateQueue:(id)arg1 newEntity:(id)arg2 ;
-(USetRef)exemplarSetForSupportedLocales;
-(BOOL)areStringCharactersWhitelisted:(id)arg1 ;
-(BOOL)isValidNamedEntity:(id)arg1 explanation:(id*)arg2 ;
-(void)addEntry:(id)arg1 tokenizedNewEntity:(id)arg2 source:(unsigned char)arg3 type:(unsigned char)arg4 ;
-(BOOL)isFirstCandidateBetter:(id)arg1 than:(id)arg2 ;
-(void)updateQueueFromString:(id)arg1 newEntity:(id)arg2 ;
-(id)filteringBlock;
-(void)setLexicons:(NSArray *)arg1 ;
@end

