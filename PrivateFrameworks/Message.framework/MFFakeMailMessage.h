/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class NSString, MFMailboxUid, MailAccount, MFMessageHeaders;

@interface MFFakeMailMessage : MFMailMessage {

	NSString* _persistentID;
	MFMailboxUid* _mailbox;
	MailAccount* _account;
	MFMessageHeaders* _fakeHeaders;

}

@property (nonatomic,retain) MFMessageHeaders * fakeHeaders;              //@synthesize fakeHeaders=_fakeHeaders - In the implementation block
@property (nonatomic,retain) MFMessageHeaders * headers; 
@property (nonatomic,retain) MailAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MFMailboxUid * mailbox;                      //@synthesize mailbox=_mailbox - In the implementation block
-(id)init;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(id)persistentID;
-(void)setHeaders:(MFMessageHeaders *)arg1 ;
-(MFMessageHeaders *)headers;
-(MFMailboxUid *)mailbox;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(long long)mailboxID;
-(MFMessageHeaders *)fakeHeaders;
-(void)setFakeHeaders:(MFMessageHeaders *)arg1 ;
@end

