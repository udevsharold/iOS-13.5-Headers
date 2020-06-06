/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICStorageManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,readonly) unsigned long long storageSpaceAvailable; 
@property (nonatomic,readonly) BOOL cachingEnabled; 
+(id)sharedManager;
-(id)init;
-(BOOL)cachingEnabled;
-(unsigned long long)storageSpaceAvailable;
-(void)ensureStorageIsAvailable:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

