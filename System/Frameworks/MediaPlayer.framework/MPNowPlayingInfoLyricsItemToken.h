/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MPNowPlayingInfoLyricsItemToken : NSObject {

	void* _mediaRemoteLyricsItemToken;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsItemToken;              //@synthesize mediaRemoteLyricsItemToken=_mediaRemoteLyricsItemToken - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(void)dealloc;
-(NSDictionary *)userInfo;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithMediaRemoteLyricsItemToken:(void*)arg1 ;
-(void*)mediaRemoteLyricsItemToken;
@end
