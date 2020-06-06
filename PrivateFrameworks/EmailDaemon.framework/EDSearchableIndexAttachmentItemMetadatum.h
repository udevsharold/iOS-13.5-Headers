/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDSearchableIndexAttachmentItemMetadatumBuilder.h>

@class NSString, NSArray, NSDate, NSURL;

@interface EDSearchableIndexAttachmentItemMetadatum : NSObject <EDSearchableIndexAttachmentItemMetadatumBuilder> {

	NSURL* _attachmentFileURL;
	NSString* _domainIdentifier;
	NSString* _accountIdentifier;
	NSArray* _mailboxIdentifiers;
	NSString* _senderAddress;
	NSArray* _recipientAddresses;
	NSDate* _dateReceived;
	NSDate* _dateSent;

}

@property (nonatomic,copy) NSString * domainIdentifier;                 //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * mailboxIdentifiers;                //@synthesize mailboxIdentifiers=_mailboxIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                    //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy) NSArray * recipientAddresses;                //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                     //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,retain) NSDate * dateSent;                         //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,readonly) NSURL * attachmentFileURL;               //@synthesize attachmentFileURL=_attachmentFileURL - In the implementation block
@property (nonatomic,readonly) BOOL canReadAttachmentFile; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(NSArray *)mailboxIdentifiers;
-(NSString *)accountIdentifier;
-(NSArray *)recipientAddresses;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSDate *)dateReceived;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setMailboxIdentifiers:(NSArray *)arg1 ;
-(NSURL *)attachmentFileURL;
-(id)initWithAttachmentFileURL:(id)arg1 builder:(/*^block*/id)arg2 ;
-(BOOL)canReadAttachmentFile;
@end

