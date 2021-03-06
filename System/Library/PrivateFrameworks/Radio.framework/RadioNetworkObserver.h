/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RadioNetworkObserver : NSObject {

	long long _networkUsageCount;
	NSObject*<OS_dispatch_queue> _networkUsageQueue;

}

@property (nonatomic,readonly) BOOL isUsingNetwork; 
@property (nonatomic,readonly) BOOL isCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(id)_init;
-(BOOL)isUsingNetwork;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(BOOL)isCellularNetworkingAllowed;
@end

