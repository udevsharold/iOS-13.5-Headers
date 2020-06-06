/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError, NSString;

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)writeData:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(id)initWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

