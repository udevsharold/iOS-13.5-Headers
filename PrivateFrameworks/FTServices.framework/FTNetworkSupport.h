/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject {

	Class _APSConnectionClass;
	APSConnection* _apsConnection;
	NSTimer* _reliabilityAttemptTimer;
	BOOL _enableCriticalReliability;
	BOOL _criticalReliabilityEnabledState;

}

@property (nonatomic,readonly) BOOL allowAnyNetwork; 
@property (nonatomic,readonly) BOOL validNetworkEnabled; 
@property (nonatomic,readonly) BOOL validNetworkActive; 
@property (nonatomic,readonly) BOOL validNetworkReachable; 
@property (nonatomic,readonly) BOOL wiFiActiveAndReachable; 
@property (nonatomic,readonly) BOOL willSearchForNetwork; 
@property (nonatomic,readonly) BOOL dataActiveAndReachable; 
@property (nonatomic,readonly) BOOL networkEnabled; 
@property (nonatomic,readonly) BOOL networkActive; 
@property (nonatomic,readonly) BOOL networkReachable; 
@property (assign,nonatomic) BOOL enableCriticalReliability; 
+(id)sharedInstance;
-(BOOL)allowAnyNetwork;
-(BOOL)wiFiActiveAndReachable;
-(void)setEnableCriticalReliability:(BOOL)arg1 ;
-(BOOL)networkReachable;
-(BOOL)validNetworkEnabledForBundleId:(id)arg1 ;
-(BOOL)validNetworkActiveForBundleId:(id)arg1 ;
-(BOOL)validNetworkReachableForBundleId:(id)arg1 ;
-(BOOL)willSearchForNetworkForBundleId:(id)arg1 ;
-(BOOL)validNetworkReachable;
-(void)_clearReliabilityTimeoutInterval;
-(void)_tryToEnableReliability;
-(void)_createAPSConnectionIfNeeded;
-(void)_reallySetCriticalReliability:(BOOL)arg1 ;
-(BOOL)validNetworkEnabled;
-(BOOL)validNetworkActive;
-(void)_setReliabilityTimeoutInterval;
-(BOOL)willSearchForNetwork;
-(BOOL)dataActiveAndReachable;
-(BOOL)networkEnabled;
-(BOOL)networkActive;
-(BOOL)enableCriticalReliability;
@end

