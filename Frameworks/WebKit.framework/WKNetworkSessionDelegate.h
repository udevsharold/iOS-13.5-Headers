/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionWebSocketDelegate.h>

@class NSString;

@interface WKNetworkSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate> {

	WeakPtr<WebKit::NetworkSessionCocoa>* _session;
	WeakPtr<WebKit::SessionWrapper>* _sessionWrapper;
	BOOL _withCredentials;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 webSocketTask:(id)arg2 didCloseWithCode:(long long)arg3 reason:(id)arg4 ;
-(void)URLSession:(id)arg1 webSocketTask:(id)arg2 didOpenWithProtocol:(id)arg3 ;
-(NetworkDataTaskCocoa*)existingTask:(id)arg1 ;
-(WebSocketTask*)existingWebSocketTask:(id)arg1 ;
-(id)initWithNetworkSession:(NetworkSessionCocoa*)arg1 wrapper:(SessionWrapper*)arg2 withCredentials:(BOOL)arg3 ;
-(void)sessionInvalidated;
@end

