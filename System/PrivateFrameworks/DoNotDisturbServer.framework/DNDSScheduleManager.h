/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSScheduleManagerDataSource;
@class DNDSModeAssertionManager, DNDSScheduleSettings;

@interface DNDSScheduleManager : NSObject {

	DNDSModeAssertionManager* _modeAssertionManager;
	DNDSScheduleSettings* _currentScheduleSettings;
	id<DNDSScheduleManagerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<DNDSScheduleManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<DNDSScheduleManagerDataSource>)dataSource;
-(void)setDataSource:(id<DNDSScheduleManagerDataSource>)arg1 ;
-(void)refresh;
-(void)_refreshWithScheduleSettings:(id)arg1 context:(id)arg2 ;
-(id)initWithModeAssertionManager:(id)arg1 ;
@end
