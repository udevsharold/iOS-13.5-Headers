/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@class NSString;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {

	NSString* _experimentId;

}

@property (readonly) NSString * experimentId;              //@synthesize experimentId=_experimentId - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tags;
-(id)metrics;
-(NSString *)experimentId;
-(id)initWithExperimentId:(id)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(int)projectIdForExperiment;
@end

