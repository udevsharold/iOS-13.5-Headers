/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_semaphore;
@class TRSession, NSDictionary, NSError, NSObject;

@interface TROperation : NSOperation {

	TRSession* _session;
	NSDictionary* _result;
	NSError* _error;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,copy) NSDictionary * result;                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TRSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(id)userCancelledError;
-(NSError *)error;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)result;
-(void)setResult:(NSDictionary *)arg1 ;
-(TRSession *)session;
-(void)setSession:(TRSession *)arg1 ;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

