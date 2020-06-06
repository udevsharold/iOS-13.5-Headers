/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(void)invalidate;
-(FBTransaction *)transaction;
-(void)_watchdogTimerFired;
-(void)_dumpDebugInfo;
-(id)initWithTransaction:(id)arg1 ;
@end

