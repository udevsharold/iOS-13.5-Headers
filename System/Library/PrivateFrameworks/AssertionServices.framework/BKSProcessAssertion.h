/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSAssertion.h>

@class RBSAssertion;

@interface BKSProcessAssertion : BKSAssertion {

	unsigned _reason;
	unsigned _flags;
	RBSAssertion* _mediaPlaybackHackAssertion;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,readonly) unsigned reason;              //@synthesize reason=_reason - In the implementation block
+(id)NameForReason:(unsigned)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(unsigned)reason;
-(unsigned)flags;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 ;
-(BOOL)acquire;
-(void)setFlags:(unsigned)arg1 ;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(unsigned long long)_legacyFlagsForFlags:(unsigned)arg1 ;
-(unsigned long long)_legacyReasonForReason:(unsigned)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 pid:(int)arg2 flags:(unsigned)arg3 reason:(unsigned)arg4 name:(id)arg5 withHandler:(/*^block*/id)arg6 acquire:(BOOL)arg7 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 acquire:(BOOL)arg6 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 acquire:(BOOL)arg6 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 ;
@end

