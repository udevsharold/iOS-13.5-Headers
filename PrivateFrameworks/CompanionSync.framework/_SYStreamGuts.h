/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSStreamDelegate;
#import <CompanionSync/CompanionSync-Structs.h>
@class NSObject, NSError, NSMutableDictionary;

@interface _SYStreamGuts : NSObject {

	CFRunLoopSourceRef _runloopSource;
	unsigned _port;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	id<NSStreamDelegate> _delegate;
	NSError* _error;
	unsigned long long _status;
	NSMutableDictionary* _propertyStore;

}
-(void)dealloc;
-(id)propertyForKey:(id)arg1 ;
-(void)storeProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setEventHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)createRunloopSourceForStream:(id)arg1 ;
-(void)postStreamEvent:(unsigned long long)arg1 forStream:(id)arg2 ;
@end

