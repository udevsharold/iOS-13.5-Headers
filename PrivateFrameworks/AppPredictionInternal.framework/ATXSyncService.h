/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SYService, ATXSyncDelegate;

@interface ATXSyncService : NSObject {

	SYService* _service;
	ATXSyncDelegate* _serviceDelegate;

}

@property (nonatomic,readonly) SYService * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) ATXSyncDelegate * serviceDelegate;              //@synthesize serviceDelegate=_serviceDelegate - In the implementation block
+(id)sharedSyncService;
-(id)_init;
-(SYService *)service;
-(void)resumeSync;
-(void)sendData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)attemptSync;
-(void)handleResultsSyncData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ATXSyncDelegate *)serviceDelegate;
@end

