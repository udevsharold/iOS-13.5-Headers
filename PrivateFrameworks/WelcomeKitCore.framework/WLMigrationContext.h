/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLDataMigrationDelegate, WLMigrationDataSource;
@class WLSourceDevice, WLMigrationDataCoordinator, WLSQLController, NSMutableArray, NSDate, WLTimeEstimateAccuracyTracker, WLURLSessionController, WLStatistics, WLSourceDeviceMigrationMetadata, NSArray;

@interface WLMigrationContext : NSObject {

	WLSourceDevice* _sourceDevice;
	id<WLDataMigrationDelegate> _delegate;
	const void* _powerAssertion;
	id<WLMigrationDataSource> _dataSource;
	WLMigrationDataCoordinator* _dataCoordinator;
	WLSQLController* _sqlController;
	NSMutableArray* _migrators;
	unsigned long long _expectedDownloadSegmentsRemaining;
	unsigned long long _completedDownloadSegmentCount;
	unsigned long long _expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;
	unsigned long long _expectedDownloadBytesRemainingForItemsWithConcreteSizes;
	double _progress;
	double _lastProgressSentToAndroidDevice;
	NSDate* _throughputSegmentStartDate;
	NSMutableArray* _throughputSamples;
	unsigned long long _throughputBytesInCurrentPeriod;
	unsigned long long _throughputSegmentsInCurrentPeriod;
	WLTimeEstimateAccuracyTracker* _timeEstimateAccuracyTracker;
	WLURLSessionController* _urlSessionController;
	WLStatistics* _aggregateStatistics;
	WLSourceDeviceMigrationMetadata* _metadata;
	NSArray* _importErrors;

}

