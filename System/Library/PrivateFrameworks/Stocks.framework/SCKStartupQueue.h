/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject {

	SCKAsyncSerialQueue* _startupTaskQueue;

}

@property (nonatomic,retain) SCKAsyncSerialQueue * startupTaskQueue;              //@synthesize startupTaskQueue=_startupTaskQueue - In the implementation block
-(id)initWithDeferredStartup:(BOOL)arg1 ;
-(void)executeAfterStartup:(/*^block*/id)arg1 ;
-(void)enqueueStartupBlock:(/*^block*/id)arg1 ;
-(SCKAsyncSerialQueue *)startupTaskQueue;
-(void)setStartupTaskQueue:(SCKAsyncSerialQueue *)arg1 ;
@end

