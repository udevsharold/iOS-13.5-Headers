/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInput_ja/TextInput_ja-Structs.h>
@interface TICandidateSorter : NSObject {

	IDXIndexRef _index;
	CFDictionaryRef _radicalToSortPosition;

}

@property (assign) IDXIndexRef index;                                  //@synthesize index=_index - In the implementation block
@property (assign) CFDictionaryRef radicalToSortPosition;              //@synthesize radicalToSortPosition=_radicalToSortPosition - In the implementation block
-(id)init;
-(void)dealloc;
-(IDXIndexRef)index;
-(void)setIndex:(IDXIndexRef)arg1 ;
-(BOOL)hasCandidatesFromCandidates:(id)arg1 inputString:(id)arg2 sortedBy:(unsigned long long)arg3 ;
-(id)candidatesFromCandidates:(id)arg1 inputString:(id)arg2 sortedBy:(unsigned long long)arg3 ;
-(void)setRadicalToSortPosition:(CFDictionaryRef)arg1 ;
-(BOOL)getInfoForCharacter:(id)arg1 strokeCount:(unsigned long long*)arg2 radicals:(id*)arg3 yomis:(id*)arg4 ;
-(CFDictionaryRef)radicalToSortPosition;
-(BOOL)hasCandidatesSortedByRadicalFromCandidates:(id)arg1 ;
-(BOOL)hasCandidatesSortedByYomiFromCandidates:(id)arg1 inputString:(id)arg2 ;
-(BOOL)hasCandidatesSortedByFacemarkCategoryFromCandidates:(id)arg1 ;
-(id)candidatesSortedByRadicalFromCandidates:(id)arg1 ;
-(id)candidatesSortedByYomiFromCandidates:(id)arg1 inputString:(id)arg2 ;
@end
