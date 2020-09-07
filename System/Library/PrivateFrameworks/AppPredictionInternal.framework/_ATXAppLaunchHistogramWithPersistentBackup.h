/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/_ATXAppLaunchHistogram.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXBackgroundSaver, _ATXDataStore;

@interface _ATXAppLaunchHistogramWithPersistentBackup : _ATXAppLaunchHistogram <NSSecureCoding> {

	ATXBackgroundSaver* _saver;
	_ATXDataStore* _datastore;
	long long _histogramType;

}

@property (nonatomic,readonly) _ATXDataStore * datastore;              //@synthesize datastore=_datastore - In the implementation block
@property (nonatomic,readonly) long long histogramType;                //@synthesize histogramType=_histogramType - In the implementation block
-(void)flush;
-(void)resetData;
-(void)decayByFactor:(double)arg1 ;
-(void)decayWithHalfLifeInDays:(double)arg1 ;
-(BOOL)removeHistoryForBundleId:(id)arg1 ;
-(int)removeHistoryForBundleIds:(id)arg1 ;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 ;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4 ;
-(void)removeLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4 ;
-(void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2 ;
-(void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2 weight:(float)arg3 ;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 ;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveOnBackgroundQueue:(id)arg3 ;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 loadFromDataStore:(BOOL)arg3 saveOnBackgroundQueue:(id)arg4 ;
-(_ATXDataStore *)datastore;
-(long long)histogramType;
@end
