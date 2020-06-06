/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class CKConversation;

@interface CKTranscriptHeaderViewController : UIViewController {

	BOOL _shouldInvalidateOnAddressBookChange;
	CKConversation* _conversation;

}

@property (nonatomic,retain) CKConversation * conversation;                           //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) BOOL shouldInvalidateOnAddressBookChange;              //@synthesize shouldInvalidateOnAddressBookChange=_shouldInvalidateOnAddressBookChange - In the implementation block
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(BOOL)shouldInvalidateOnAddressBookChange;
@end

