/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BRCRelativePath;

@interface BRCAsyncDirectoryEnumerator : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	long long _batchSize;
	BOOL _isRecursive;
	int _error;
	BRCRelativePath* _rootPath;

}

@property (nonatomic,readonly) BRCRelativePath * rootPath;              //@synthesize rootPath=_rootPath - In the implementation block
-(void)dealloc;
-(BRCRelativePath *)rootPath;
-(id)initForEnumeratingBelow:(id)arg1 recursive:(BOOL)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4 ;
-(void)scheduleWithProcessBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

