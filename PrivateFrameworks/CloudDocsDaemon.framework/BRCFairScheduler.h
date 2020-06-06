/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface BRCFairScheduler : NSObject {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	unsigned long long _maxRegistedSourceBit;
	unsigned long long _lastVisitedBit;
	NSMutableDictionary* _sourceForBitIndex;
	BOOL _resumed;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)close;
-(void)addSource:(id)arg1 ;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(void)schedule;
-(id)initWithQueue:(id)arg1 name:(id)arg2 ;
-(id)sourceForBitIndex:(unsigned long long)arg1 ;
-(void)unregisterSources;
-(void)signalSourceForBitIndex:(unsigned long long)arg1 ;
@end

