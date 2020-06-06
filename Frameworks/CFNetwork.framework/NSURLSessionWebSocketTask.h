/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTask.h>

@class NSData;

@interface NSURLSessionWebSocketTask : NSURLSessionTask {

	long long _maximumMessageSize;
	long long _closeCode;
	NSData* _closeReason;

}

@property (assign) long long maximumMessageSize;              //@synthesize maximumMessageSize=_maximumMessageSize - In the implementation block
@property (readonly) long long closeCode;                     //@synthesize closeCode=_closeCode - In the implementation block
@property (copy,readonly) NSData * closeReason;               //@synthesize closeReason=_closeReason - In the implementation block
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)receiveMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendPingWithPongReceiveHandler:(/*^block*/id)arg1 ;
-(void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2 ;
-(long long)maximumMessageSize;
-(void)setMaximumMessageSize:(long long)arg1 ;
-(long long)closeCode;
-(NSData *)closeReason;
@end

