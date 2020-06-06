/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetricKitCore.framework/MetricKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MXXPCServer.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableSet, NSObject, NSXPCListener, NSMutableDictionary, NSString, MXSource;

@interface MXCore : NSObject <MXXPCServer, NSXPCListenerDelegate> {

	NSMutableSet* _services;
	NSObject*<OS_os_log> _MXCoreLogHandle;
	NSObject*<OS_os_log> _MXCoreXcodeSupportLogHandle;
	NSXPCListener* _xpcListener;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _iVarQueue;
	NSMutableDictionary* _clientDictionary;
	NSString* _currentDataActivityDate;
	long long _currentDataActivityRetryCount;
	MXSource* _source;

}

@property (retain) NSObject*<OS_os_log> MXCoreLogHandle;                             //@synthesize MXCoreLogHandle=_MXCoreLogHandle - In the implementation block
@property (retain) NSObject*<OS_os_log> MXCoreXcodeSupportLogHandle;                 //@synthesize MXCoreXcodeSupportLogHandle=_MXCoreXcodeSupportLogHandle - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                            //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> iVarQueue;                 //@synthesize iVarQueue=_iVarQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientDictionary;                 //@synthesize clientDictionary=_clientDictionary - In the implementation block
@property (nonatomic,retain) NSString * currentDataActivityDate;                     //@synthesize currentDataActivityDate=_currentDataActivityDate - In the implementation block
@property (assign) long long currentDataActivityRetryCount;                          //@synthesize currentDataActivityRetryCount=_currentDataActivityRetryCount - In the implementation block
@property (retain) MXSource * source;                                                //@synthesize source=_source - In the implementation block
@property (retain,readonly) NSMutableSet * services;                                 //@synthesize services=_services - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCore;
-(id)init;
-(void)setSource:(MXSource *)arg1 ;
-(MXSource *)source;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(NSMutableSet *)services;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerClient;
-(void)setClientDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)clientDictionary;
-(id)bundleIDFromPid:(int)arg1 ;
-(id)bundleIDFromURL:(id)arg1 ;
-(void)stopServices;
-(NSObject*<OS_dispatch_queue>)iVarQueue;
-(void)setIVarQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)deliverDummyPayloadForXcodeClient:(id)arg1 ;
-(void)scheduleDataActivity;
-(NSObject*<OS_os_log>)MXCoreLogHandle;
-(id)getDailyActivityCriteria;
-(id)getRetryActivityCriteria;
-(void)createServices;
-(void)setCurrentDataActivityDate:(NSString *)arg1 ;
-(void)setCurrentDataActivityRetryCount:(long long)arg1 ;
-(NSString *)currentDataActivityDate;
-(BOOL)checkSourceDataAvailableForDate:(id)arg1 ;
-(long long)currentDataActivityRetryCount;
-(id)applicationContainerPathForBundleID:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 withError:(id*)arg2 ;
-(id)getMetricPayloadForClient:(id)arg1 dateString:(id)arg2 ;
-(BOOL)writeMetricReport:(id)arg1 atAppContainerPath:(id)arg2 withError:(id*)arg3 ;
-(NSObject*<OS_os_log>)MXCoreXcodeSupportLogHandle;
-(id)getDummyPayloadForClient:(id)arg1 dateString:(id)arg2 ;
-(void)setMXCoreLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(void)setMXCoreXcodeSupportLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

