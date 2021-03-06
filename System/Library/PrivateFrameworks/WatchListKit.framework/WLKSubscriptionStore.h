/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, WLKSubscriptionData;

@interface WLKSubscriptionStore : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
	WLKSubscriptionData* _subscriptionData;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)cachedSubscriptionData;
-(void)fetchSubscriptionData:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSubscriptionDataDictionary:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshSubscriptionDataIfNeeded;
@end

