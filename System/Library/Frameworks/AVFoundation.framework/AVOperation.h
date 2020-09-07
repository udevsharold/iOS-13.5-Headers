/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	long long _status;
	NSError* _error;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(void)initialize;
+(long long)statusOfOperations:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(long long)status;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(BOOL)evaluateDependenciesAndMarkAsExecuting;
-(void)markAsCancelled;
-(void)didEnterTerminalState;
-(BOOL)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4 ;
@end
