/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBVideoGroupsConfig : PBCodable <NSCopying> {

	long long _moreFromPublisherBarTime;
	long long _moreVideosGroupMaxNumberOfVideos;
	long long _moreVideosGroupMinNumberOfVideos;
	long long _nowPlayingBarTime;
	long long _upNextBarTime;
	int _moreVideosGroupFilterOption;
	int _moreVideosGroupSortOption;
	BOOL _moreFromPublisherBarEnabled;
	BOOL _playsMutedByDefault;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasPlaysMutedByDefault; 
@property (assign,nonatomic) BOOL playsMutedByDefault;                                //@synthesize playsMutedByDefault=_playsMutedByDefault - In the implementation block
@property (assign,nonatomic) BOOL hasNowPlayingBarTime; 
@property (assign,nonatomic) long long nowPlayingBarTime;                             //@synthesize nowPlayingBarTime=_nowPlayingBarTime - In the implementation block
@property (assign,nonatomic) BOOL hasUpNextBarTime; 
@property (assign,nonatomic) long long upNextBarTime;                                 //@synthesize upNextBarTime=_upNextBarTime - In the implementation block
@property (assign,nonatomic) BOOL hasMoreFromPublisherBarTime; 
@property (assign,nonatomic) long long moreFromPublisherBarTime;                      //@synthesize moreFromPublisherBarTime=_moreFromPublisherBarTime - In the implementation block
@property (assign,nonatomic) BOOL hasMoreFromPublisherBarEnabled; 
@property (assign,nonatomic) BOOL moreFromPublisherBarEnabled;                        //@synthesize moreFromPublisherBarEnabled=_moreFromPublisherBarEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasMoreVideosGroupSortOption; 
@property (assign,nonatomic) int moreVideosGroupSortOption;                           //@synthesize moreVideosGroupSortOption=_moreVideosGroupSortOption - In the implementation block
@property (assign,nonatomic) BOOL hasMoreVideosGroupFilterOption; 
@property (assign,nonatomic) int moreVideosGroupFilterOption;                         //@synthesize moreVideosGroupFilterOption=_moreVideosGroupFilterOption - In the implementation block
@property (assign,nonatomic) BOOL hasMoreVideosGroupMinNumberOfVideos; 
@property (assign,nonatomic) long long moreVideosGroupMinNumberOfVideos;              //@synthesize moreVideosGroupMinNumberOfVideos=_moreVideosGroupMinNumberOfVideos - In the implementation block
@property (assign,nonatomic) BOOL hasMoreVideosGroupMaxNumberOfVideos; 
@property (assign,nonatomic) long long moreVideosGroupMaxNumberOfVideos;              //@synthesize moreVideosGroupMaxNumberOfVideos=_moreVideosGroupMaxNumberOfVideos - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)playsMutedByDefault;
-(long long)nowPlayingBarTime;
-(long long)upNextBarTime;
-(long long)moreFromPublisherBarTime;
-(BOOL)moreFromPublisherBarEnabled;
-(int)moreVideosGroupSortOption;
-(int)moreVideosGroupFilterOption;
-(long long)moreVideosGroupMinNumberOfVideos;
-(long long)moreVideosGroupMaxNumberOfVideos;
-(void)setMoreVideosGroupSortOption:(int)arg1 ;
-(void)setMoreVideosGroupFilterOption:(int)arg1 ;
-(void)setPlaysMutedByDefault:(BOOL)arg1 ;
-(void)setHasPlaysMutedByDefault:(BOOL)arg1 ;
-(BOOL)hasPlaysMutedByDefault;
-(void)setNowPlayingBarTime:(long long)arg1 ;
-(void)setHasNowPlayingBarTime:(BOOL)arg1 ;
-(BOOL)hasNowPlayingBarTime;
-(void)setUpNextBarTime:(long long)arg1 ;
-(void)setHasUpNextBarTime:(BOOL)arg1 ;
-(BOOL)hasUpNextBarTime;
-(void)setMoreFromPublisherBarTime:(long long)arg1 ;
-(void)setHasMoreFromPublisherBarTime:(BOOL)arg1 ;
-(BOOL)hasMoreFromPublisherBarTime;
-(void)setMoreFromPublisherBarEnabled:(BOOL)arg1 ;
-(void)setHasMoreFromPublisherBarEnabled:(BOOL)arg1 ;
-(BOOL)hasMoreFromPublisherBarEnabled;
-(void)setHasMoreVideosGroupSortOption:(BOOL)arg1 ;
-(BOOL)hasMoreVideosGroupSortOption;
-(void)setHasMoreVideosGroupFilterOption:(BOOL)arg1 ;
-(BOOL)hasMoreVideosGroupFilterOption;
-(void)setMoreVideosGroupMinNumberOfVideos:(long long)arg1 ;
-(void)setHasMoreVideosGroupMinNumberOfVideos:(BOOL)arg1 ;
-(BOOL)hasMoreVideosGroupMinNumberOfVideos;
-(void)setMoreVideosGroupMaxNumberOfVideos:(long long)arg1 ;
-(void)setHasMoreVideosGroupMaxNumberOfVideos:(BOOL)arg1 ;
-(BOOL)hasMoreVideosGroupMaxNumberOfVideos;
@end

