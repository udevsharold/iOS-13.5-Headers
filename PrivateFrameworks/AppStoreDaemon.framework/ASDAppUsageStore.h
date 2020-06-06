/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASDAppUsageStats, NSArray;

@interface ASDAppUsageStore : NSObject {

	BOOL _verbose;
	ASDAppUsageStats* _leastUsageCount;
	ASDAppUsageStats* _leastUsageTime;
	ASDAppUsageStats* _topUsageCount;
	ASDAppUsageStats* _topUsageTime;
	NSArray* _usageStats;

}

@property (nonatomic,readonly) ASDAppUsageStats * leastUsageCount;              //@synthesize leastUsageCount=_leastUsageCount - In the implementation block
@property (nonatomic,readonly) ASDAppUsageStats * leastUsageTime;               //@synthesize leastUsageTime=_leastUsageTime - In the implementation block
@property (nonatomic,readonly) ASDAppUsageStats * topUsageCount;                //@synthesize topUsageCount=_topUsageCount - In the implementation block
@property (nonatomic,readonly) ASDAppUsageStats * topUsageTime;                 //@synthesize topUsageTime=_topUsageTime - In the implementation block
@property (nonatomic,readonly) NSArray * usageStats;                            //@synthesize usageStats=_usageStats - In the implementation block
@property (assign,nonatomic) BOOL verbose;                                      //@synthesize verbose=_verbose - In the implementation block
-(id)_sortDescriptors;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(void)_calculateUsageForDurationInDays:(double)arg1 bundleIDs:(id)arg2 includeExtensionUsage:(BOOL)arg3 ;
-(id)_calculateRawUsageFromDate:(id)arg1 endDate:(id)arg2 stats:(id)arg3 ;
-(id)_calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 bundleIDs:(id)arg3 includeExtensionUsage:(BOOL)arg4 ;
-(id)_calculateUsageFromDate:(id)arg1 endDate:(id)arg2 stats:(id)arg3 includeExtensionUsage:(BOOL)arg4 ;
-(id)initWithDurationInDays:(double)arg1 bundleIDs:(id)arg2 ;
-(id)initWithDurationInDays:(double)arg1 bundleIDs:(id)arg2 includeExtensionUsage:(BOOL)arg3 ;
-(id)calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 appMetadata:(id)arg3 ;
-(id)calcluateUsageFromDate:(id)arg1 endDate:(id)arg2 bundleIDs:(id)arg3 ;
-(ASDAppUsageStats *)leastUsageCount;
-(ASDAppUsageStats *)leastUsageTime;
-(ASDAppUsageStats *)topUsageCount;
-(ASDAppUsageStats *)topUsageTime;
-(NSArray *)usageStats;
@end

