/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AWDObserverDelegate;
#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDObserver : NSObject {

	shared_ptr<AWDObserverConnection>* observerConnection;
	id<AWDObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AWDObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AWDObserverDelegate>)delegate;
-(void)setDelegate:(id<AWDObserverDelegate>)arg1 ;
-(void)setDelegate:(id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)setConfiguration:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
