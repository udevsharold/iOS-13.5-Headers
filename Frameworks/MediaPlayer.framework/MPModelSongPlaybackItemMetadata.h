/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObjectPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelSong;

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelSong* _song;

}

@property (nonatomic,retain) MPModelSong * song;              //@synthesize song=_song - In the implementation block
+(id)requiredProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contentType;
-(id)mediaItem;
-(id)artistName;
-(BOOL)isExplicitTrack;
-(id)copyrightText;
-(long long)storeSubscriptionAdamID;
-(id)modelGenericObject;
-(id)composerName;
-(BOOL)showComposer;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(id)albumTitle;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(long long)artistStoreAdamID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(long long)storeAdamID;
-(unsigned long long)storeSagaID;
-(id)localFileAsset;
-(id)playbackPosition;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(MPModelSong *)song;
-(void)setSong:(MPModelSong *)arg1 ;
-(float)volumeNormalization;
-(id)homeSharingAsset;
@end

