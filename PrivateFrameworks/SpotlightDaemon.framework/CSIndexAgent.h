/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol MDIndexer;
@class NSMutableDictionary;

@interface CSIndexAgent : CSXPCConnection {

	id<MDIndexer> _indexer;
	NSMutableDictionary* _indexConnections;

}

@property (nonatomic,retain) NSMutableDictionary * indexConnections;              //@synthesize indexConnections=_indexConnections - In the implementation block
@property (nonatomic,retain) id<MDIndexer> indexer;                               //@synthesize indexer=_indexer - In the implementation block
+(id)indexAgent:(BOOL)arg1 ;
+(id)indexDelegateAgent;
-(id<MDIndexer>)indexer;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(void)setIndexer:(id<MDIndexer>)arg1 ;
-(void)setIndexConnections:(NSMutableDictionary *)arg1 ;
-(id)indexConnection:(id)arg1 ;
-(NSMutableDictionary *)indexConnections;
@end

