/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal, NSMutableArray;

@interface GKTournamentParticipantHistoricalDataInternal : GKInternalRepresentation {

	NSString* _tournamentDefinitionID;
	GKPlayerInternal* _player;
	long long _tournamentsPlayed;
	long long _highestRank;
	long long _latestRank;
	long long _averageRank;
	long long _bestScore;
	long long _latestScore;
	long long _averageScore;
	NSMutableArray* _historicalRanks;

}

@property (nonatomic,retain) NSString * tournamentDefinitionID;              //@synthesize tournamentDefinitionID=_tournamentDefinitionID - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long tournamentsPlayed;                    //@synthesize tournamentsPlayed=_tournamentsPlayed - In the implementation block
@property (assign,nonatomic) long long highestRank;                          //@synthesize highestRank=_highestRank - In the implementation block
@property (assign,nonatomic) long long latestRank;                           //@synthesize latestRank=_latestRank - In the implementation block
@property (assign,nonatomic) long long averageRank;                          //@synthesize averageRank=_averageRank - In the implementation block
@property (assign,nonatomic) long long bestScore;                            //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) long long latestScore;                          //@synthesize latestScore=_latestScore - In the implementation block
@property (assign,nonatomic) long long averageScore;                         //@synthesize averageScore=_averageScore - In the implementation block
@property (nonatomic,retain) NSMutableArray * historicalRanks;               //@synthesize historicalRanks=_historicalRanks - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setBestScore:(long long)arg1 ;
-(long long)bestScore;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(void)setTournamentDefinitionID:(NSString *)arg1 ;
-(NSString *)tournamentDefinitionID;
-(long long)tournamentsPlayed;
-(void)setTournamentsPlayed:(long long)arg1 ;
-(long long)highestRank;
-(void)setHighestRank:(long long)arg1 ;
-(long long)latestRank;
-(void)setLatestRank:(long long)arg1 ;
-(long long)averageRank;
-(void)setAverageRank:(long long)arg1 ;
-(long long)latestScore;
-(void)setLatestScore:(long long)arg1 ;
-(long long)averageScore;
-(void)setAverageScore:(long long)arg1 ;
-(NSMutableArray *)historicalRanks;
-(void)setHistoricalRanks:(NSMutableArray *)arg1 ;
@end

