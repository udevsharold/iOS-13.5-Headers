/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKTournamentParticipantInternal, GKPlayer;

@interface GKTournamentParticipant : NSObject <NSSecureCoding> {

	GKTournamentParticipantInternal* _internal;
	GKPlayer* _player;

}

@property (retain) GKTournamentParticipantInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                             //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long playerGroup; 
@property (nonatomic,readonly) long long replayCount; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) BOOL cheatingIndicator; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKTournamentParticipantInternal *)internal;
-(void)setInternal:(GKTournamentParticipantInternal *)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
@end

