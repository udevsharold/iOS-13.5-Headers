/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface WFCloudKitAsyncOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;

}

@property (assign) BOOL isExecuting;              //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)finishExecuting;
-(void)startExecuting;
@end

