/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface WLKAsyncOperation : NSOperation {

	int _state;

}
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingIsExecuting;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
@end

