/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNAnnouncementPlanEvent;

@interface MNAnnouncementConflict : NSObject {

	BOOL _announcementsAreSimilar;
	MNAnnouncementPlanEvent* _firstEvent;
	MNAnnouncementPlanEvent* _secondEvent;
	double _timeGap;
	double _desiredTimeGap;

}

@property (nonatomic,retain) MNAnnouncementPlanEvent * firstEvent;               //@synthesize firstEvent=_firstEvent - In the implementation block
@property (nonatomic,retain) MNAnnouncementPlanEvent * secondEvent;              //@synthesize secondEvent=_secondEvent - In the implementation block
@property (assign,nonatomic) double timeGap;                                     //@synthesize timeGap=_timeGap - In the implementation block
@property (assign,nonatomic) double desiredTimeGap;                              //@synthesize desiredTimeGap=_desiredTimeGap - In the implementation block
@property (assign,nonatomic) BOOL announcementsAreSimilar;                       //@synthesize announcementsAreSimilar=_announcementsAreSimilar - In the implementation block
-(id)description;
-(BOOL)announcementsAreSimilar;
-(double)timeGap;
-(double)desiredTimeGap;
-(MNAnnouncementPlanEvent *)firstEvent;
-(MNAnnouncementPlanEvent *)secondEvent;
-(void)setFirstEvent:(MNAnnouncementPlanEvent *)arg1 ;
-(void)setSecondEvent:(MNAnnouncementPlanEvent *)arg1 ;
-(void)setTimeGap:(double)arg1 ;
-(void)setDesiredTimeGap:(double)arg1 ;
-(void)setAnnouncementsAreSimilar:(BOOL)arg1 ;
@end

