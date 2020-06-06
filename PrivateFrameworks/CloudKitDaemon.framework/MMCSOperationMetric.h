/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSMutableDictionary, NSMutableSet, NSArray;


@protocol MMCSOperationMetric <NSObject>
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (assign) double queueing; 
@property (assign) double executing; 
@property (assign) unsigned long long bytesUploaded; 
@property (assign) unsigned long long bytesDownloaded; 
@property (assign) unsigned long long connections; 
@property (assign) unsigned long long connectionsCreated; 
@property (readonly) NSMutableDictionary * totalBytesByChunkProfile; 
@property (readonly) NSMutableDictionary * chunkCountByChunkProfile; 
@property (readonly) NSMutableDictionary * fileCountByChunkProfile; 
@property (readonly) NSMutableSet * requestUUIDs; 
@property (readonly) NSArray * rangesCopy; 
@required
-(NSDate *)startDate;
-(double)duration;
-(unsigned long long)bytesDownloaded;
-(void)setExecuting:(double)arg1;
-(NSMutableSet *)requestUUIDs;
-(unsigned long long)bytesUploaded;
-(double)queueing;
-(double)executing;
-(unsigned long long)connections;
-(unsigned long long)connectionsCreated;
-(void)setQueueing:(double)arg1;
-(void)setBytesUploaded:(unsigned long long)arg1;
-(void)setBytesDownloaded:(unsigned long long)arg1;
-(void)setConnections:(unsigned long long)arg1;
-(void)setConnectionsCreated:(unsigned long long)arg1;
-(void)addRange:(id)arg1;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
-(NSMutableDictionary *)totalBytesByChunkProfile;
-(NSMutableDictionary *)chunkCountByChunkProfile;
-(NSMutableDictionary *)fileCountByChunkProfile;
-(NSArray *)rangesCopy;

@end

