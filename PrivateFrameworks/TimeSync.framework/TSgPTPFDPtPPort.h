/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {

	char _localPDelayLogMeanInterval;
	char _remotePDelayLogMeanInterval;
	BOOL _multipleRemotes;
	BOOL _measuringPDelay;
	TSgPTPPortStatistics* _statistics;

}

@property (nonatomic,retain) TSgPTPPortStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) char localPDelayLogMeanInterval;                //@synthesize localPDelayLogMeanInterval=_localPDelayLogMeanInterval - In the implementation block
@property (assign,nonatomic) char remotePDelayLogMeanInterval;               //@synthesize remotePDelayLogMeanInterval=_remotePDelayLogMeanInterval - In the implementation block
@property (assign,nonatomic) BOOL multipleRemotes;                           //@synthesize multipleRemotes=_multipleRemotes - In the implementation block
@property (assign,nonatomic) BOOL measuringPDelay;                           //@synthesize measuringPDelay=_measuringPDelay - In the implementation block
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
-(void)dealloc;
-(TSgPTPPortStatistics *)statistics;
-(void)setStatistics:(TSgPTPPortStatistics *)arg1 ;
-(id)_statistics;
-(BOOL)_commonInitWithService:(unsigned)arg1 ;
-(void)updateProperties;
-(char)_localPDelayLogMeanInterval;
-(char)_remotePDelayLogMeanInterval;
-(BOOL)_multipleRemotes;
-(BOOL)_measuringPDelay;
-(char)localPDelayLogMeanInterval;
-(void)setLocalPDelayLogMeanInterval:(char)arg1 ;
-(char)remotePDelayLogMeanInterval;
-(void)setRemotePDelayLogMeanInterval:(char)arg1 ;
-(BOOL)multipleRemotes;
-(void)setMultipleRemotes:(BOOL)arg1 ;
-(BOOL)measuringPDelay;
-(void)setMeasuringPDelay:(BOOL)arg1 ;
@end

