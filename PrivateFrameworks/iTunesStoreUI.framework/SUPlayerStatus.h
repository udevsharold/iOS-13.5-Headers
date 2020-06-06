/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface SUPlayerStatus : NSObject <NSCopying> {

	double _currentTime;
	double _duration;
	NSError* _error;
	long long _state;

}

@property (assign,nonatomic) double currentTime;                 //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long playerState;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(long long)playerState;
-(void)setPlayerState:(long long)arg1 ;
@end

