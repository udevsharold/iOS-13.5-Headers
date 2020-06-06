/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CKDClientContext, CKDKeyValueDiskCache;

@interface CKDPublicIdentityLookupService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CKDClientContext* _context;
	CKDKeyValueDiskCache* _cache;

}

@property (nonatomic,retain) CKDKeyValueDiskCache * cache;                   //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)setCache:(CKDKeyValueDiskCache *)arg1 ;
-(CKDKeyValueDiskCache *)cache;
-(id)initWithClientContext:(id)arg1 ;
-(void)removeCacheForLookupInfos:(id)arg1 ;
-(void)scheduleRequest:(id)arg1 forOperation:(id)arg2 ;
-(void)configureRequest:(id)arg1 parentOperation:(id)arg2 ;
@end

