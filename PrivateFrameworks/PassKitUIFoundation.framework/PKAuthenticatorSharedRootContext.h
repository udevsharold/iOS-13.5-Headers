/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
@class LAContext;

@interface PKAuthenticatorSharedRootContext : NSObject {

	os_unfair_lock_s _lock;
	LAContext* _LAContext;
	BOOL _assumeUserIntentAvailable;

}

@property (assign,nonatomic) BOOL assumeUserIntentAvailable;              //@synthesize assumeUserIntentAvailable=_assumeUserIntentAvailable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)externalizedContext;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(void)setAssumeUserIntentAvailable:(BOOL)arg1 ;
-(BOOL)assumeUserIntentAvailable;
-(BOOL)_initialUserIntentAvailabilityAssumption;
@end

