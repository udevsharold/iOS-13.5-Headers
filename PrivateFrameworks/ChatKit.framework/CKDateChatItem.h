/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKStampChatItem.h>

@class NSDate;

@interface CKDateChatItem : CKStampChatItem

@property (nonatomic,readonly) NSDate * date; 
-(id)now;
-(NSDate *)date;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end
