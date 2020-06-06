/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PLFrequentLocationProtocol.h>

@class NSDateInterval, NSSet, NSString, NSDate, PGGraphAddressNode;

@interface PGGraphFrequentLocationNode : PGGraphNode <PLFrequentLocationProtocol> {

	NSDateInterval* _localDateInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CLLocationCoordinate2D coordinate; 
@property (readonly) NSDateInterval * dateInterval; 
@property (readonly) NSSet * items; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDateInterval * localDateInterval; 
@property (readonly) PGGraphAddressNode * addressNode; 
@property (readonly) NSSet * momentNodes; 
@property (readonly) unsigned long long numberOfMomentNodes; 
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(NSDateInterval *)dateInterval;
-(NSSet *)items;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSDateInterval *)localDateInterval;
-(NSSet *)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphAddressNode *)addressNode;
-(unsigned long long)numberOfMomentNodes;
@end

