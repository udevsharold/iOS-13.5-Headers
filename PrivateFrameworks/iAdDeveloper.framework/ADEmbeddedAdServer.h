/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <libobjc.A.dylib/HTSHTTPServerDelegate.h>

@protocol ADEmbeddedAdServerDelegate;
@class HTSHTTPServer, NSMutableDictionary, NSString, NSDictionary, NSArray;

@interface ADEmbeddedAdServer : NSObject <HTSHTTPServerDelegate> {

	HTSHTTPServer* _server;
	NSMutableDictionary* _authTokens;
	FSEventStreamRef _stream;
	BOOL _defaultsToNoQualifiedAds;
	BOOL _alwaysRegenerateWebArchives;
	id<ADEmbeddedAdServerDelegate> _delegate;
	NSString* _publicURLRoot;
	NSDictionary* _defaultAdData;
	NSString* _adPath;
	NSArray* _adManifests;

}

@property (assign,nonatomic) id<ADEmbeddedAdServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned short port; 
@property (nonatomic,readonly) NSString * urlString; 
@property (nonatomic,copy) NSString * publicURLRoot;                               //@synthesize publicURLRoot=_publicURLRoot - In the implementation block
@property (nonatomic,copy) NSString * adPath;                                      //@synthesize adPath=_adPath - In the implementation block
@property (assign,nonatomic) BOOL alwaysRegenerateWebArchives;                     //@synthesize alwaysRegenerateWebArchives=_alwaysRegenerateWebArchives - In the implementation block
@property (nonatomic,retain) NSArray * adManifests;                                //@synthesize adManifests=_adManifests - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultAdData;                         //@synthesize defaultAdData=_defaultAdData - In the implementation block
@property (assign,nonatomic) BOOL defaultsToNoQualifiedAds;                        //@synthesize defaultsToNoQualifiedAds=_defaultsToNoQualifiedAds - In the implementation block
@property (assign,nonatomic) BOOL digestAuthenticationEnabled; 
@property (assign,nonatomic) double latency; 
@property (assign,nonatomic) double latencyStddev; 
@property (assign,nonatomic) double kbps; 
@property (assign,nonatomic) double bandwidthStddev; 
@property (assign,nonatomic) int cacheMaxAge; 
@property (assign,nonatomic) BOOL pipeliningEnabled; 
@property (nonatomic,readonly) unsigned long long totalBytesWritten; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)adBundleAtURL:(id)arg1 matchesRequest:(id)arg2 ;
+(id)creativesForAdBundleAtURL:(id)arg1 matchingRequest:(id)arg2 ;
+(id)iAdDeviceModelForDeviceModel:(id)arg1 ;
+(id)supportedDevicesForAdProperties:(id)arg1 ;
+(BOOL)creativeTypeMatches:(id)arg1 type:(int)arg2 creativeType:(id)arg3 ;
+(id)manifestForAdAtURL:(id)arg1 ;
+(id)accessibilityDescriptionForAccessibilityKey:(id)arg1 ;
+(int)creativeTypeForPlistType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<ADEmbeddedAdServerDelegate>)delegate;
-(void)setDelegate:(id<ADEmbeddedAdServerDelegate>)arg1 ;
-(unsigned short)port;
-(double)latency;
-(unsigned long long)totalBytesWritten;
-(void)setLatency:(double)arg1 ;
-(NSString *)urlString;
-(void)resetNetworkSetup;
-(void)httpServerListenSocketFailed:(id)arg1 ;
-(void)httpServer:(id)arg1 receivedConnection:(id)arg2 ;
-(void)httpServer:(id)arg1 closedConnection:(id)arg2 ;
-(void)httpServer:(id)arg1 closedConnection:(id)arg2 withError:(id)arg3 ;
-(id)httpServer:(id)arg1 proposedResponse:(id)arg2 ;
-(void)httpServer:(id)arg1 logMessage:(id)arg2 ;
-(id)_mimeTypeForExtension:(id)arg1 ;
-(id)httpServer:(id)arg1 rewritePath:(id)arg2 ;
-(void)httpServer:(id)arg1 connection:(id)arg2 blockedSandboxViolation:(id)arg3 ;
-(void)httpServer:(id)arg1 dataForRequest:(id)arg2 resolvedPath:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)httpServer:(id)arg1 shouldAllowRequest:(id)arg2 withAuthorization:(id)arg3 ;
-(id)httpServer:(id)arg1 unhandledRequest:(id)arg2 ;
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
-(void)httpServer:(id)arg1 connection:(id)arg2 enqueuedResponseToRequest:(id)arg3 statusCode:(int)arg4 length:(unsigned long long)arg5 ;
-(void)httpServer:(id)arg1 connection:(id)arg2 wroteBytes:(unsigned long long)arg3 forResponseToRequest:(id)arg4 remaining:(unsigned long long)arg5 ;
-(void)httpServer:(id)arg1 connection:(id)arg2 wroteBytes:(unsigned long long)arg3 andCompletedResponseToRequest:(id)arg4 ;
-(void)httpServer:(id)arg1 connection:(id)arg2 droppedResponseToRequestBeforeClosing:(id)arg3 ;
-(void)setAdPath:(NSString *)arg1 ;
-(id)webArchiveForDirectory:(id)arg1 withBaseURL:(id)arg2 ;
-(id)_handlePostRequest:(id)arg1 ;
-(id)_handleGenericPostRequest:(id)arg1 ;
-(id)_handleBatchRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleLogImpressionRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleLogSysEventRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleLogAdEventRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleLogAdContentErrorRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleSegmentUpdateRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleAdSpaceStatusEventRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleServerErrorRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleOptOutRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleManifestRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleMescalSignSAPSetupCertificateRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleMescalSignSAPSetupRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleLogAggregateMetricsRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleConfigurationRequest:(id)arg1 message:(id)arg2 ;
-(id)_handleGenericAnalyticsRequest:(id)arg1 message:(id)arg2 type:(int)arg3 ;
-(id)adDataForAdBundleAtPath:(id)arg1 creative:(id)arg2 requesterId:(id)arg3 allowWebArchive:(BOOL)arg4 ;
-(id)_defaultResponseForBatchRequest:(id)arg1 ;
-(NSArray *)adManifests;
-(void)setAdManifests:(NSArray *)arg1 ;
-(id)_webResourcesInDirectory:(id)arg1 baseURL:(id)arg2 ;
-(id)_webResourceForPath:(id)arg1 url:(id)arg2 ;
-(id)_integerColorFromStringColor:(id)arg1 ;
-(id)_webArchiveFilenameForDirectory:(id)arg1 withBaseURL:(id)arg2 ;
-(id)_actionDictionaryFromProperties:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(BOOL)_tryAddingAdTagContentStringForCreative:(id)arg1 toAdReponse:(id)arg2 withAdPath:(id)arg3 ;
-(id)_adDataForPath:(id)arg1 creative:(id)arg2 requester:(id)arg3 error:(id*)arg4 ;
-(id)initWithPort:(unsigned short)arg1 adPath:(id)arg2 ;
-(NSString *)publicURLRoot;
-(void)setPublicURLRoot:(NSString *)arg1 ;
-(BOOL)defaultsToNoQualifiedAds;
-(void)setDefaultsToNoQualifiedAds:(BOOL)arg1 ;
-(NSDictionary *)defaultAdData;
-(void)setDefaultAdData:(NSDictionary *)arg1 ;
-(NSString *)adPath;
-(BOOL)alwaysRegenerateWebArchives;
-(void)setAlwaysRegenerateWebArchives:(BOOL)arg1 ;
@end

