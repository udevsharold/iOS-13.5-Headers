/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class CUBonjourBrowser, NSString, NSObject, CUReachabilityMonitor, SFSession;

@interface SFDeviceOperationWiFiSetup : NSObject {

	CUBonjourBrowser* _bonjourBrowser;
	NSString* _bonjourTestID;
	NSObject*<OS_dispatch_source> _bonjourTimer;
	BOOL _invalidateCalled;
	BOOL _reachabilityEnabled;
	CUReachabilityMonitor* _reachabilityMonitor;
	unsigned long long _startTicks;
	unsigned long long _startBonjourTestTicks;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	int _bonjourTestState;
	unsigned _repairFlags;
	unsigned _setupFlags;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _metricBonjourTestSeconds;
	double _metricTotalSeconds;
	double _metricWiFiSetupSeconds;
	SFSession* _sfSession;

}

@property (nonatomic,readonly) int bonjourTestState;                                  //@synthesize bonjourTestState=_bonjourTestState - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) double metricBonjourTestSeconds;                       //@synthesize metricBonjourTestSeconds=_metricBonjourTestSeconds - In the implementation block
@property (nonatomic,readonly) double metricTotalSeconds;                             //@synthesize metricTotalSeconds=_metricTotalSeconds - In the implementation block
@property (nonatomic,readonly) double metricWiFiSetupSeconds;                         //@synthesize metricWiFiSetupSeconds=_metricWiFiSetupSeconds - In the implementation block
@property (assign,nonatomic) unsigned repairFlags;                                    //@synthesize repairFlags=_repairFlags - In the implementation block
@property (assign,nonatomic) unsigned setupFlags;                                     //@synthesize setupFlags=_setupFlags - In the implementation block
@property (nonatomic,retain) SFSession * sfSession;                                   //@synthesize sfSession=_sfSession - In the implementation block
-(id)init;
-(void)_activate;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)activate;
-(void)_complete:(id)arg1 ;
-(unsigned)setupFlags;
-(void)setSetupFlags:(unsigned)arg1 ;
-(SFSession *)sfSession;
-(void)setSfSession:(SFSession *)arg1 ;
-(void)_activate2;
-(void)_setupResponse:(id)arg1 ;
-(void)_bonjourTestFoundDevice:(id)arg1 ;
-(void)_bonjourTestTimeout;
-(void)_bonjourTestStart;
-(int)bonjourTestState;
-(double)metricBonjourTestSeconds;
-(double)metricTotalSeconds;
-(double)metricWiFiSetupSeconds;
-(unsigned)repairFlags;
-(void)setRepairFlags:(unsigned)arg1 ;
@end
