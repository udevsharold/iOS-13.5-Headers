/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_TPSXPCExportable.h>

@class TPSDuetDataProvider, TPSAnalyticsDataProvider, _TPSXPCConnection, NSString;

@interface TPSAnalyticsEventController : NSObject <_TPSXPCExportable> {

	TPSDuetDataProvider* _duetDataProvider;
	TPSAnalyticsDataProvider* _dataProvider;
	_TPSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> analyticsQueue; 
@property (nonatomic,retain) _TPSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) TPSAnalyticsDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)callerIsTipsd;
-(id)_init;
-(id)exportedInterface;
-(_TPSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(_TPSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)analyticsQueue;
-(void)connectionInvalidated;
-(void)setDataProvider:(TPSAnalyticsDataProvider *)arg1 ;
-(TPSAnalyticsDataProvider *)dataProvider;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)_destroyXPCConnection;
-(void)logAnalyticsEvent:(id)arg1 ;
-(void)logAnalyticsEvents:(id)arg1 ;
-(void)logAnalyticsEventsFromTipsd:(id)arg1 ;
-(void)sendToCoreAnalytics:(id)arg1 eventName:(id)arg2 ;
-(void)logAnalyticsEventFromTipsd:(id)arg1 ;
@end

