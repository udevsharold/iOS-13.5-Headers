/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSMapTable, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {

	os_unfair_lock_s _lock;
	NSMapTable* _delegegatesByCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
+(void)removeDelegateForCache:(id)arg1 ;
-(id)init;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
-(void)removeDelegateForCache:(id)arg1 ;
@end

