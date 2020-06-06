/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, GEOConfigChangeListenerDelegate;
@class _GEOConfigKeyHelper, NSObject;

@interface _GEOConfigChangedListener : NSObject {

	_GEOConfigKeyHelper* keyHelper;
	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;
	id<GEOConfigChangeListenerDelegate> delegate;

}

@property (assign,nonatomic,__weak) _GEOConfigKeyHelper * keyHelper; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
@property (assign,nonatomic,__weak) id<GEOConfigChangeListenerDelegate> delegate; 
+(id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
+(id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<GEOConfigChangeListenerDelegate>)delegate;
-(void)setDelegate:(id<GEOConfigChangeListenerDelegate>)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setKeyHelper:(_GEOConfigKeyHelper *)arg1 ;
-(_GEOConfigKeyHelper *)keyHelper;
-(void)callListener;
@end

