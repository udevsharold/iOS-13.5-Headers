/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKCustomTournamentDelegate.h>

@class GKPlayer, GKTournament;

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate> {

	GKTournament* _tournament;
	GKPlayer* _creator;

}

@property (assign,nonatomic,__weak) GKTournament * tournament;              //@synthesize tournament=_tournament - In the implementation block
@property (nonatomic,retain) GKPlayer * creator;                            //@synthesize creator=_creator - In the implementation block
-(GKPlayer *)creator;
-(void)setCreator:(GKPlayer *)arg1 ;
-(void)setTournament:(GKTournament *)arg1 ;
-(GKTournament *)tournament;
-(void)addInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)declineInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

