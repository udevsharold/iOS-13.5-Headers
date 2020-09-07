/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAActionConsumer.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {

	NSConditionLock* _doneCondition;
	BOOL _shouldRetryRequest;
	BOOL _alwaysReportFailures;

}
-(id)init;
-(void)setDone:(BOOL)arg1 ;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)waitUntilDone;
-(BOOL)shouldRetryRequest;
-(id)initWithAlwaysReportFailures:(BOOL)arg1 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
@end
