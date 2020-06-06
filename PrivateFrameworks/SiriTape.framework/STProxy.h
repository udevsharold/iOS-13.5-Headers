/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, STAceObjectHandler;
@class GCDAsyncSocket, STProxySocketDelegate, NSObject, NSArray, NSURL, NSMutableArray, NSString;

@interface STProxy : NSObject {

	GCDAsyncSocket* _socket;
	STProxySocketDelegate* _proxySocketDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _useSpeechLogs;
	BOOL _autoExit;
	unsigned long long _speechLogsIndex;
	NSArray* _speechLogs;
	NSURL* _testSpeechURL;
	NSMutableArray* _replayCompletions;
	NSString* _previousAccountIdentifier;
	id<STAceObjectHandler> _aceObjectHandler;

}

@property (nonatomic,retain) NSString * previousAccountIdentifier;                 //@synthesize previousAccountIdentifier=_previousAccountIdentifier - In the implementation block
@property (nonatomic,retain) id<STAceObjectHandler> aceObjectHandler;              //@synthesize aceObjectHandler=_aceObjectHandler - In the implementation block
+(id)sharedServer;
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(void)addObserverActionForType:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)observeAndLogClientFlowPerformanceMetrics;
-(void)didFinishedOneRequestAndExpectMore:(BOOL)arg1 ;
-(void)_startProxyWithActiveServerURL:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3 ;
-(void)_loadSpeechLogsFromURL:(id)arg1 ;
-(void)_sendNextSpeechRequest;
-(void)startProxyWithActiveServerURL:(id)arg1 handler:(id)arg2 ;
-(void)startProxyRecordingWithActiveServerURL:(id)arg1 ;
-(void)startProxyServerWithReplayFileURL:(id)arg1 ;
-(void)startProxyServerWithReplayFileURL:(id)arg1 speechLogURL:(id)arg2 ;
-(void)updateLocalScriptsForReplayFile:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addReplayCompletion:(/*^block*/id)arg1 ;
-(NSString *)previousAccountIdentifier;
-(void)setPreviousAccountIdentifier:(NSString *)arg1 ;
-(id<STAceObjectHandler>)aceObjectHandler;
-(void)setAceObjectHandler:(id<STAceObjectHandler>)arg1 ;
@end

