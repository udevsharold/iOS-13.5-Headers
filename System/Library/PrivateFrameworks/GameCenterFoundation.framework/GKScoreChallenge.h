/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge {

	GKScore* _score;

}

@property (nonatomic,readonly) GKLeaderboard * leaderboard; 
@property (nonatomic,retain) GKScore * score;                            //@synthesize score=_score - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(id)iconURLString;
-(id)iconSource;
-(id)detailGoalText;
-(id)composeGoalText;
-(id)alertGoalText;
-(id)smallIconURLString;
-(id)listTitleText;
-(id)listGoalText;
-(void)dealloc;
-(id)description;
-(GKScore *)score;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setScore:(GKScore *)arg1 ;
-(void)setInternal:(id)arg1 ;
-(id)titleText;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2 ;
@end
