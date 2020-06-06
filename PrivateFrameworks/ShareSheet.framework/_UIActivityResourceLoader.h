/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface _UIActivityResourceLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _loadBlock;
	NSObject*<OS_dispatch_group> _group;
	id _resource;

}
-(id)initWithQueue:(id)arg1 loadBlock:(/*^block*/id)arg2 ;
-(void)_loadResourceWithBlock:(/*^block*/id)arg1 ;
-(void)loadResourceIfNeeded;
-(void)_getResourceWithBlock:(/*^block*/id)arg1 ;
-(void)getResourceWithBlock:(/*^block*/id)arg1 ;
@end

