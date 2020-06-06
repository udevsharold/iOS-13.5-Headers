/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFReaderSessionCallbacks.h>
#import <libobjc.A.dylib/NFCHardwareManagerCallbacks.h>
#import <libobjc.A.dylib/NFCSessionCallbacks.h>
#import <libobjc.A.dylib/NFCReaderSession.h>
@class NSString;


@protocol NFCReaderSession <NSObject>
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (nonatomic,copy) NSString * alertMessage; 
@required
-(BOOL)isReady;
-(void)invalidateSession;
-(NSString *)alertMessage;
-(void)setAlertMessage:(id)arg1;
-(void)beginSession;
-(void)invalidateSessionWithErrorMessage:(id)arg1;

@end


@protocol OS_dispatch_queue, NFReaderSessionInterfaceNSXPCProxyCreating, NFTag, OS_dispatch_group;
@class NSString, NFWeakReference, NSObject, NSNumber;

@interface NFCReaderSession : NSObject <NFReaderSessionCallbacks, NFCHardwareManagerCallbacks, NFCSessionCallbacks, NFCReaderSession> {

	NFWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<NFReaderSessionInterface>*<NSXPCProxyCreating> _proxy;
	BOOL _started;
	BOOL _invalidated;
	long long _invalidationCode;
	id<NFTag> _connectedTag;
	NSObject*<OS_dispatch_group> _sessionStartInProgress;
	NSString* _alertMessage;
	unsigned long long _pollMethod;
	unsigned long long _sessionConfig;
	NSNumber* _sessionId;
	long long _delegateType;

}

@property (assign,nonatomic) unsigned long long pollMethod;                                                              //@synthesize pollMethod=_pollMethod - In the implementation block
@property (assign,nonatomic) unsigned long long sessionConfig;                                                           //@synthesize sessionConfig=_sessionConfig - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,retain,readonly) NSObject*<NFReaderSessionInterface>*<NSXPCProxyCreating> readerProxy; 
@property (nonatomic,readonly) id<NFTag> connectedTag; 
@property (nonatomic,readonly) NSNumber * sessionId;                                                                     //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) long long delegateType;                                                                   //@synthesize delegateType=_delegateType - In the implementation block
@property (nonatomic,__weak,readonly) id delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (nonatomic,copy) NSString * alertMessage; 
+(BOOL)featureAvailable:(unsigned long long)arg1 ;
+(BOOL)readingAvailable;
-(void)dealloc;
-(id)delegate;
-(BOOL)isReady;
-(BOOL)isInvalidated;
-(NSObject*<OS_dispatch_queue>)sessionQueue;
-(unsigned long long)sessionConfig;
-(void)setSessionConfig:(unsigned long long)arg1 ;
-(NSNumber *)sessionId;
-(void)invalidateSession;
-(BOOL)connectTag:(id)arg1 error:(id*)arg2 ;
-(BOOL)disconnectTagWithError:(id*)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)didInvalidate;
-(void)didStartSession:(id)arg1 ;
-(void)didTerminate:(id)arg1 ;
-(void)didDetectTags:(id)arg1 ;
-(void)didDetectExternalReaderWithNotification:(id)arg1 ;
-(BOOL)checkPresenceWithError:(id*)arg1 ;
-(void)beginSession;
-(void)hardwareFailedToLoad;
-(id<NFTag>)connectedTag;
-(id)ndefStatus:(long long*)arg1 maxMessageLength:(unsigned long long*)arg2 ;
-(void)submitBlockOnDelegateQueue:(/*^block*/id)arg1 ;
-(void)submitBlockOnSessionQueue:(/*^block*/id)arg1 ;
-(id)readNdefMessageWithError:(id*)arg1 ;
-(id)writeLockNdef;
-(BOOL)writeNdefMessage:(id)arg1 error:(id*)arg2 ;
-(void)connectTag:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)transceive:(id)arg1 tagUpdate:(id*)arg2 error:(id*)arg3 ;
-(long long)delegateType;
-(void)invalidateSessionWithReason:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5 ;
-(void)restartPolling;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3 ;
-(void)_callbackDidInvalidateWithError:(id)arg1 ;
-(void)_callbackDidBecomeActive;
-(void)beginSessionWithConfig:(id)arg1 ;
-(void)_invalidateSessionWithCode:(long long)arg1 message:(id)arg2 finalUIState:(long long)arg3 callbackOnQueue:(BOOL)arg4 ;
-(void)_invalidateSessionWithCode:(long long)arg1 callbackOnQueue:(BOOL)arg2 ;
-(void)_startPollingWithMethod:(unsigned long long)arg1 sessionConfig:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)validateDelegate:(id)arg1 expectedType:(long long)arg2 ;
-(BOOL)_connectTag:(id)arg1 error:(id*)arg2 ;
-(void)_restartPollingWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_convertMessageToInternal:(id)arg1 ;
-(void)invalidateSessionWithErrorMessage:(id)arg1 ;
-(void)_stopPollingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<NFReaderSessionInterface>*<NSXPCProxyCreating>)readerProxy;
-(unsigned long long)pollMethod;
-(void)setPollMethod:(unsigned long long)arg1 ;
@end

