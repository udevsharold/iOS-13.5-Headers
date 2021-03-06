/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, WLKServerConfigurationResponse, NSURLSessionConfiguration;

@interface WLKConfigurationManager : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	WLKServerConfigurationResponse* _config;
	NSURLSessionConfiguration* _sharedCacheSessionConfiguration;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)_invalidateCache;
-(id)_config;
-(id)_configuration;
-(id)_stringForCachePolicy:(unsigned long long)arg1 ;
-(void)fetchConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchConfigurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleLibraryDidChangeNotification:(id)arg1 ;
-(void)_setConfig:(id)arg1 ;
-(id)_configurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 ;
-(void)_invalidateNetworkCache;
-(id)_utsk;
-(void)_setUtsk:(id)arg1 ;
@end

