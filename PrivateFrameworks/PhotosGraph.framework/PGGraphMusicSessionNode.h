/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSSet;

@interface PGGraphMusicSessionNode : PGGraphNode

@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * trackNodes; 
+(id)musicSessionDateSortDescriptors;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSSet *)momentNodes;
-(NSSet *)trackNodes;
-(void)enumerateMusicTrackNodesUsingBlock:(/*^block*/id)arg1 ;
@end
