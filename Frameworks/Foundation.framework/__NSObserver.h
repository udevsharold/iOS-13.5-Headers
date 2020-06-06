/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNotificationCenter, NSOperationQueue, NSString;

@interface __NSObserver : NSObject {

	NSNotificationCenter* nc;
	NSOperationQueue* queue;
	NSString* name;
	id object;
	/*^block*/id block;

}
+(id)observerWithCenter:(id)arg1 queue:(id)arg2 name:(id)arg3 object:(id)arg4 block:(/*^block*/id)arg5 ;
+(BOOL)isAnObserver:(id)arg1 ;
+(void)forgetObserver:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)object;
-(void)_doit:(id)arg1 ;
@end

