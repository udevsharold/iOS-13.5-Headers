/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSOrderedSet, MTPlaylist, MTPodcast;

@interface MTPodcastPlaylistSettings : NSManagedObject

@property (assign,nonatomic) int downloaded; 
@property (assign,nonatomic) long long episodesToShow; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) long long mediaType; 
@property (assign,nonatomic) BOOL showPlayedEpisodes; 
@property (assign,nonatomic) long long sortOrder; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSOrderedSet * episodes; 
@property (nonatomic,retain) MTPlaylist * playlist; 
@property (nonatomic,retain) MTPlaylist * playlistIfDefault; 
@property (nonatomic,retain) MTPodcast * podcast; 
@property (assign,nonatomic) long long playOrder; 
+(id)predicateForPlaylistSettingsUuid:(id)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end
