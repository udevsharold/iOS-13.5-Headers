/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKCancelObservable.h>

@class NSMutableArray, NSString;

@interface PKAsyncOperationState : NSObject <PKCancelObservable> {

	os_unfair_lock_s _actionLock;
	NSMutableArray* _cancelActions;
	os_unfair_lock_s _lock;
	BOOL _canceled;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
-(id)init;
-(void)_invalidate;
-(id)_init;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)_cancel;
-(BOOL)isCanceled;
-(void)addCancelAction:(/*^block*/id)arg1 ;
@end
