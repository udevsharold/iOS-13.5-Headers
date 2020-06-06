/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {

	NSMutableArray* _edges;
	NSMutableSet* _nodes;

}
+(id)path;
+(id)pathWithEdges:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)setEdges:(id)arg1 ;
-(id)sourceNode;
-(id)targetNode;
-(id)nodesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(BOOL)isEqualToPath:(id)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(id)edgeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)edgesCount;
-(unsigned long long)nodesCount;
-(double)edgesWeight;
-(BOOL)containsEdge:(id)arg1 ;
-(void)addFirstEdge:(id)arg1 ;
-(void)addLastEdge:(id)arg1 ;
-(void)removeFirstEdge;
-(void)removeLastEdge;
-(void)removeAllEdges;
-(id)graphRepresentation;
@end

