/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDSReachabilityObserverDelegate, OS_dispatch_queue;
#import <DataDeliveryServices/DataDeliveryServices-Structs.h>
@class NSObject;

@interface DDSReachabilityObserver : NSObject {

	BOOL _reachable;
	BOOL _isInternetReachable;
	id<DDSReachabilityObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	SCNetworkReachabilityRef _reachabilityRef;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SCNetworkReachabilityRef reachabilityRef;                //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (assign,nonatomic) BOOL isInternetReachable;                                  //@synthesize isInternetReachable=_isInternetReachable - In the implementation block
@property (nonatomic,retain) id<DDSReachabilityObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL reachable;                                          //@synthesize reachable=_reachable - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<DDSReachabilityObserverDelegate>)delegate;
-(void)setDelegate:(id<DDSReachabilityObserverDelegate>)arg1 ;
-(SCNetworkReachabilityRef)reachabilityRef;
-(void)reachabilityDidChange:(BOOL)arg1 ;
-(id)serverURL;
-(BOOL)isInternetReachable;
-(BOOL)reachable;
-(void)queryInitialState;
-(void)setIsInternetReachable:(BOOL)arg1 ;
@end

