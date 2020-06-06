/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKMessagePartChatItem.h>

@class UIItemProvider, NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {

	UIItemProvider* _dragItemProvider;

}

@property (nonatomic,copy,readonly) NSAttributedString * text; 
@property (nonatomic,copy,readonly) NSAttributedString * fallbackCorruptText; 
@property (nonatomic,copy,readonly) NSAttributedString * subject; 
@property (nonatomic,readonly) BOOL containsHyperlink; 
@property (nonatomic,readonly) BOOL containsExcessiveLineHeightCharacters; 
-(id)_time;
-(NSAttributedString *)text;
-(NSAttributedString *)subject;
-(id)composition;
-(Class)balloonViewClass;
-(id)pasteboardItems;
-(id)loadTranscriptText;
-(id)dragItemProvider;
-(id)_attributedTextWithTextColor:(id)arg1 ;
-(BOOL)shouldUseBigEmoji;
-(id)_fallbackCorruptMessageTextWithTextColor:(id)arg1 ;
-(BOOL)containsHyperlink;
-(BOOL)showMoneyResults;
-(Class)impactBalloonViewClass;
-(NSAttributedString *)fallbackCorruptText;
-(id)sendAnimationTextWithColor:(id)arg1 ;
-(BOOL)containsExcessiveLineHeightCharacters;
@end

