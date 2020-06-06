/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
@class NADelegateMethodLogSettings, Protocol, NSHashTable, NSMapTable, NSArray;

@interface NADelegateDispatcher : NSObject {

	os_unfair_lock_s _lock;
	NADelegateMethodLogSettings* _logSettings;
	Protocol* _protocol;
	NSHashTable* _observerTable;
	NSMapTable* _cachedMethodMetadataBySelector;
	NSArray* _overrideObservers;

}

@property (nonatomic,readonly) os_unfair_lock_s lock;                                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) Protocol * protocol;                                      //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSHashTable * observerTable;                              //@synthesize observerTable=_observerTable - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedMethodMetadataBySelector;              //@synthesize cachedMethodMetadataBySelector=_cachedMethodMetadataBySelector - In the implementation block
@property (nonatomic,retain) NSArray * overrideObservers;                                //@synthesize overrideObservers=_overrideObservers - In the implementation block
@property (nonatomic,readonly) id proxy; 
@property (nonatomic,readonly) NSArray * observers; 
@property (nonatomic,retain) NADelegateMethodLogSettings * logSettings;                  //@synthesize logSettings=_logSettings - In the implementation block
+(id)_findMethodSignatureForSelector:(SEL)arg1 inProtocol:(id)arg2 ;
+(id)dispatcherWithProtocol:(id)arg1 logSettings:(id)arg2 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(os_unfair_lock_s)lock;
-(Protocol *)protocol;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)proxy;
-(NSArray *)observers;
-(id)initWithProtocol:(id)arg1 logSettings:(id)arg2 ;
-(id)_lock_methodMetadataForSelector:(SEL)arg1 ;
-(id)_methodMetadataForSelector:(SEL)arg1 ;
-(void)_logEventForInvocation:(id)arg1 metadata:(id)arg2 ;
-(id)_effectiveObservers;
-(id)_trampolineBlockForSelector:(SEL)arg1 withMethodSignature:(id)arg2 ;
-(void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 ;
-(void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 ;
-(void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 ;
-(void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 ;
-(void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7 ;
-(void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7 arg4:(id)arg8 ;
-(void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7 arg4:(id)arg8 arg5:(id)arg9 ;
-(id)_descriptionForArgument:(id)arg1 index:(unsigned long long)arg2 format:(BOOL)arg3 metadata:(id)arg4 ;
-(void)registerCustomHandlerForSelector:(SEL)arg1 handler:(/*^block*/id)arg2 ;
-(void)registerCustomLogSettings:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ;
-(void)dispatchMessageExcludingSender:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NADelegateMethodLogSettings *)logSettings;
-(void)setLogSettings:(NADelegateMethodLogSettings *)arg1 ;
-(NSHashTable *)observerTable;
-(NSMapTable *)cachedMethodMetadataBySelector;
-(NSArray *)overrideObservers;
-(void)setOverrideObservers:(NSArray *)arg1 ;
@end

