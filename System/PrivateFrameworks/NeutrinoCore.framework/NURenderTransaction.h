/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSMutableArray, NSObject, NSArray;

@interface NURenderTransaction : NSObject {

	long long _nestingLevel;
	NSMutableArray* _requests;
	NSObject*<OS_dispatch_group> _group;

}

@property (readonly) NSArray * pendingRequests; 
+(void)begin;
+(void)commit;
+(void)_commit:(id)arg1 ;
+(void)group:(/*^block*/id)arg1 ;
+(id)currentTransaction;
+(void)setCurrentTransaction:(id)arg1 ;
+(id)ensureCurrentTransaction;
+(id)assertCurrentTransaction;
+(void)commitAndNotifyOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)withCurrentTransaction:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)begin;
-(BOOL)commit;
-(void)flush;
-(NSArray *)pendingRequests;
-(void)submitRequest:(id)arg1 ;
-(void)notifyCompletion:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)submitPendingRequests;
-(void)resetPendingRequests;
@end
