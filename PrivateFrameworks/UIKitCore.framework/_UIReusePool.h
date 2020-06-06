/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface _UIReusePool : NSObject {

	NSMutableSet* _reuseSet;
	unsigned long long _purgePolicy;
	NSObject*<OS_dispatch_queue> _reuseSetAccessQueue;

}

@property (nonatomic,readonly) unsigned long long purgePolicy; 
+(void)initialize;
+(void)__applicationDidEnterBackground:(id)arg1 ;
+(void)__applicationWillEnterForeground:(id)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)initWithPolicy:(unsigned long long)arg1 ;
-(id)reusableObject;
-(unsigned long long)purgePolicy;
-(void)drainPool;
@end

