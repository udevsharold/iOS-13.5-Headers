/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableDictionary;

@interface MFMailMessageStoreSearchResult : NSObject {

	NSDate* _continueOffset;
	NSMutableDictionary* _mailboxToRemoteIdDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * mailboxToRemoteIdDictionary;              //@synthesize mailboxToRemoteIdDictionary=_mailboxToRemoteIdDictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,retain) NSDate * continueOffset;                                        //@synthesize continueOffset=_continueOffset - In the implementation block
-(id)init;
-(unsigned long long)count;
-(void)setContinueOffset:(NSDate *)arg1 ;
-(void)addRemoteID:(id)arg1 mailbox:(id)arg2 ;
-(NSMutableDictionary *)mailboxToRemoteIdDictionary;
-(void)enumerateMailboxesAndRemoteIDsUsingBlock:(/*^block*/id)arg1 ;
-(NSDate *)continueOffset;
-(void)setMailboxToRemoteIdDictionary:(NSMutableDictionary *)arg1 ;
@end
