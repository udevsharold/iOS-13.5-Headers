/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SBSStatusBarStyleOverridesAssertionAcquisitionHandlerEntry : NSObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) id handler;                                 //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(id)initWithHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

