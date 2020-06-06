/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSURLSession, NSURLSessionDataTask, NSObject, NSString;

@interface UnitTestBackgroundSessionTester : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* session;
	NSURLSessionDataTask* task;
	NSObject*<OS_dispatch_semaphore> sema;
	int timeout;
	BackgroundTaskServerTrustTestResult* result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithConfiguration:(id)arg1 result:(BackgroundTaskServerTrustTestResult*)arg2 ;
-(void)startTaskWithURL:(const char*)arg1 ;
@end