@property (nonatomic,retain) WLSourceDevice * sourceDevice;                                                               //@synthesize sourceDevice=_sourceDevice - In the implementation block
@property (nonatomic,retain) id<WLDataMigrationDelegate> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) const void* powerAssertion;                                                                  //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) id<WLMigrationDataSource> dataSource;                                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) WLMigrationDataCoordinator * dataCoordinator;                                                //@synthesize dataCoordinator=_dataCoordinator - In the implementation block
@property (nonatomic,retain) WLSQLController * sqlController;                                                             //@synthesize sqlController=_sqlController - In the implementation block
@property (nonatomic,retain) NSMutableArray * migrators;                                                                  //@synthesize migrators=_migrators - In the implementation block
@property (assign,nonatomic) unsigned long long expectedDownloadSegmentsRemaining;                                        //@synthesize expectedDownloadSegmentsRemaining=_expectedDownloadSegmentsRemaining - In the implementation block
@property (assign,nonatomic) unsigned long long completedDownloadSegmentCount;                                            //@synthesize completedDownloadSegmentCount=_completedDownloadSegmentCount - In the implementation block
@property (assign,nonatomic) unsigned long long expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;              //@synthesize expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes=_expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes - In the implementation block
@property (assign,nonatomic) unsigned long long expectedDownloadBytesRemainingForItemsWithConcreteSizes;                  //@synthesize expectedDownloadBytesRemainingForItemsWithConcreteSizes=_expectedDownloadBytesRemainingForItemsWithConcreteSizes - In the implementation block
@property (assign,nonatomic) double progress;                                                                             //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double lastProgressSentToAndroidDevice;                                                      //@synthesize lastProgressSentToAndroidDevice=_lastProgressSentToAndroidDevice - In the implementation block
@property (nonatomic,retain) NSDate * throughputSegmentStartDate;                                                         //@synthesize throughputSegmentStartDate=_throughputSegmentStartDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * throughputSamples;                                                          //@synthesize throughputSamples=_throughputSamples - In the implementation block
@property (assign,nonatomic) unsigned long long throughputBytesInCurrentPeriod;                                           //@synthesize throughputBytesInCurrentPeriod=_throughputBytesInCurrentPeriod - In the implementation block
@property (assign,nonatomic) unsigned long long throughputSegmentsInCurrentPeriod;                                        //@synthesize throughputSegmentsInCurrentPeriod=_throughputSegmentsInCurrentPeriod - In the implementation block
@property (nonatomic,retain) WLTimeEstimateAccuracyTracker * timeEstimateAccuracyTracker;                                 //@synthesize timeEstimateAccuracyTracker=_timeEstimateAccuracyTracker - In the implementation block
@property (nonatomic,retain) WLURLSessionController * urlSessionController;                                               //@synthesize urlSessionController=_urlSessionController - In the implementation block
@property (nonatomic,retain) WLStatistics * aggregateStatistics;                                                          //@synthesize aggregateStatistics=_aggregateStatistics - In the implementation block
@property (nonatomic,retain) WLSourceDeviceMigrationMetadata * metadata;                                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * importErrors;                                                                      //@synthesize importErrors=_importErrors - In the implementation block
-(id<WLDataMigrationDelegate>)delegate;
-(void)setDelegate:(id<WLDataMigrationDelegate>)arg1 ;
-(double)progress;
-(void)setMetadata:(WLSourceDeviceMigrationMetadata *)arg1 ;
-(WLSourceDeviceMigrationMetadata *)metadata;
-(id<WLMigrationDataSource>)dataSource;
-(void)setDataSource:(id<WLMigrationDataSource>)arg1 ;
-(void)setProgress:(double)arg1 ;
-(WLSourceDevice *)sourceDevice;
-(const void*)powerAssertion;
-(void)setPowerAssertion:(const void*)arg1 ;
-(void)setDataCoordinator:(WLMigrationDataCoordinator *)arg1 ;
-(WLMigrationDataCoordinator *)dataCoordinator;
-(void)setSourceDevice:(WLSourceDevice *)arg1 ;
-(WLSQLController *)sqlController;
-(void)setSqlController:(WLSQLController *)arg1 ;
-(NSMutableArray *)migrators;
-(void)setMigrators:(NSMutableArray *)arg1 ;
-(unsigned long long)expectedDownloadSegmentsRemaining;
-(void)setExpectedDownloadSegmentsRemaining:(unsigned long long)arg1 ;
-(unsigned long long)completedDownloadSegmentCount;
-(void)setCompletedDownloadSegmentCount:(unsigned long long)arg1 ;
-(unsigned long long)expectedDownloadSegmentsRemainingForItemsWithEstimatedSizes;
-(void)setExpectedDownloadSegmentsRemainingForItemsWithEstimatedSizes:(unsigned long long)arg1 ;
-(unsigned long long)expectedDownloadBytesRemainingForItemsWithConcreteSizes;
-(void)setExpectedDownloadBytesRemainingForItemsWithConcreteSizes:(unsigned long long)arg1 ;
-(double)lastProgressSentToAndroidDevice;
-(void)setLastProgressSentToAndroidDevice:(double)arg1 ;
-(NSDate *)throughputSegmentStartDate;
-(void)setThroughputSegmentStartDate:(NSDate *)arg1 ;
-(NSMutableArray *)throughputSamples;
-(void)setThroughputSamples:(NSMutableArray *)arg1 ;
-(unsigned long long)throughputBytesInCurrentPeriod;
-(void)setThroughputBytesInCurrentPeriod:(unsigned long long)arg1 ;
-(unsigned long long)throughputSegmentsInCurrentPeriod;
-(void)setThroughputSegmentsInCurrentPeriod:(unsigned long long)arg1 ;
-(WLTimeEstimateAccuracyTracker *)timeEstimateAccuracyTracker;
-(void)setTimeEstimateAccuracyTracker:(WLTimeEstimateAccuracyTracker *)arg1 ;
-(WLURLSessionController *)urlSessionController;
-(void)setUrlSessionController:(WLURLSessionController *)arg1 ;
-(WLStatistics *)aggregateStatistics;
-(void)setAggregateStatistics:(WLStatistics *)arg1 ;
-(NSArray *)importErrors;
-(void)setImportErrors:(NSArray *)arg1 ;
@end

