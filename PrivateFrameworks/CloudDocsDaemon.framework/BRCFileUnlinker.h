/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface BRCFileUnlinker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _cachePurgeSource;
	NSString* _unlinkRootPath;

}
+(id)fileUnlinker;
-(id)init;
-(void)resume;
-(void)_purge;
-(BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg1 ;
-(BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2 ;
-(void)forcePurgeWithCompletionBlock:(/*^block*/id)arg1 ;
@end

