/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BCSRemoteFetch : NSObject
+(id)cloudServerRequestHelper;
+(id)createSessionForClientBundleID:(id)arg1 ;
+(id)_completionPool;
+(id)_requestDispatchQueue;
-(void)enqueueCompletionBlock:(/*^block*/id)arg1 forRequest:(id)arg2 isDuplicateRequest:(BOOL*)arg3 ;
-(id)dequeueCompletionBlocksForRequest:(id)arg1 ;
-(id)_hashForRequest:(id)arg1 ;
-(void)_enqueueCompletionBlock:(/*^block*/id)arg1 forRequestHash:(id)arg2 inCompletionPool:(id)arg3 isDuplicateRequest:(BOOL*)arg4 ;
-(id)_dequeueCompletionBlocksForRequestHash:(id)arg1 inCompletionPool:(id)arg2 ;
@end
