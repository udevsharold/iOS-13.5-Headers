/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSHashTable, NSMutableSet, NSTimer;

@interface GEOTransitRouteUpdateRequester : NSObject {

	os_unfair_lock_s _updatersLock;
	NSHashTable* _updaters;
	os_unfair_lock_s _processedRequestsLock;
	NSMutableSet* _processedRequests;
	os_unfair_lock_s _inflightRequestsLock;
	NSMutableSet* _inflightRequests;
	NSTimer* _updateTimer;
	unsigned long long _maxRetries;
	unsigned long long _numRetries;
	double _initialDelay;
	double _requestInterval;

}

@property (assign,nonatomic) double initialDelay;                             //@synthesize initialDelay=_initialDelay - In the implementation block
@property (assign,nonatomic) double requestInterval;                          //@synthesize requestInterval=_requestInterval - In the implementation block
@property (nonatomic,readonly) NSHashTable * updaters;                        //@synthesize updaters=_updaters - In the implementation block
@property (nonatomic,readonly) NSMutableSet * processedRequests;              //@synthesize processedRequests=_processedRequests - In the implementation block
+(id)sharedInstance;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
-(id)initPrivate;
-(void)_cancelUpdateTimer;
-(void)_scheduleUpdateTimerWithInterval:(double)arg1 ;
-(void)_purgeAllObjects;
-(NSHashTable *)updaters;
-(void)_cancelAllRequestsIfNeeded;
-(double)requestInterval;
-(void)_removeRequestsIfApplicable:(id)arg1 ;
-(void)_processRequests;
-(id)_requestsForUpdaters:(id)arg1 ;
-(void)_sendRequestForRequests:(id)arg1 ;
-(id)_uuidsForRequests:(id)arg1 ;
-(void)_handleResponse:(id)arg1 andError:(id)arg2 forRequest:(id)arg3 ;
-(void)registerRouteUpdater:(id)arg1 ;
-(void)unregisterRouteUpdater:(id)arg1 ;
-(NSMutableSet *)processedRequests;
-(void)setRequestInterval:(double)arg1 ;
@end

