/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearch.h>

@class NSArray;

@interface TIWordSearchChinesePhonetic : TIWordSearch {

	/*^block*/id _contactObserver;
	BOOL _fuzzyPinyinEnabled;
	BOOL _tenKeyPinyinEnabled;
	int _shuangpinType;
	NSArray* _fuzzyPinyinPairs;

}

@property (nonatomic,retain) NSArray * fuzzyPinyinPairs;              //@synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs - In the implementation block
@property (assign,nonatomic) BOOL fuzzyPinyinEnabled;                 //@synthesize fuzzyPinyinEnabled=_fuzzyPinyinEnabled - In the implementation block
@property (assign,nonatomic) BOOL tenKeyPinyinEnabled;                //@synthesize tenKeyPinyinEnabled=_tenKeyPinyinEnabled - In the implementation block
@property (assign,nonatomic) int shuangpinType;                       //@synthesize shuangpinType=_shuangpinType - In the implementation block
+(id)pinyinCharacterSetWithTones;
-(void)dealloc;
-(void)setShuangpinType:(int)arg1 ;
-(void)updateMecabraState;
-(int)mecabraInputMethodType;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(void)clearObservers;
-(int)shuangpinType;
-(void)setFuzzyPinyinPairs:(NSArray *)arg1 ;
-(NSArray *)fuzzyPinyinPairs;
-(void)updateAddressBook;
-(void)updateFuzzyPinyinSettings;
-(void)updateShuangpinTypeWithReanalysisMode:(BOOL)arg1 ;
-(unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(BOOL)arg1 firstSyllableLocked:(BOOL)arg2 reanalysisMode:(BOOL)arg3 hardwareKeyboardMode:(BOOL)arg4 predictionEnabled:(BOOL)arg5 ;
-(void)clearCacheForInputString:(id)arg1 keyboardInput:(id)arg2 selectedDisambiguationCandidateIndex:(unsigned long long)arg3 ;
-(id)transLiterateReading:(id)arg1 withName:(id)arg2 ;
-(void)addContact:(id)arg1 toVocabulary:(void*)arg2 toReadingPairs:(id)arg3 ;
-(BOOL)fuzzyPinyinEnabled;
-(void)setFuzzyPinyinEnabled:(BOOL)arg1 ;
-(BOOL)tenKeyPinyinEnabled;
-(void)setTenKeyPinyinEnabled:(BOOL)arg1 ;
@end

