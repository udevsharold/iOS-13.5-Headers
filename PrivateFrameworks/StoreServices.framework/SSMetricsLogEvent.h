/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsLogEvent : SSMetricsMutableEvent

@property (assign,nonatomic) unsigned long long logLevel; 
@property (nonatomic,retain) NSString * logSubsystem; 
@property (nonatomic,retain) NSString * message; 
+(unsigned long long)_logLevelFromString:(id)arg1 ;
+(id)_stringFromLogLevel:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(NSString *)logSubsystem;
-(void)setLogSubsystem:(NSString *)arg1 ;
@end

