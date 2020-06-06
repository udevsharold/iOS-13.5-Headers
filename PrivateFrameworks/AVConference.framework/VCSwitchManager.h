/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCSwitchManager : NSObject {

	unsigned _localSwitches;
	unsigned _remoteSwitches;
	unsigned _negotiatedSwitches;

}

@property (assign) unsigned localSwitches;                   //@synthesize localSwitches=_localSwitches - In the implementation block
@property (assign) unsigned remoteSwitches;                  //@synthesize remoteSwitches=_remoteSwitches - In the implementation block
@property (assign) unsigned negotiatedSwitches;              //@synthesize negotiatedSwitches=_negotiatedSwitches - In the implementation block
-(id)description;
-(void)initializeLocalSwitches;
-(BOOL)isLocalSwitchEnabled:(unsigned)arg1 ;
-(unsigned)negotiatedSwitches;
-(unsigned)remoteSwitches;
-(void)setRemoteSwitches:(unsigned)arg1 ;
-(void)negotiateSwitches;
-(BOOL)isSwitchEnabled:(unsigned)arg1 ;
-(unsigned)localSwitches;
-(void)setupLocalSwitchesIndividually;
-(void)updateDuplicationEnhancementSwitches;
-(void)setupLocalOnOffSwitchesFromMasterSwitch;
-(void)setupLocalAudioTestGroupSwitches;
-(void)setupLocalVideoTestGroupSwitches;
-(void)setupLocalNetworkTestGroupSwitches;
-(void)setupLocalRateControlTestGroupSwitches;
-(void)setupLocalDuplicationTestGroupSwitches;
-(void)setupLocalOnOffSwitches;
-(void)setupLocalABTestSwitches;
-(void)setLocalSwitches:(unsigned)arg1 ;
-(void)setNegotiatedSwitches:(unsigned)arg1 ;
@end

