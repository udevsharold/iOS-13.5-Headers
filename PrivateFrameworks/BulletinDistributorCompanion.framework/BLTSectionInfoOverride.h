/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface BLTSectionInfoOverride : NSObject {

	NSNumber* _grouping;
	NSNumber* _level;
	NSNumber* _sound;
	NSNumber* _criticalAlert;

}

@property (nonatomic,retain) NSNumber * grouping;                   //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,retain) NSNumber * level;                      //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSNumber * sound;                      //@synthesize sound=_sound - In the implementation block
@property (nonatomic,retain) NSNumber * criticalAlert;              //@synthesize criticalAlert=_criticalAlert - In the implementation block
-(NSNumber *)level;
-(void)setLevel:(NSNumber *)arg1 ;
-(void)setSound:(NSNumber *)arg1 ;
-(NSNumber *)sound;
-(void)setGrouping:(NSNumber *)arg1 ;
-(NSNumber *)grouping;
-(NSNumber *)criticalAlert;
-(void)setCriticalAlert:(NSNumber *)arg1 ;
-(id)initWithOverrides:(id)arg1 ;
@end

