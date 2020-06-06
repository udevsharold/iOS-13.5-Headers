/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECTransferActionReplayerSubclassMethods <NSObject>
@required
-(BOOL)isRecoverableError:(id)arg1;
-(id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
-(BOOL)downloadFailed;
-(id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
-(id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
-(id)appendItem:(id)arg1 mailboxURL:(id)arg2;
-(BOOL)deleteSourceMessagesFromTransferItems:(id)arg1;

@end

