/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKListNode;

@interface GKLinkedList : NSObject {

	GKListNode* _headNode;
	GKListNode* _tailNode;

}

@property (assign,nonatomic) GKListNode * headNode;              //@synthesize headNode=_headNode - In the implementation block
@property (assign,nonatomic) GKListNode * tailNode;              //@synthesize tailNode=_tailNode - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)removeNode:(id)arg1 ;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(void)removeAllNodes;
-(BOOL)isConsistent;
-(void)setHeadNode:(GKListNode *)arg1 ;
-(GKListNode *)headNode;
-(id)nodeForInsertionWithValue:(id)arg1 ;
-(void)insertNodeAtBeginning:(id)arg1 ;
-(id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2 ;
-(GKListNode *)tailNode;
-(void)setTailNode:(GKListNode *)arg1 ;
-(BOOL)hasCycle;
@end

