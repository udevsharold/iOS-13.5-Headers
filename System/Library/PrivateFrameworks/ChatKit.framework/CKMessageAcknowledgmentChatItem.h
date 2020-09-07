/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageChatItem.h>
#import <libobjc.A.dylib/CKMessageAcknowledgment.h>

@class IMHandle, NSString, UIColor;

@interface CKMessageAcknowledgmentChatItem : CKAssociatedMessageChatItem <CKMessageAcknowledgment> {

	long long _messageAcknowledgmentType;

}

@property (nonatomic,readonly) IMHandle * sender; 
@property (nonatomic,readonly) char balloonOrientation; 
@property (nonatomic,readonly) char balloonColorType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long messageAcknowledgmentType;                     //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
@property (nonatomic,readonly) UIColor * acknowledgmentImageColor; 
@property (nonatomic,readonly) NSString * acknowledgmentImageName; 
@property (nonatomic,readonly) UIColor * selectedAcknowledgmentImageColor; 
@property (nonatomic,readonly) UIColor * selectedBalloonColor; 
-(IMHandle *)sender;
-(UIEdgeInsets)contentInsets;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(char)balloonOrientation;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(char)transcriptOrientation;
-(BOOL)wantsDrawerLayout;
-(UIColor *)selectedAcknowledgmentImageColor;
-(UIColor *)acknowledgmentImageColor;
-(long long)messageAcknowledgmentType;
-(long long)themeColor;
-(NSString *)acknowledgmentImageName;
-(UIColor *)selectedBalloonColor;
-(id)messageAcknowledgmentChatItem;
-(long long)themeStyle;
-(char)balloonColorType;
@end
