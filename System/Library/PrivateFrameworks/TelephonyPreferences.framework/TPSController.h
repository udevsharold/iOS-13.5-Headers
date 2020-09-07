/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
@class NSMapTable;

@interface TPSController : NSObject {

	os_unfair_lock_s _delegateLock;
	NSMapTable* _delegateToQueue;

}

@property (assign,nonatomic) os_unfair_lock_s delegateLock;               //@synthesize delegateLock=_delegateLock - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;              //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
-(id)init;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMapTable *)delegateToQueue;
-(void)performAtomicDelegateBlock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)delegateLock;
-(void)setDelegateLock:(os_unfair_lock_s)arg1 ;
@end
