/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/_SYStreamPropertyProxying.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class SYCompressedFileInputStream, NSMutableArray, NSObject, NSString;

@interface _SYInputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying> {

	SYCompressedFileInputStream* _stream;
	NSMutableArray* _items;
	/*^block*/id _onComplete;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_completeAllItemsWithError:(id)arg1 ;
-(void)setStreamProperty:(id)arg1 forKey:(id)arg2 ;
-(id)streamPropertyForKey:(id)arg1 ;
-(id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2 ;
-(void)whenComplete:(/*^block*/id)arg1 ;
-(void)_tryToReadData;
-(void)readDataOfLength:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

