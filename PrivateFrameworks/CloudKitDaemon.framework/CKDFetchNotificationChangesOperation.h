/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

@interface CKDFetchNotificationChangesOperation : CKDOperation {

	BOOL _wantsChanges;
	BOOL _moreComing;
	/*^block*/id _notificationChangedBlock;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	CKServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL wantsChanges;                                            //@synthesize wantsChanges=_wantsChanges - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                              //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,copy) id notificationChangedBlock;                                    //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
-(void)main;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(id)notificationChangedBlock;
-(void)setWantsChanges:(BOOL)arg1 ;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setNotificationChangedBlock:(id)arg1 ;
-(BOOL)wantsChanges;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(void)_handleFetchChangesRequestFinished:(id)arg1 ;
@end

