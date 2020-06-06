/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFServiceHelper, OS_dispatch_queue;
@class CFCommandQueuer, NSObject;

@interface CFClient : NSObject {

	id<AFServiceHelper> _serviceHelper;
	CFCommandQueuer* _commandQueuer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) id<AFServiceHelper> serviceHelper;               //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (retain) CFCommandQueuer * commandQueuer;                 //@synthesize commandQueuer=_commandQueuer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)executeCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpWithSignal:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelOperationsForRequestID:(id)arg1 ;
-(void)resetScriptExecutorCache;
-(id<AFServiceHelper>)serviceHelper;
-(void)setServiceHelper:(id<AFServiceHelper>)arg1 ;
-(id)initWithServiceHelper:(id)arg1 withConnectionName:(id)arg2 ;
-(id)initWithClientLiteWithConnectionName:(id)arg1 ;
-(void)rebootScripter;
-(CFCommandQueuer *)commandQueuer;
-(void)setCommandQueuer:(CFCommandQueuer *)arg1 ;
-(void)_executeRemoteCommand:(id)arg1 peerInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runMaintenanceWithCompletion:(/*^block*/id)arg1 ;
-(void)executeCommand:(id)arg1 peerInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

