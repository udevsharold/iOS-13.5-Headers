/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphSocialGroupNode : PGGraphNode

@property (nonatomic,readonly) unsigned long long rank; 
@property (nonatomic,readonly) unsigned long long numberOfMomentNodes; 
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * personNodes; 
+(id)weightSortDescriptors;
+(id)sortedSocialGroupNodeForMomentNodes:(id)arg1 ;
-(unsigned long long)rank;
-(NSSet *)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)personNodes;
-(unsigned long long)numberOfMomentNodes;
-(void)enumeratePersonNodesUsingBlock:(/*^block*/id)arg1 ;
@end

