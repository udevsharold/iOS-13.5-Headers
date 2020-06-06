/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDInteractionEventLog.h>

@class NSArray;

@interface EDInteractionEventLogMultiplexer : NSObject <EDInteractionEventLog> {

	NSArray* _logs;

}

@property (nonatomic,retain) NSArray * logs;              //@synthesize logs=_logs - In the implementation block
-(id)description;
-(void)setLogs:(NSArray *)arg1 ;
-(id)initWithLogs:(id)arg1 ;
-(NSArray *)logs;
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4 ;
-(void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4 ;
-(void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 ;
-(void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3 ;
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4 ;
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4 ;
@end

