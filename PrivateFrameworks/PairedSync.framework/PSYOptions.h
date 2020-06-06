/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSArray;

@interface PSYOptions : NSObject <NSSecureCoding> {

	BOOL _resumePendingJobs;
	BOOL _resetDeviceSyncState;
	BOOL _dryRun;
	NSURL* _activityInfoDirectory;
	unsigned long long _terminationJobCount;
	NSArray* _testInputs;
	NSArray* _jobs;
	unsigned long long _syncSessionType;

}

@property (nonatomic,copy) NSURL * activityInfoDirectory;                                              //@synthesize activityInfoDirectory=_activityInfoDirectory - In the implementation block
@property (assign,getter=shouldResetDeviceSyncState,nonatomic) BOOL resetDeviceSyncState;              //@synthesize resetDeviceSyncState=_resetDeviceSyncState - In the implementation block
@property (assign,nonatomic) BOOL dryRun;                                                              //@synthesize dryRun=_dryRun - In the implementation block
@property (assign,nonatomic) unsigned long long terminationJobCount;                                   //@synthesize terminationJobCount=_terminationJobCount - In the implementation block
@property (nonatomic,copy) NSArray * testInputs;                                                       //@synthesize testInputs=_testInputs - In the implementation block
@property (nonatomic,copy) NSArray * jobs;                                                             //@synthesize jobs=_jobs - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;                                       //@synthesize syncSessionType=_syncSessionType - In the implementation block
@property (assign,getter=shouldResumePendingJobs,nonatomic) BOOL resumePendingJobs;                    //@synthesize resumePendingJobs=_resumePendingJobs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(NSArray *)jobs;
-(unsigned long long)syncSessionType;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
-(BOOL)shouldResumePendingJobs;
-(unsigned long long)terminationJobCount;
-(BOOL)shouldResetDeviceSyncState;
-(void)setResumePendingJobs:(BOOL)arg1 ;
-(NSURL *)activityInfoDirectory;
-(void)setActivityInfoDirectory:(NSURL *)arg1 ;
-(void)setResetDeviceSyncState:(BOOL)arg1 ;
-(void)setTerminationJobCount:(unsigned long long)arg1 ;
-(NSArray *)testInputs;
-(void)setTestInputs:(NSArray *)arg1 ;
-(void)setJobs:(NSArray *)arg1 ;
@end

