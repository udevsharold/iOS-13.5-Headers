/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString, NSArray;

@interface SSMetricsLoadURLEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * appleTimingApp; 
@property (assign,nonatomic) BOOL apsRelayAttempted; 
@property (assign,nonatomic) BOOL apsRelayDidFallback; 
@property (assign,nonatomic) BOOL apsRelayRequested; 
@property (assign,nonatomic) BOOL apsRelaySucceeded; 
@property (nonatomic,retain) NSString * clientCorrelationKey; 
@property (nonatomic,retain) NSString * clientError; 
@property (assign,nonatomic) double connectionEndTime; 
@property (nonatomic,retain) NSString * connectionInterface; 
@property (assign,nonatomic) BOOL connectionReused; 
@property (assign,nonatomic) unsigned long long connectionStartNStatRXBytes; 
@property (assign,nonatomic) unsigned long long connectionStartNStatTXBytes; 
@property (assign,nonatomic) unsigned long long connectionStopNStatRXBytes; 
@property (assign,nonatomic) unsigned long long connectionStopNStatTXBytes; 
@property (assign,nonatomic) double connectionStartTime; 
@property (nonatomic,retain) NSString * connectionType; 
@property (assign,nonatomic) double domainLookupEndTime; 
@property (assign,nonatomic) double domainLookupStartTime; 
@property (nonatomic,retain) NSString * DNSServers; 
@property (nonatomic,retain) NSString * edgeNodeCacheStatus; 
@property (assign,nonatomic) double fetchStartTime; 
@property (assign,nonatomic) BOOL cachedResponse; 
@property (nonatomic,retain) NSArray * networkQualityReports; 
@property (nonatomic,retain) NSString * originalApp; 
@property (assign,nonatomic) unsigned long long redirectCount; 
@property (assign,nonatomic) double redirectEndTime; 
@property (assign,nonatomic) unsigned long long requestMessageSize; 
@property (assign,nonatomic) double redirectStartTime; 
@property (assign,nonatomic) double requestStartTime; 
@property (nonatomic,retain) NSString * requestURL; 
@property (nonatomic,retain) NSString * resolvedIPAddress; 
@property (nonatomic,retain) NSString * responseDate; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) unsigned long long responseMessageSize; 
@property (assign,nonatomic) double responseStartTime; 
@property (assign,nonatomic) double secureConnectionStartTime; 
@property (assign,nonatomic) long long statusCode; 
@property (assign,nonatomic) NSString * TIDState; 
@property (assign,nonatomic) BOOL TLSSessionTickets; 
@property (assign,setter=setXPSessionDuration:,nonatomic) double xpSessionDuration; 
@property (assign,setter=setXPSamplingForced:,nonatomic) BOOL xpSamplingForced; 
@property (assign,setter=setXPSamplingPercentageUsers:,nonatomic) double xpSamplingPercentageUsers; 
@property (assign,setter=setXPSamplingPercentageCachedResponses:,nonatomic) double xpSamplingPercentageCachedResponses; 
+(double)_randomDouble;
+(BOOL)shouldLogTimingMetrics;
+(BOOL)shouldReportCachedEventWithSamplingPercentage:(double)arg1 ;
+(BOOL)shouldReportCachedEvent;
+(BOOL)shouldCollectTimingDataWithSessionDuration:(double)arg1 samplingPercentage:(double)arg2 ;
+(BOOL)shouldCollectTimingDataWithSessionDelegate:(id)arg1 ;
+(id)_timingMetricsWindowStartTime;
+(void)_setTimingMetricsWindowStartTime:(id)arg1 ;
+(BOOL)shouldCollectTimingData;
-(id)init;
-(id)description;
-(long long)statusCode;
-(NSString *)connectionType;
-(void)setResponseEndTime:(double)arg1 ;
-(BOOL)cachedResponse;
-(void)setCachedResponse:(BOOL)arg1 ;
-(double)responseEndTime;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(void)setApsRelaySucceeded:(BOOL)arg1 ;
-(void)setApsRelayAttempted:(BOOL)arg1 ;
-(unsigned long long)redirectCount;
-(void)setConnectionType:(NSString *)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setAppleTimingApp:(NSString *)arg1 ;
-(void)setApsRelayDidFallback:(BOOL)arg1 ;
-(void)setClientCorrelationKey:(NSString *)arg1 ;
-(void)setClientError:(NSString *)arg1 ;
-(void)setConnectionEndTime:(double)arg1 ;
-(void)setConnectionInterface:(NSString *)arg1 ;
-(void)setConnectionReused:(BOOL)arg1 ;
-(void)setConnectionStartNStatRXBytes:(unsigned long long)arg1 ;
-(void)setConnectionStartNStatTXBytes:(unsigned long long)arg1 ;
-(void)setConnectionStartTime:(double)arg1 ;
-(void)setConnectionStopNStatRXBytes:(unsigned long long)arg1 ;
-(void)setConnectionStopNStatTXBytes:(unsigned long long)arg1 ;
-(void)setDNSServers:(NSString *)arg1 ;
-(void)setDomainLookupEndTime:(double)arg1 ;
-(void)setDomainLookupStartTime:(double)arg1 ;
-(void)setEdgeNodeCacheStatus:(NSString *)arg1 ;
-(void)setFetchStartTime:(double)arg1 ;
-(void)setNetworkQualityReports:(NSArray *)arg1 ;
-(void)setOriginalApp:(NSString *)arg1 ;
-(void)setRedirectEndTime:(double)arg1 ;
-(void)setRedirectStartTime:(double)arg1 ;
-(void)setRequestMessageSize:(unsigned long long)arg1 ;
-(void)setRequestURL:(NSString *)arg1 ;
-(void)setResolvedIPAddress:(NSString *)arg1 ;
-(void)setResponseDate:(NSString *)arg1 ;
-(void)setResponseMessageSize:(unsigned long long)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setSecureConnectionStartTime:(double)arg1 ;
-(void)setTIDState:(NSString *)arg1 ;
-(void)setTLSSessionTickets:(BOOL)arg1 ;
-(NSString *)appleTimingApp;
-(BOOL)apsRelayAttempted;
-(BOOL)apsRelayDidFallback;
-(BOOL)apsRelaySucceeded;
-(NSString *)clientCorrelationKey;
-(NSString *)clientError;
-(double)connectionEndTime;
-(NSString *)connectionInterface;
-(BOOL)connectionReused;
-(unsigned long long)connectionStartNStatRXBytes;
-(unsigned long long)connectionStartNStatTXBytes;
-(unsigned long long)connectionStopNStatRXBytes;
-(unsigned long long)connectionStopNStatTXBytes;
-(double)connectionStartTime;
-(NSString *)DNSServers;
-(double)domainLookupEndTime;
-(double)domainLookupStartTime;
-(NSString *)edgeNodeCacheStatus;
-(double)fetchStartTime;
-(NSArray *)networkQualityReports;
-(NSString *)originalApp;
-(double)redirectEndTime;
-(double)redirectStartTime;
-(unsigned long long)requestMessageSize;
-(NSString *)requestURL;
-(NSString *)resolvedIPAddress;
-(NSString *)responseDate;
-(unsigned long long)responseMessageSize;
-(double)responseStartTime;
-(double)secureConnectionStartTime;
-(NSString *)TIDState;
-(BOOL)TLSSessionTickets;
-(double)xpSessionDuration;
-(BOOL)xpSamplingForced;
-(double)xpSamplingPercentageUsers;
-(double)xpSamplingPercentageCachedResponses;
-(void)setXPSamplingForced:(BOOL)arg1 ;
-(void)setXPSessionDuration:(double)arg1 ;
-(void)setXPSamplingPercentageUsers:(double)arg1 ;
-(void)setXPSamplingPercentageCachedResponses:(double)arg1 ;
-(BOOL)apsRelayRequested;
-(void)setApsRelayRequested:(BOOL)arg1 ;
@end

