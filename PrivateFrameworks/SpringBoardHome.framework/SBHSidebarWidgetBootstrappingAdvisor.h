/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBHSidebarWidgetLearningDataSource;
@class PCPersistentTimer, NSHashTable;

@interface SBHSidebarWidgetBootstrappingAdvisor : NSObject {

	PCPersistentTimer* _widgetLearningCadenceUpdateTimer;
	NSHashTable* _observers;
	BOOL _shouldSidebarWidgetsBeInLearningMode;
	id<SBHSidebarWidgetLearningDataSource> _dataSource;
	double _learningDuration;
	unsigned long long _learningEpoch;

}

@property (assign,nonatomic) BOOL shouldSidebarWidgetsBeInLearningMode;                        //@synthesize shouldSidebarWidgetsBeInLearningMode=_shouldSidebarWidgetsBeInLearningMode - In the implementation block
@property (nonatomic,readonly) id<SBHSidebarWidgetLearningDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) double learningDuration;                                        //@synthesize learningDuration=_learningDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long learningEpoch;                               //@synthesize learningEpoch=_learningEpoch - In the implementation block
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id<SBHSidebarWidgetLearningDataSource>)dataSource;
-(void)_notifyObservers;
-(void)_setupSidebarWidgetsLearningCadence;
-(id)initWithDataSource:(id)arg1 learningDuration:(double)arg2 learningEpoch:(unsigned long long)arg3 ;
-(void)_updateSidebarWidgetsCommenceDateIfEmpty;
-(BOOL)_requiresLearningCadenceForFavoriteWidgets:(BOOL*)arg1 ;
-(void)_updateSidebarWidgetsEpoch;
-(void)_scheduleWidgetLearningCadenceUpdateTimer:(BOOL)arg1 ;
-(double)learningDuration;
-(void)_sidebarLearningPeriodTimeIsUp:(id)arg1 ;
-(unsigned long long)learningEpoch;
-(void)noteSignificantSidebarStateChangeDidOccur;
-(BOOL)shouldSidebarWidgetsBeInLearningMode;
-(void)setShouldSidebarWidgetsBeInLearningMode:(BOOL)arg1 ;
@end

