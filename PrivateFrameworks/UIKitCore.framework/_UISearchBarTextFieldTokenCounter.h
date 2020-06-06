/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSTextStorage, NSMutableIndexSet, NSIndexSet;

@interface _UISearchBarTextFieldTokenCounter : NSObject {

	id _textStorageObservation;
	NSTextStorage* _textStorage;
	NSMutableIndexSet* _tokenCharacterIndexes;

}

@property (nonatomic,readonly) NSIndexSet * tokenCharacterIndexes; 
@property (nonatomic,readonly) NSRange characterRangeOfAllTokens; 
-(NSIndexSet *)tokenCharacterIndexes;
-(id)tokenAtCharacterIndex:(unsigned long long)arg1 ;
-(NSRange)characterRangeOfAllTokens;
-(NSRange)characterRangeOfTextAfterLastToken;
-(unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)arg1 ;
-(NSRange)subrangeOfTextAfterLastTokenForCharacterRange:(NSRange)arg1 ;
-(id)initWithTextStorage:(id)arg1 ;
-(void)_addCharacterIndexesOfTokensInRange:(NSRange)arg1 toIndexSet:(id)arg2 ;
-(void)_handleProcessEditing;
-(NSRange)characterRangeForSubrangeOfTextAfterLastToken:(NSRange)arg1 ;
-(unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)arg1 ;
@end

