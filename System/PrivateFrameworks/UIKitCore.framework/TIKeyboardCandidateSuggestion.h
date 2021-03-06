/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {

	unsigned long long _customInfoType;
	UITextSuggestion* _textSuggestion;

}

@property (nonatomic,readonly) UITextSuggestion * textSuggestion;              //@synthesize textSuggestion=_textSuggestion - In the implementation block
+(id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
+(id)candidateWithSuggestion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)input;
-(id)label;
-(unsigned long long)customInfoType;
-(id)candidate;
-(UITextSuggestion *)textSuggestion;
-(id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
@end

