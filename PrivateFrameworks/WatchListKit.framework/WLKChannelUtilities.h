/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, WLKChannelsResponse, NSError, NSDictionary, NSArray;

@interface WLKChannelUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _filtered;
	WLKChannelsResponse* _cachedResponse;
	NSError* _error;
	NSDictionary* _channelsByBundleID;

}

@property (nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * channelsByID; 
@property (nonatomic,copy,readonly) NSDictionary * channelsByBundleID;              //@synthesize channelsByBundleID=_channelsByBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedChannels; 
+(id)sharedInstance;
+(id)sharedInstanceFiltered;
+(id)_validiTunesBundles;
+(BOOL)isItunesBundleID:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(id)_configuration;
-(BOOL)loaded;
-(id)channelIDForBundleID:(id)arg1 ;
-(id)channelForBundleID:(id)arg1 ;
-(NSArray *)orderedChannels;
-(id)channelForID:(id)arg1 ;
-(void)loadIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id)initFiltered:(BOOL)arg1 ;
-(void)_loadConfigIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)channelsByID;
-(BOOL)isItunesOrFirstPartyBundleID:(id)arg1 ;
-(NSDictionary *)channelsByBundleID;
@end

