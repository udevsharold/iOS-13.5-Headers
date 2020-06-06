/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary, IMDoubleLinkedList;

@interface CKCurrentConversationsManager : NSObject {

	NSCountedSet* _currentConversations;
	NSMutableDictionary* _idToNodeDictionary;
	IMDoubleLinkedList* _orderedKeys;

}

@property (nonatomic,retain) NSCountedSet * currentConversations;                   //@synthesize currentConversations=_currentConversations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * idToNodeDictionary;              //@synthesize idToNodeDictionary=_idToNodeDictionary - In the implementation block
@property (nonatomic,retain) IMDoubleLinkedList * orderedKeys;                      //@synthesize orderedKeys=_orderedKeys - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheSize; 
+(id)sharedInstance;
-(unsigned long long)cacheSize;
-(void)removeConversation:(id)arg1 ;
-(void)addConversation:(id)arg1 ;
-(void)loadHistoryForConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(BOOL)arg2 ;
-(void)setOrderedKeys:(IMDoubleLinkedList *)arg1 ;
-(IMDoubleLinkedList *)orderedKeys;
-(void)purgeConversations:(id)arg1 ;
-(NSCountedSet *)currentConversations;
-(NSMutableDictionary *)idToNodeDictionary;
-(void)pruneCacheToSize:(unsigned long long)arg1 ;
-(void)_prepareToDumpCachedConversation:(id)arg1 ;
-(void)purgeConversation:(id)arg1 ;
-(BOOL)_canDumpConversationFromCache:(id)arg1 ;
-(void)pruneCache;
-(void)setCurrentConversations:(NSCountedSet *)arg1 ;
-(void)setIdToNodeDictionary:(NSMutableDictionary *)arg1 ;
@end

