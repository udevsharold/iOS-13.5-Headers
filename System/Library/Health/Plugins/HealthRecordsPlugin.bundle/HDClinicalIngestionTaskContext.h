/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSFileHandle, NSString;

@interface HDClinicalIngestionTaskContext : NSObject <NSCopying, NSMutableCopying> {

	NSFileHandle* _inputFileHandle;
	unsigned long long _options;
	NSString* _reason;

}

@property (nonatomic,readonly) BOOL isBackgroundTask; 
@property (nonatomic,readonly) BOOL shouldFetchImmediately; 
@property (nonatomic,readonly) BOOL shouldSkipGatewaysUpdate; 
@property (nonatomic,readonly) BOOL shouldSkipFetch; 
@property (nonatomic,readonly) BOOL shouldSkipTermbaseUpdate; 
@property (nonatomic,readonly) BOOL shouldSkipIngestionMetricsSubmission; 
@property (nonatomic,readonly) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSFileHandle * inputFileHandle;                         //@synthesize inputFileHandle=_inputFileHandle - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(NSString *)reason;
-(BOOL)isBackgroundTask;
-(id)initWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(BOOL)shouldFetchImmediately;
-(NSFileHandle *)inputFileHandle;
-(BOOL)shouldSkipFetch;
-(BOOL)shouldSkipGatewaysUpdate;
-(BOOL)shouldSkipTermbaseUpdate;
-(BOOL)shouldSkipIngestionMetricsSubmission;
@end

