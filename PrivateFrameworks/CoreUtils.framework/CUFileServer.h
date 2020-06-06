/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class RPCompanionLinkClient, NSObject, NSMutableDictionary, NSString, NSURL;

@interface CUFileServer : NSObject <CUActivatable> {

	BOOL _activateCalled;
	RPCompanionLinkClient* _clinkClient;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_queue> _ioQueue;
	unsigned long long _lastSessionID;
	char _rootPath[1024];
	NSMutableDictionary* _sessionMap;
	NSObject*<OS_dispatch_source> _sessionTimer;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSURL* _rootDirectoryURL;
	NSString* _serviceType;

}

@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSURL * rootDirectoryURL;                                  //@synthesize rootDirectoryURL=_rootDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)setServiceType:(NSString *)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_sessionTimerFired;
-(void)_sessionInvalidate:(id)arg1 ;
-(void)_handleSessionStart:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleSessionStop:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleKeepAlive:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleQuery:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleQuery:(id)arg1 session:(id)arg2 ;
-(void)_handleRequestFiles:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(NSURL *)rootDirectoryURL;
-(void)setRootDirectoryURL:(NSURL *)arg1 ;
@end

