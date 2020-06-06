/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, ICMusicSubscriptionLeaseSessionDelegate;
@class NSObject, ICMusicSubscriptionLeaseStatus, ICStoreRequestContext, NSDate;

@interface ICMusicSubscriptionLeaseSession : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _automaticRefreshCount;
	NSObject*<OS_dispatch_source> _automaticRefreshTimerSource;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _isPerformingAutomaticRefresh;
	ICMusicSubscriptionLeaseStatus* _leaseStatus;
	long long _pendingLeaseAcquisitionRevisionID;
	BOOL _delegatedLeaseSession;
	ICStoreRequestContext* _requestContext;
	id<ICMusicSubscriptionLeaseSessionDelegate> _delegate;
	NSDate* _leaseExpirationDate;

}

@property (nonatomic,__weak,readonly) id<ICMusicSubscriptionLeaseSessionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate;                                                    //@synthesize leaseExpirationDate=_leaseExpirationDate - In the implementation block
@property (getter=isDelegatedLeaseSession,nonatomic,readonly) BOOL delegatedLeaseSession;                            //@synthesize delegatedLeaseSession=_delegatedLeaseSession - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;                                          //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy,readonly) ICMusicSubscriptionLeaseStatus * leaseStatus; 
@property (getter=isAutomaticallyRefreshingLease,nonatomic,readonly) BOOL automaticallyRefreshingLease; 
+(id)_sharedOperationQueue;
-(void)dealloc;
-(id)description;
-(id<ICMusicSubscriptionLeaseSessionDelegate>)delegate;
-(ICStoreRequestContext *)requestContext;
-(ICMusicSubscriptionLeaseStatus *)leaseStatus;
-(id)performPlaybackRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDate *)leaseExpirationDate;
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(void)_updateAutomaticRefreshProperties;
-(id)_newOperationForPlaybackRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onQueue_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2 ;
-(void)_performAutomaticRefresh;
-(id)_initWithRequestContext:(id)arg1 isDelegatedLeaseSession:(BOOL)arg2 delegate:(id)arg3 leaseStatus:(id)arg4 ;
-(BOOL)isAutomaticallyRefreshingLease;
-(void)reloadFairPlayKeyStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handlePlaybackLeaseDidEndPushNotification;
-(void)_handleRemoteServerDidBecomeLikelyReachable;
-(void)_receivedUserInteractionEvent;
-(void)_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2 ;
-(BOOL)isDelegatedLeaseSession;
@end

