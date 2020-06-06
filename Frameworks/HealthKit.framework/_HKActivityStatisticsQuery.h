/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKActivityStatisticsQueryClientInterface.h>

@class NSDate, NSDateComponents, NSString;

@interface _HKActivityStatisticsQuery : HKQuery <HKActivityStatisticsQueryClientInterface> {

	BOOL _deliveredInitial;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDateComponents* _moveIntervalComponents;
	NSDateComponents* _exerciseIntervalComponents;
	/*^block*/id _queryUpdateHandler;
	/*^block*/id _initialQueryResultsHandler;
	double _updateInterval;

}

@property (nonatomic,copy) id initialQueryResultsHandler;                                                          //@synthesize initialQueryResultsHandler=_initialQueryResultsHandler - In the implementation block
@property (assign,setter=_setUpdateInterval:,getter=_updateInterval,nonatomic) double updateInterval;              //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,copy) id queryUpdateHandler;                                                                  //@synthesize queryUpdateHandler=_queryUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(double)_updateInterval;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)client_deliverResult:(id)arg1 query:(id)arg2 ;
-(void)_validateIntervalComponents:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 moveIntervalComponents:(id)arg3 exerciseIntervalComponents:(id)arg4 initialQueryResultsHandler:(/*^block*/id)arg5 ;
-(void)setQueryUpdateHandler:(id)arg1 ;
-(id)queryUpdateHandler;
-(id)initialQueryResultsHandler;
-(void)setInitialQueryResultsHandler:(id)arg1 ;
-(void)_setUpdateInterval:(double)arg1 ;
@end

