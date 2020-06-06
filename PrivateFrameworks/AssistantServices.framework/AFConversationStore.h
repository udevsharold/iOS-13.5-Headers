/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AFConversationStore : NSObject {

	NSMutableDictionary* _conversationsByIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (getter=_conversationsByIdentifier,nonatomic,readonly) NSMutableDictionary * conversationsByIdentifier;              //@synthesize conversationsByIdentifier=_conversationsByIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                               //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_conversationsByIdentifier;
-(void)_registerConversation:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeConversationWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveConversation:(id)arg1 withIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchConversationWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

