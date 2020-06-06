/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {

	NSArray* mRemoteTasks;
	NSOperationQueue* mQueue;

}

@property (nonatomic,copy,readonly) NSArray * remoteTaskOperations; 
-(id)init;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithRemoteTaskOperations:(id)arg1 ;
-(void)cancelSubOperations;
-(void)remoteTaskDidFinish:(id)arg1 ;
-(id)initWithTaskClient:(id)arg1 requests:(id)arg2 ;
-(NSArray *)remoteTaskOperations;
@end

