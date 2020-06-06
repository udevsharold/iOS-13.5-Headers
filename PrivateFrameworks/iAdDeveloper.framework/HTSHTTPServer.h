/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, HTSHTTPServerDelegate;
#import <iAdDeveloper/iAdDeveloper-Structs.h>
@class NSMutableArray, NSObject, NSString, NSMutableDictionary;

@interface HTSHTTPServer : NSObject {

	int _listenSocket4;
	NSMutableArray* _activeConnections;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_source> _listenSource4;
	NSString* _nodename;
	unsigned long long _bytesWritten;
	double _lastReplenishTime;
	NSMutableDictionary* _authTokens;
	BOOL _digestAuthenticationEnabled;
	BOOL _pipeliningEnabled;
	unsigned short _port;
	int _cacheMaxAge;
	id<HTSHTTPServerDelegate> _delegate;
	double _latency;
	double _latencyStddev;
	double _kbps;
	double _bandwidthStddev;
	unsigned long long _totalBytesWritten;
	CFHTTPMessageRef _currentRequest;
	NSString* _documentRoot;

}

@property (assign,nonatomic) CFHTTPMessageRef currentRequest;                         //@synthesize currentRequest=_currentRequest - In the implementation block
@property (assign,nonatomic) id<HTSHTTPServerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (nonatomic,readonly) unsigned short port;                                   //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSString * urlString; 
@property (nonatomic,copy) NSString * documentRoot;                                   //@synthesize documentRoot=_documentRoot - In the implementation block
@property (assign,nonatomic) BOOL digestAuthenticationEnabled;                        //@synthesize digestAuthenticationEnabled=_digestAuthenticationEnabled - In the implementation block
@property (assign,nonatomic) double latency;                                          //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) double latencyStddev;                                    //@synthesize latencyStddev=_latencyStddev - In the implementation block
@property (assign,nonatomic) double kbps;                                             //@synthesize kbps=_kbps - In the implementation block
@property (assign,nonatomic) double bandwidthStddev;                                  //@synthesize bandwidthStddev=_bandwidthStddev - In the implementation block
@property (assign,nonatomic) int cacheMaxAge;                                         //@synthesize cacheMaxAge=_cacheMaxAge - In the implementation block
@property (assign,nonatomic) BOOL pipeliningEnabled;                                  //@synthesize pipeliningEnabled=_pipeliningEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytesWritten;                  //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
-(id)init;
-(void)dealloc;
-(id<HTSHTTPServerDelegate>)delegate;
-(void)setDelegate:(id<HTSHTTPServerDelegate>)arg1 ;
-(unsigned short)port;
-(double)latency;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CFHTTPMessageRef)currentRequest;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned long long)totalBytesWritten;
-(void)setCurrentRequest:(CFHTTPMessageRef)arg1 ;
-(void)setLatency:(double)arg1 ;
-(NSString *)urlString;
-(NSString *)documentRoot;
-(void)setDocumentRoot:(NSString *)arg1 ;
-(BOOL)_listenOnPort:(unsigned short)arg1 ;
-(void)resetNetworkSetup;
-(id)initWithPort:(unsigned short)arg1 documentRoot:(id)arg2 ;
-(void)_cleanupListenSocket;
-(double)_currentLatency;
-(void)_handleGeneralRequest:(id)arg1 fromConnection:(id)arg2 ;
-(id)_mimeTypeForExtension:(id)arg1 ;
-(void)_returnResponse:(id)arg1 toConnection:(id)arg2 closeAfterSending:(BOOL)arg3 ;
-(id)_restrictedFilePathForRelativePath:(id)arg1 ;
-(void)_respondWithData:(id)arg1 mimeType:(id)arg2 toRequest:(id)arg3 connection:(id)arg4 ;
-(id)_authenticationResponseForRequest:(id)arg1 ;
-(void)_connectionComplete:(id)arg1 ;
-(void)_connection:(id)arg1 hadError:(id)arg2 ;
-(void)_connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(unsigned long long)availableBandwidth;
-(void)consumedBandwidth:(unsigned long long)arg1 ;
-(void)setKbps:(double)arg1 ;
-(BOOL)digestAuthenticationEnabled;
-(void)setDigestAuthenticationEnabled:(BOOL)arg1 ;
-(double)latencyStddev;
-(void)setLatencyStddev:(double)arg1 ;
-(double)kbps;
-(double)bandwidthStddev;
-(void)setBandwidthStddev:(double)arg1 ;
-(int)cacheMaxAge;
-(void)setCacheMaxAge:(int)arg1 ;
-(BOOL)pipeliningEnabled;
-(void)setPipeliningEnabled:(BOOL)arg1 ;
@end

