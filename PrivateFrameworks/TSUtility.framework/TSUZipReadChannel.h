/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUReadChannel, OS_dispatch_queue;
@class TSUZipEntry, NSObject, NSString;

@interface TSUZipReadChannel : NSObject <TSUStreamReadChannel> {

	TSUZipEntry* _entry;
	id<TSUReadChannel> _archiveReadChannel;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithEntry:(id)arg1 archiveReadChannel:(id)arg2 ;
-(void)handleFailureWithQueue:(id)arg1 handler:(/*^block*/id)arg2 error:(id)arg3 ;
-(BOOL)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2 ;
-(void)readWithHeaderLength:(unsigned long long)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)processData:(id)arg1 CRC:(unsigned*)arg2 isDone:(BOOL)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
@end

