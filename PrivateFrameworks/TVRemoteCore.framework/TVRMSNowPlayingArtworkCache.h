/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _RMSNowPlayingArtworkCacheItem, NSCache;

@interface TVRMSNowPlayingArtworkCache : NSObject {

	_RMSNowPlayingArtworkCacheItem* _lastItem;
	NSCache* _cache;

}
+(id)sharedArtworkCache;
-(id)init;
-(id)artworkDataForIdentifier:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forIdentifier:(id)arg2 ;
-(id)artworkDataForNowPlayingInfo:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forNowPlayingInfo:(id)arg2 ;
@end

