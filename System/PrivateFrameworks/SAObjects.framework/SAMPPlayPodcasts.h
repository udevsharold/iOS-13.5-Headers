/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray;

@interface SAMPPlayPodcasts : SADomainCommand

@property (nonatomic,copy) NSString * episodePlaybackOrder; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableITunesAccount; 
@property (assign,nonatomic) BOOL startPlaying; 
+(id)playPodcasts;
+(id)playPodcastsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(BOOL)startPlaying;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setStartPlaying:(BOOL)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
-(NSString *)sharedUserIdFromPlayableITunesAccount;
-(void)setSharedUserIdFromPlayableITunesAccount:(NSString *)arg1 ;
-(NSString *)episodePlaybackOrder;
-(void)setEpisodePlaybackOrder:(NSString *)arg1 ;
@end

