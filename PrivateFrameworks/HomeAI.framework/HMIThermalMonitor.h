/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, HMFUnfairLock;

@interface HMIThermalMonitor : HMFObject {

	IOHIDEventSystemClientRef _client;
	NSMutableDictionary* _services;
	HMFUnfairLock* _lock;

}

@property (readonly) NSMutableDictionary * services;              //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;              //@synthesize lock=_lock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(HMFUnfairLock *)lock;
-(NSMutableDictionary *)services;
-(BOOL)readValueFromSensor:(int)arg1 value:(double*)arg2 ;
-(BOOL)readMaxValue:(double*)arg1 ;
@end

