/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskOperation.h>

@class NSError, CATTaskClient, NSNumber;

@interface CATRemoteTaskOperation : CATTaskOperation {

	NSError* mClientError;
	CATTaskClient* _client;
	NSNumber* _remotePhase;

}

@property (nonatomic,copy) NSNumber * remotePhase;                  //@synthesize remotePhase=_remotePhase - In the implementation block
@property (nonatomic,readonly) CATTaskClient * client;              //@synthesize client=_client - In the implementation block
+(BOOL)isCancelable;
+(id)invalidRemoteTaskWithRequest:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(CATTaskClient *)client;
-(void)processMessage:(id)arg1 ;
-(void)operationWillFinish;
-(id)initWithRequest:(id)arg1 clientError:(id)arg2 ;
-(void)cancelOperationIfNeeded;
-(void)updateProgressWithRemoteProgress:(id)arg1 ;
-(void)updateCompletedUnitCount:(long long)arg1 andTotalUnitCount:(long long)arg2 ;
-(void)processNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSNumber *)remotePhase;
-(void)setRemotePhase:(NSNumber *)arg1 ;
-(id)initWithRequest:(id)arg1 client:(id)arg2 ;
-(void)fetchProgress;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)clientFailedWithError:(id)arg1 ;
@end

