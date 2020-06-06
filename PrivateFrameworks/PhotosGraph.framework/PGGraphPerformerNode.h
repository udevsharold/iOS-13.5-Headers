/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphPortraitNamedEntity.h>

@class PPNamedEntity, NSString;

@interface PGGraphPerformerNode : PGGraphNode <PGGraphPortraitNamedEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PPNamedEntity * pg_namedEntity; 
@property (nonatomic,readonly) NSString * name; 
-(NSString *)name;
-(PPNamedEntity *)pg_namedEntity;
@end

