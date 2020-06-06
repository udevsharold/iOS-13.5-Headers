/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class NSMutableDictionary;

@interface SBWakeLogger : NSObject {

	os_unfair_lock_s _lock;
	BOOL _trackingWake;
	unsigned _timesyncService;
	unsigned _backlightService;
	long long _homeButtonType;
	NSMutableDictionary* _wakeSouceToEventDict;

}

@property (assign,nonatomic) BOOL trackingWake;                                       //@synthesize trackingWake=_trackingWake - In the implementation block
@property (assign,nonatomic) long long homeButtonType;                                //@synthesize homeButtonType=_homeButtonType - In the implementation block
@property (assign,nonatomic) unsigned timesyncService;                                //@synthesize timesyncService=_timesyncService - In the implementation block
@property (assign,nonatomic) unsigned backlightService;                               //@synthesize backlightService=_backlightService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * wakeSouceToEventDict;              //@synthesize wakeSouceToEventDict=_wakeSouceToEventDict - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(long long)homeButtonType;
-(unsigned)backlightService;
-(void)wakeMayBegin:(long long)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)_lock_wakeDidBegin:(long long)arg1 ;
-(void)wakeDidBegin:(long long)arg1 ;
-(void)wakeDidEnd;
-(void)lockDidBegin;
-(BOOL)trackingWake;
-(void)setTrackingWake:(BOOL)arg1 ;
-(void)setHomeButtonType:(long long)arg1 ;
-(unsigned)timesyncService;
-(void)setTimesyncService:(unsigned)arg1 ;
-(void)setBacklightService:(unsigned)arg1 ;
-(NSMutableDictionary *)wakeSouceToEventDict;
-(void)setWakeSouceToEventDict:(NSMutableDictionary *)arg1 ;
@end

