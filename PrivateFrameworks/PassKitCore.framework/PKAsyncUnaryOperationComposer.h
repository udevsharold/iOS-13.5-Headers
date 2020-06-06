/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _operations;

}
-(id)init;
-(void)addOperation:(/*^block*/id)arg1 ;
-(id)evaluateWithInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)evaluatorWithInput:(id)arg1 ;
@end

